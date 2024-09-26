# Tree sitter grammar for CFEngine policy language

This tree-sitter grammar parses CFEngine policy language and turns it into an abstract syntax tree.
It is used to provide syntax highlighting in the Zed editor, via this extension:

https://github.com/olehermanse/zed-cfengine

The grammar currently supports all major features of the language, including:

- Bundle blocks
- Body blocks
- Promise type definition blocks
- Promise types, class guards, promises, stakeholders (promisees)
- Macros
- Function calls
- Lists, strings, expansions (with `$()` and `@()`)

## Todos

- Using the grammar for linting / syntax checking (language server)
- Highlighting inside strings and comments
- Recognizing when there is JSON inside policy
- Class guards which are quoted strings
- Using the grammar for code indentation
- Using the grammar for extensions to other editors

Before contributing for the first time, it's recommended to go through the tree-sitter tutorial for getting familiar with how everything works:

https://tree-sitter.github.io/tree-sitter/creating-parsers

Inspired by Lars Erik Wik's initial implementation available here:

https://github.com/larsewi/tree-sitter-cfengine
