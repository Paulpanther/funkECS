module.exports = grammar({
  name: "funkECS",
  supertypes: ($) => [$.expression, $.primary],

  rules: {
    source_file: ($) =>
      repeat(
        choice($.system_declaration, $.component_declaration, $.expression)
      ),

    component_declaration: ($) =>
      seq("component", field("name", $.name), optional($.component_body)),

    component_body: ($) => seq("(", repeat($.field_declaration), ")"),

    field_declaration: ($) =>
      seq(field("name", $.variable), ":", field("type", $.type)),

    system_declaration: ($) =>
      seq(
        "system",
        field("name", $.name),
        field("precondition", optional($.system_precondition)),
        $.system_body
      ),

    system_precondition: ($) => seq("(", $.pipeline, ")"),

    system_body: ($) => seq("(", repeat(seq($.pipeline, ";")), ")"),

    pipeline: ($) =>
      seq($.expression, repeat(choice($.pipe, $.assignment, $.reduce))),

    pipe: ($) => seq("|", $.expression),

    assignment: ($) => seq("=", field("name", $.variable)),

    reduce: ($) =>
      seq(
        "$",
        field("accumulator", $.variable),
        "=",
        field("reducer", $.expression),
        ",",
        field("initial", $.expression)
      ),

    variable: ($) => /[a-z]\w*/,

    name: ($) => /[A-Z]\w*/,

    expression: ($) => choice($.binary_expression, $.primary, $.variable),

    primary: ($) => choice($.number, $.boolean, $.variable),

    number: ($) => /\d+(\.\d*)?/,

    boolean: ($) => choice("true", "false"),

    binary_expression: ($) =>
      prec.left(
        seq(
          field("left", $.expression),
          field("operator", $.operator),
          field("right", $.expression)
        )
      ),

    operator: ($) =>
      choice("+", "-", "*", "/", "==", "!=", "<", ">", "<=", ">=", "&&", "||"),

    type: ($) => choice("int", "bool"),
  },
});
