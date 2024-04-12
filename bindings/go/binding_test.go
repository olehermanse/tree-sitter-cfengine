package tree_sitter_cfengine_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-cfengine"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cfengine.Language())
	if language == nil {
		t.Errorf("Error loading Cfengine grammar")
	}
}
