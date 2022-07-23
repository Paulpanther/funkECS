#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_component = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_system = 5,
  anon_sym_SEMI = 6,
  anon_sym_PIPE = 7,
  anon_sym_map = 8,
  anon_sym_EQ = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_COMMA = 11,
  sym_variable = 12,
  sym_name = 13,
  sym_number = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_EQ_EQ = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_LT = 23,
  anon_sym_GT = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_AMP_AMP = 27,
  anon_sym_PIPE_PIPE = 28,
  anon_sym_int = 29,
  anon_sym_bool = 30,
  sym_source_file = 31,
  sym_component_declaration = 32,
  sym_component_body = 33,
  sym_field_declaration = 34,
  sym_system_declaration = 35,
  sym_system_precondition = 36,
  sym_system_body = 37,
  sym_pipeline = 38,
  sym__pipe = 39,
  sym_pipeline_operation = 40,
  sym_assignment = 41,
  sym_reduce = 42,
  sym_expression = 43,
  sym_primary = 44,
  sym_last_value = 45,
  sym_boolean = 46,
  sym_binary_expression = 47,
  sym_operator = 48,
  sym_type = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_component_body_repeat1 = 51,
  aux_sym_system_body_repeat1 = 52,
  aux_sym_pipeline_repeat1 = 53,
  alias_sym_pipeline_operator = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_component] = "component",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_system] = "system",
  [anon_sym_SEMI] = ";",
  [anon_sym_PIPE] = "|",
  [anon_sym_map] = "map",
  [anon_sym_EQ] = "=",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_COMMA] = ",",
  [sym_variable] = "variable",
  [sym_name] = "name",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [sym_source_file] = "source_file",
  [sym_component_declaration] = "component_declaration",
  [sym_component_body] = "component_body",
  [sym_field_declaration] = "field_declaration",
  [sym_system_declaration] = "system_declaration",
  [sym_system_precondition] = "system_precondition",
  [sym_system_body] = "system_body",
  [sym_pipeline] = "pipeline",
  [sym__pipe] = "_pipe",
  [sym_pipeline_operation] = "pipeline_operation",
  [sym_assignment] = "assignment",
  [sym_reduce] = "reduce",
  [sym_expression] = "expression",
  [sym_primary] = "primary",
  [sym_last_value] = "last_value",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
  [sym_operator] = "operator",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_component_body_repeat1] = "component_body_repeat1",
  [aux_sym_system_body_repeat1] = "system_body_repeat1",
  [aux_sym_pipeline_repeat1] = "pipeline_repeat1",
  [alias_sym_pipeline_operator] = "pipeline_operator",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_variable] = sym_variable,
  [sym_name] = sym_name,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [sym_source_file] = sym_source_file,
  [sym_component_declaration] = sym_component_declaration,
  [sym_component_body] = sym_component_body,
  [sym_field_declaration] = sym_field_declaration,
  [sym_system_declaration] = sym_system_declaration,
  [sym_system_precondition] = sym_system_precondition,
  [sym_system_body] = sym_system_body,
  [sym_pipeline] = sym_pipeline,
  [sym__pipe] = sym__pipe,
  [sym_pipeline_operation] = sym_pipeline_operation,
  [sym_assignment] = sym_assignment,
  [sym_reduce] = sym_reduce,
  [sym_expression] = sym_expression,
  [sym_primary] = sym_primary,
  [sym_last_value] = sym_last_value,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
  [sym_operator] = sym_operator,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_component_body_repeat1] = aux_sym_component_body_repeat1,
  [aux_sym_system_body_repeat1] = aux_sym_system_body_repeat1,
  [aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
  [alias_sym_pipeline_operator] = alias_sym_pipeline_operator,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_component_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_system_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_system_precondition] = {
    .visible = true,
    .named = true,
  },
  [sym_system_body] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym__pipe] = {
    .visible = false,
    .named = true,
  },
  [sym_pipeline_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_reduce] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_primary] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_last_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_pipeline_operator] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_accumulator = 1,
  field_initial = 2,
  field_left = 3,
  field_name = 4,
  field_operator = 5,
  field_precondition = 6,
  field_reducer = 7,
  field_right = 8,
  field_type = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_accumulator] = "accumulator",
  [field_initial] = "initial",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_precondition] = "precondition",
  [field_reducer] = "reducer",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [4] =
    {field_name, 1},
    {field_precondition, 2},
  [6] =
    {field_name, 0},
    {field_type, 2},
  [8] =
    {field_operator, 0},
  [9] =
    {field_accumulator, 1},
    {field_initial, 5},
    {field_reducer, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = alias_sym_pipeline_operator,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_system);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(86);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym_component_declaration] = STATE(11),
    [sym_system_declaration] = STATE(11),
    [sym_expression] = STATE(8),
    [sym_primary] = STATE(6),
    [sym_last_value] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_binary_expression] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_component] = ACTIONS(5),
    [anon_sym_system] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [sym_variable] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(20), 1,
      sym_operator,
    ACTIONS(19), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 16,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [33] = 2,
    ACTIONS(23), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 16,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [63] = 2,
    ACTIONS(27), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 16,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [93] = 2,
    ACTIONS(31), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 16,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [123] = 2,
    ACTIONS(35), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 16,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [153] = 8,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym_operator,
    ACTIONS(37), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(24), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
    ACTIONS(45), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [192] = 5,
    STATE(20), 1,
      sym_operator,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(51), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [224] = 5,
    STATE(20), 1,
      sym_operator,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(53), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(45), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [253] = 5,
    STATE(20), 1,
      sym_operator,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(57), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(45), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [282] = 11,
    ACTIONS(5), 1,
      anon_sym_component,
    ACTIONS(7), 1,
      anon_sym_system,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_variable,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
    STATE(12), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [321] = 11,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_component,
    ACTIONS(68), 1,
      anon_sym_system,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      sym_variable,
    ACTIONS(77), 1,
      sym_number,
    STATE(8), 1,
      sym_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
    STATE(12), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [360] = 4,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      sym_operator,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [383] = 10,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_variable,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(17), 1,
      aux_sym_system_body_repeat1,
    STATE(42), 1,
      sym_pipeline,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [417] = 10,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      sym_variable,
    ACTIONS(95), 1,
      sym_number,
    STATE(7), 1,
      sym_expression,
    STATE(15), 1,
      aux_sym_system_body_repeat1,
    STATE(50), 1,
      sym_pipeline,
    ACTIONS(98), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [451] = 10,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_variable,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(17), 1,
      aux_sym_system_body_repeat1,
    STATE(50), 1,
      sym_pipeline,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [485] = 10,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_variable,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(15), 1,
      aux_sym_system_body_repeat1,
    STATE(50), 1,
      sym_pipeline,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [519] = 7,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_variable,
    ACTIONS(13), 1,
      sym_number,
    STATE(13), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [544] = 7,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_variable,
    ACTIONS(13), 1,
      sym_number,
    STATE(10), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [569] = 7,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_variable,
    ACTIONS(13), 1,
      sym_number,
    STATE(2), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [594] = 7,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_variable,
    ACTIONS(13), 1,
      sym_number,
    STATE(9), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_last_value,
      sym_boolean,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [619] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_component_body,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(105), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [638] = 5,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(117), 1,
      anon_sym_DOLLAR,
    ACTIONS(109), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(23), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [658] = 5,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(120), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(23), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [678] = 2,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(128), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [691] = 2,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(132), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [704] = 2,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(136), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [717] = 2,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(140), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [730] = 2,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(144), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [743] = 2,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(148), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [756] = 2,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(152), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [769] = 2,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(154), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [780] = 1,
    ACTIONS(156), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [788] = 1,
    ACTIONS(158), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [796] = 2,
    ACTIONS(160), 2,
      anon_sym_DOLLAR,
      sym_number,
    ACTIONS(162), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [806] = 3,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 1,
      sym_variable,
    STATE(38), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [817] = 3,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      sym_variable,
    STATE(37), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [828] = 3,
    ACTIONS(166), 1,
      sym_variable,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(37), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [839] = 3,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_system_body,
    STATE(45), 1,
      sym_system_precondition,
  [849] = 2,
    STATE(44), 1,
      sym_type,
    ACTIONS(177), 2,
      anon_sym_int,
      anon_sym_bool,
  [857] = 2,
    ACTIONS(179), 1,
      sym_variable,
    STATE(34), 1,
      sym_pipeline_operation,
  [864] = 2,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 1,
      anon_sym_SEMI,
  [871] = 1,
    ACTIONS(185), 2,
      anon_sym_RPAREN,
      sym_variable,
  [876] = 1,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      sym_variable,
  [881] = 2,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_system_body,
  [888] = 1,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [892] = 1,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
  [896] = 1,
    ACTIONS(195), 1,
      anon_sym_EQ,
  [900] = 1,
    ACTIONS(197), 1,
      sym_name,
  [904] = 1,
    ACTIONS(183), 1,
      anon_sym_SEMI,
  [908] = 1,
    ACTIONS(199), 1,
      sym_variable,
  [912] = 1,
    ACTIONS(201), 1,
      sym_variable,
  [916] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [920] = 1,
    ACTIONS(205), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 224,
  [SMALL_STATE(10)] = 253,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 321,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 383,
  [SMALL_STATE(15)] = 417,
  [SMALL_STATE(16)] = 451,
  [SMALL_STATE(17)] = 485,
  [SMALL_STATE(18)] = 519,
  [SMALL_STATE(19)] = 544,
  [SMALL_STATE(20)] = 569,
  [SMALL_STATE(21)] = 594,
  [SMALL_STATE(22)] = 619,
  [SMALL_STATE(23)] = 638,
  [SMALL_STATE(24)] = 658,
  [SMALL_STATE(25)] = 678,
  [SMALL_STATE(26)] = 691,
  [SMALL_STATE(27)] = 704,
  [SMALL_STATE(28)] = 717,
  [SMALL_STATE(29)] = 730,
  [SMALL_STATE(30)] = 743,
  [SMALL_STATE(31)] = 756,
  [SMALL_STATE(32)] = 769,
  [SMALL_STATE(33)] = 780,
  [SMALL_STATE(34)] = 788,
  [SMALL_STATE(35)] = 796,
  [SMALL_STATE(36)] = 806,
  [SMALL_STATE(37)] = 817,
  [SMALL_STATE(38)] = 828,
  [SMALL_STATE(39)] = 839,
  [SMALL_STATE(40)] = 849,
  [SMALL_STATE(41)] = 857,
  [SMALL_STATE(42)] = 864,
  [SMALL_STATE(43)] = 871,
  [SMALL_STATE(44)] = 876,
  [SMALL_STATE(45)] = 881,
  [SMALL_STATE(46)] = 888,
  [SMALL_STATE(47)] = 892,
  [SMALL_STATE(48)] = 896,
  [SMALL_STATE(49)] = 900,
  [SMALL_STATE(50)] = 904,
  [SMALL_STATE(51)] = 908,
  [SMALL_STATE(52)] = 912,
  [SMALL_STATE(53)] = 916,
  [SMALL_STATE(54)] = 920,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_value, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_last_value, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce, 6, .production_id = 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reduce, 6, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_operation, 2, .production_id = 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline_operation, 2, .production_id = 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(3),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(4),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(4),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(41),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(52),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(51),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_body, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_body, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 4, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_declaration, 4, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_precondition, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_funkECS(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
