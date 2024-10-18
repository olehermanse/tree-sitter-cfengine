package tree_sitter_cfengine_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_cfengine "github.com/olehermanse/tree-sitter-cfengine/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cfengine.Language())
	if language == nil {
		t.Errorf("Error loading CFEngine grammar")
	}
}
