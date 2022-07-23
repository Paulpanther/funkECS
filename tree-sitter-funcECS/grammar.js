module.exports = grammar({
  name: 'funkECS',
  supertypes: $ => [$.expression, $.primary],

  rules: {
    source_file: $ => repeat(choice($.system_declaration, $.component_declaration, $.expression)),

    component_declaration: $ => seq("component", field("name", $.name), optional($.component_body)),

    component_body: $ => seq("(", ")"),

    system_declaration: $ => seq("system", field("name", $.name), field("precondition", optional($.system_precondition)), $.system_body),

    system_precondition: $ => seq("(", $.pipeline, ")"),

    system_body: $ => seq("(", repeat(seq($.pipeline, ";")), ")"),

    pipeline: $ => $.expression,

    name: $ => /[A-Z]\w+/,

    expression: $ => choice($.binary_expression, $.primary),

    primary: $ => choice($.number, $.boolean),

    number: $ => /\d+(\.\d*)?/,

    boolean: $ => choice("true", "false"),

    binary_expression: $ => prec.left(seq(field("left", $.expression), field("operator", $.operator), field("right", $.expression))),

    operator: $ => choice("+", "-", "*", "/", "==", "!=", "<", ">", "<=", ">=", "&&", "||")
  }
});
