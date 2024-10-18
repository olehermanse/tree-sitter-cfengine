import sys
import tree_sitter_cfengine as tscfengine
from typing import Generator
from tree_sitter import Language, Parser, Node, Tree

PY_LANGUAGE = Language(tscfengine.language())
parser = Parser(PY_LANGUAGE)

def text(node: Node):
    if not node.text:
        return ""
    return node.text.decode("utf-8")

class Formatter:
    def __init__(self):
        self.empty = True
        self.previous = None
        self.buffer = ""

    def _write(self, message, end="\n"):
        # print(message, end=end)
        self.buffer += message + end

    def print_lines(self, lines, indent):
        for line in lines:
            self.print(line, indent)

    def print(self, string, indent):
        if type(string) is not str:
           string = text(string)
        if not self.empty:
            self._write("\n", end="")
        self._write(" " * indent + string, end="")
        self.empty = False

    def print_same_line(self, string):
        if type(string) is not str:
            string = text(string)
        self._write(string, end="")

    def update_previous(self, node):
        tmp = self.previous
        self.previous = node
        return tmp

macro_indent = 0
fmt = Formatter()

def stringify_children(children):
    result = ""
    previous = None
    for child in children:
        string = stringify_single_line(child)
        if (previous and previous.type == ","):
            result += " "
        if (previous and child.type == "=>"):
            result += " "
        if (previous and previous.type == "=>"):
            result += " "
        if (previous and previous.type == "{"):
            result += " "
        if (previous and child.type == "}"):
            result += " "
        result += string
        previous = child
    return result

def stringify_single_line(node):
    if not node.children:
        return text(node)
    return stringify_children(node.children)

def split_generic_value(node, indent):
    # TODO
    return [stringify_single_line(node)]

def split_generic_list(middle, indent):
    elements = []
    for element in middle:
        if (elements and element.type == ","):
            elements[-1] = elements[-1] + ","
            continue
        line = " " * indent + stringify_single_line(element)
        if len(line) < 80:
            elements.append(line)
        else:
            lines = split_generic_value(element, indent)
            elements.append(" " * indent + lines[0])
            elements.extend(lines[1:])
    return elements

def maybe_split_generic_list(nodes, indent):
    string = " " * indent + stringify_children(nodes)
    if len(string) < 80:
        return [string]
    return split_generic_list(nodes, indent)

def split_rval_list(node, indent):
    assert node.type == "list"
    assert node.children[0].type == "{"
    first = text(node.children[0])
    last = " " * indent + text(node.children[-1])
    middle = node.children[1:-1]
    elements = maybe_split_generic_list(middle, indent + 2)
    return [first, *elements, last]

def split_rval_call(node, indent):
    assert node.type == "call"
    assert node.children[0].type == "calling_identifier"
    assert node.children[1].type == "("
    first = text(node.children[0]) + "("
    last = " " * indent + text(node.children[-1])
    middle = node.children[2:-1]
    elements = maybe_split_generic_list(middle, indent + 2)
    return [first, *elements, last]

def split_rval(node, indent):
    if node.type == "list":
        return split_rval_list(node, indent)
    if node.type == "call":
        return split_rval_call(node, indent)
    return [stringify_single_line(node)]

def maybe_split_rval(node, indent, offset):
    line = stringify_single_line(node)
    if len(line) + offset < 80:
        return [line]
    return split_rval(node, indent)

def attempt_split_attribute(node, indent):
    assert len(node.children) == 3
    lval = node.children[0]
    arrow = node.children[1]
    rval = node.children[2]

    if (rval.type == "list" or rval.type == "call"):
        prefix = " " * indent + text(lval) + " " + text(arrow) + " "
        offset = len(prefix)
        lines = maybe_split_rval(rval, indent, offset)
        lines[0] = prefix + lines[0]
        return lines
    return [stringify_single_line(node)]

def stringify(node, indent):
    single_line = " " * indent + stringify_single_line(node)
    if len(single_line) < 80:
        return [single_line]
    if node.type == "attribute":
        return attempt_split_attribute(node, indent)
    return [single_line]

def autoformat(node, indent = 0):
    global fmt
    global macro_indent
    previous = fmt.update_previous(node)
    if previous and previous.type == "macro" and text(previous).startswith("@else"):
        indent = macro_indent
    if node.type == "macro":
        fmt.print(node, 0)
        if text(node).startswith("@if"):
            macro_indent = indent
        elif text(node).startswith("@else"):
            indent = macro_indent
        return
    children = node.children
    if (node.type in ["bundle_block", "promise_block", "body_block"]):
        line = " ".join(x.text.decode("utf-8") for x in node.children[0:-1])
        if not fmt.empty:
            fmt.print("", 0)
        fmt.print(line, 0)
        children = node.children[-1].children
    if (node.type in ["bundle_section", "class_guarded_promises", "class_guarded_body_attributes", "promise", "attribute"]):
        indent += 2
    if (node.type == "attribute"):
        lines = stringify(node, indent)
        fmt.print_lines(lines, indent=0);
        return
    if (children):
        for child in children:
            autoformat(child, indent)
        return
    if (node.type in [",", ";"]):
        fmt.print_same_line(node)
        return
    fmt.print(node, indent)

with open(sys.argv[1], "rb") as f:
    original_data = f.read()
tree = parser.parse(original_data)

root_node = tree.root_node
assert root_node.type == 'source_file'
autoformat(root_node)

new_data = fmt.buffer + "\n"
if new_data != original_data.decode("utf-8"):
    with open(sys.argv[1], "w") as f:
        f.write(new_data)
    print("1 file reformatted")
