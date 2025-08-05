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


## Run containerized tests locally:

```
docker build --tag tree-sitter-cfengine .
```

## Making changes

After making changes to `grammar.js`, run the the commands below to generate, build, and test:

```
tree-sitter generate && tree-sitter build && tree-sitter test
```

In tree-sitter projects, it is normal to commit the files generated / edited by the tree-sitter tooling.
Once it is working and tests are passing, commit the changes (including `src/` folder with generated files).

## Creating a new release

Creating a release in GitHub **will not work**.
To create a new release, you need to make a commit and tag locally, and push it.
First ensure you have a clean git repo without any uncommitted changes.
Then, run the following commands:

```
tree-sitter version 1.2.3
git add -A
git commit -S -s -m "Bump to version 1.2.3"
git tag -s -a 1.2.3 -m 1.2.3
git push --tags
```

GitHub Actions will start when a tag is pushed, and the action will create the "Release" in GitHub, as well as pypi, npm, and crates.io:

- https://github.com/olehermanse/tree-sitter-cfengine/releases
- https://pypi.org/project/tree-sitter-cfengine
- https://www.npmjs.com/package/tree-sitter-cfengine
- https://crates.io/crates/tree-sitter-cfengine
