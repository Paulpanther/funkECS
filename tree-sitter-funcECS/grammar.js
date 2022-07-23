module.exports = grammar({
  name: 'funkECS',
  supertypes: $ => [$.expression, $.primary],

  rules: {
    source_file: $ => repeat(choice($.system_declaration, $.expression)),

    system_declaration: $ => seq("system", field("name", $.name), $.system_body),

    system_body: $ => seq("(", repeat(seq($.pipeline), ";"), ")"),

    pipeline: $ => "query",

    name: $ => /[A-Z]\w+/,

    expression: $ => choice($.binary_expression, $.primary),

    primary: $ => $.number,

    number: $ => /\d+(\.\d*)?/,

    binary_expression: $ => prec.left(seq(field("left", $.expression), field("operator", $.operator), field("right", $.expression))),

    operator: $ => choice("+", "-", "*", "/", "==", "!=", "<", ">", "<=", ">=", "&&", "||")
  }
});
