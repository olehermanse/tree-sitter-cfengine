module.exports = grammar({
  name: 'cfengine',

  extras: $ => [
    $.comment,
    $.macro,
    /[\s]+/
  ],

  rules: {
    source_file: $ => repeat($._block),

    _block: $ => choice(
      $.bundle_block
      // TODO: body
      // TODO: promise
    ),

    bundle_block: $ => seq(
      $.bundle_keyword,
      alias($.identifier, $.bundle_type),
      alias($.identifier, $.bundle_id),
      optional($.argument_list),
      $.bundle_body
    ),
    bundle_keyword: _ => 'bundle',

    argument_list: $ => seq(
      '(',
      optional(
        seq(
          repeat(
            seq(
              alias($.identifier, $.argument), ','
            )
          ),
          alias($.identifier, $.argument),
          optional(',')
        )
      ),
      ')'
    ),

    bundle_body: $ => seq(
      '{',
      repeat($.bundle_statement),
      '}'
    ),

    bundle_statement: $ => seq(
      $.promise_guard,
      repeat1(
        seq(
          $.promise_line,
          ';'
        )
      )
    ),

    right_value: $ => choice(
      $.identifier,
      $.quoted_string
      // TODO: naked_variable
      // TODO: list
      // TODO: function
    ),

    promise_line: $ => seq(
      optional($.class_guard),
      alias($.quoted_string, $.promiser),
      optional(seq('->', alias($.right_value, $.promisee)))
    ),

    quoted_string: $ => /\"((\\(.|\n))|[^"\\])*\"|\'((\\(.|\n))|[^'\\])*\'|`[^`]*`/,

    identifier: $ => /[a-zA-Z0-9_]+/,

    promise_guard: $ => /[a-zA-Z_]+:/,

    class_guard: $ => /[.|&!()a-zA-Z0-9_:][\t .|&!()a-zA-Z0-9_:]*::/,

    comment: $ => token(seq('#', /.*/)),

    macro: $ => token(/@[^\n].*/)
  }

})
