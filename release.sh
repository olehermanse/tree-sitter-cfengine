if [ $# != 1 ]; then
    echo "Specify version"
    exit 1
fi

export PUBLISH_VERSION="$1"
tree-sitter version $PUBLISH_VERSION
tree-sitter generate && tree-sitter build && tree-sitter test
npm update --save && cargo update && uv sync --upgrade
tree-sitter generate && tree-sitter build && tree-sitter test
git add -A && git commit -S -s -m "Bump to version $PUBLISH_VERSION"
git push
git tag -s -a $PUBLISH_VERSION -m $PUBLISH_VERSION
git push --tags
