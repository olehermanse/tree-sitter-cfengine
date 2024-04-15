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
      alias($.identifier, $.bundle_name),
      optional($.parameter_list),
      $.bundle_body
    ),
    bundle_keyword: _ => 'bundle',

    parameter_list: $ => seq(
      '(',
      optional(
        seq(
          repeat(
            seq(
              alias($.identifier, $.parameter), ','
            )
          ),
          alias($.identifier, $.parameter),
          optional(',')
        )
      ),
      ')'
    ),

    bundle_body: $ => seq(
      '{',
      repeat($.bundle_section),
      '}'
    ),

    bundle_section: $ => seq(
      $.promise_guard,
      // 0 or more promises without a class guard:
      repeat($.promise),
      // 0 or more class guards with 0 or more promises insde:
      repeat($.class_guarded_promises)
    ),

    right_value: $ => choice(
      $.quoted_string,
      $.qualified_identifier
      // TODO: list
      // TODO: function
    ),

    class_guarded_promises: $ => prec.right(1, seq(
      $.class_guard,
      prec(1, repeat($.promise))
    )),

    promise: $ => seq(
      alias($.quoted_string, $.promiser),
      optional(seq('->', alias($.right_value, $.stakeholder))),
      optional($.attribute),
      repeat(seq(',', $.attribute)),
      optional(','),
      ';'
    ),

    attribute: $ => seq(
      alias($.identifier, $.attribute_name),
      '=>',
      $.right_value
    ),

    quoted_string: $ => /\"((\\(.|\n))|[^"\\])*\"|\'((\\(.|\n))|[^'\\])*\'|`[^`]*`/,

    identifier: $ => /[a-zA-Z0-9_]+/,
    qualified_identifier: $ => /([a-zA-Z0-9_]+\:)?([a-zA-Z0-9_]+\.)?[a-zA-Z0-9_]+/,

    promise_guard: $ => /[a-zA-Z_]+:/,

    class_guard: $ => /[.|&!()a-zA-Z0-9_:][\t .|&!()a-zA-Z0-9_:]*::/,

    comment: $ => token(seq('#', /.*/)),

    macro: $ => token(/@[^\n].*/)
  }
})
