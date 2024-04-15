module.exports = grammar({
  name: "cfengine",

  extras: ($) => [$.comment, $.macro, /[\s]+/],

  rules: {
    source_file: ($) => repeat($._block),

    _block: ($) =>
      choice(
        $.bundle_block,
        $.body_block,
        // TODO: promise
      ),

    body_block: ($) =>
      seq(
        $.body_keyword,
        alias($.identifier, $.body_type),
        alias($.identifier, $.body_name),
        optional($.parameter_list),
        $.body_body,
      ),
    body_keyword: (_) => "body",
    body_body: ($) =>
      seq(
        "{",
        // 0 or more promises without a class guard:
        repeat($._body_attribute),
        // 0 or more class guards with 0 or more promises insde:
        repeat($.class_guarded_body_attributes),
        "}",
      ),

    _body_attribute: ($) => seq($.attribute, ";"),

    class_guarded_body_attributes: ($) =>
      seq($.class_guard, repeat($._body_attribute)),

    bundle_block: ($) =>
      seq(
        $.bundle_keyword,
        alias($.identifier, $.bundle_type),
        alias($.identifier, $.bundle_name),
        optional($.parameter_list),
        $.bundle_body,
      ),
    bundle_keyword: (_) => "bundle",

    parameter_list: ($) =>
      seq(
        "(",
        optional(
          seq(
            repeat(seq(alias($.identifier, $.parameter), ",")),
            alias($.identifier, $.parameter),
            optional(","),
          ),
        ),
        ")",
      ),

    bundle_body: ($) => seq("{", repeat($.bundle_section), "}"),

    bundle_section: ($) =>
      seq(
        $.promise_guard,
        // 0 or more promises without a class guard:
        repeat($.promise),
        // 0 or more class guards with 0 or more promises insde:
        repeat($.class_guarded_promises),
      ),

    _right_value: ($) =>
      choice($.quoted_string, $.qualified_identifier, $.list, $.call),

    call: ($) =>
      seq(
        alias($.qualified_identifier, $.calling_identifier),
        "(",
        optional($._value_list),
        ")",
      ),

    list: ($) => seq("{", optional($._value_list), "}"),

    // inner part of a non-empty list of values
    // such as the arguments of a function call
    // or the strings in an slist
    _value_list: ($) =>
      seq($._right_value, repeat(seq(",", $._right_value)), optional(",")),

    class_guarded_promises: ($) =>
      prec.right(1, seq($.class_guard, prec(1, repeat($.promise)))),

    promise: ($) =>
      seq(
        alias($.quoted_string, $.promiser),
        optional(seq("->", alias($._right_value, $.stakeholder))),
        optional($.attribute),
        repeat(seq(",", $.attribute)),
        optional(","),
        ";",
      ),

    attribute: ($) =>
      seq(alias($.identifier, $.attribute_name), "=>", $._right_value),

    quoted_string: ($) =>
      /\"((\\(.|\n))|[^"\\])*\"|\'((\\(.|\n))|[^'\\])*\'|`[^`]*`/,

    identifier: ($) => /[a-zA-Z0-9_]+/,
    qualified_identifier: ($) =>
      /([a-zA-Z0-9_]+\:)?([a-zA-Z0-9_]+\.)?[a-zA-Z0-9_]+/,

    promise_guard: ($) => /[a-zA-Z_]+:/,

    class_guard: ($) => /[.|&!()a-zA-Z0-9_:][\t .|&!()a-zA-Z0-9_:]*::/,

    comment: ($) => token(seq("#", /.*/)),

    macro: ($) => token(/@[^\n].*/),
  },
});
