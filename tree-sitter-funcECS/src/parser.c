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
#define TOKEN_COUNT 32
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
  sym_last_value = 14,
  sym_number = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_LT = 24,
  anon_sym_GT = 25,
  anon_sym_LT_EQ = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_AMP_AMP = 28,
  anon_sym_PIPE_PIPE = 29,
  anon_sym_int = 30,
  anon_sym_bool = 31,
  sym_source_file = 32,
  sym_component_declaration = 33,
  sym_component_body = 34,
  sym_field_declaration = 35,
  sym_system_declaration = 36,
  sym_system_precondition = 37,
  sym_system_body = 38,
  sym_pipeline = 39,
  sym__pipe = 40,
  sym_pipeline_operation = 41,
  sym_assignment = 42,
  sym_reduce = 43,
  sym_expression = 44,
  sym_primary = 45,
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
  [sym_last_value] = "last_value",
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
  [sym_last_value] = sym_last_value,
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
  [sym_last_value] = {
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_precondition, 2},
  [3] =
    {field_operator, 0},
  [4] =
    {field_name, 0},
    {field_type, 2},
  [6] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [9] =
    {field_accumulator, 1},
    {field_initial, 5},
    {field_reducer, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
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
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(37);
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
      if (lookahead == 'p') ADVANCE(40);
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
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(33);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(71);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_last_value);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
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
    [sym_last_value] = ACTIONS(1),
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
    [sym_component_declaration] = STATE(24),
    [sym_system_declaration] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_component] = ACTIONS(5),
    [anon_sym_system] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      sym_variable,
    STATE(8), 1,
      sym_boolean,
    STATE(9), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_last_value,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
    ACTIONS(11), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 13,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
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
  [43] = 8,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(23), 1,
      anon_sym_EQ,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      sym_operator,
    ACTIONS(19), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(17), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
    ACTIONS(27), 10,
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
  [82] = 3,
    STATE(15), 1,
      sym_operator,
    ACTIONS(33), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 14,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
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
  [108] = 5,
    STATE(15), 1,
      sym_operator,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(35), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(27), 10,
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
  [137] = 2,
    ACTIONS(41), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 14,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
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
  [160] = 2,
    ACTIONS(45), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 14,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
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
  [183] = 2,
    ACTIONS(11), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 14,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
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
  [206] = 5,
    STATE(15), 1,
      sym_operator,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(47), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(27), 10,
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
  [235] = 4,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      sym_operator,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 10,
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
  [258] = 10,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      sym_variable,
    STATE(3), 1,
      sym_expression,
    STATE(8), 1,
      sym_boolean,
    STATE(11), 1,
      aux_sym_system_body_repeat1,
    STATE(20), 1,
      sym_pipeline_operation,
    STATE(50), 1,
      sym_pipeline,
    ACTIONS(58), 2,
      sym_last_value,
      sym_number,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [292] = 10,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      sym_variable,
    STATE(3), 1,
      sym_expression,
    STATE(8), 1,
      sym_boolean,
    STATE(11), 1,
      aux_sym_system_body_repeat1,
    STATE(20), 1,
      sym_pipeline_operation,
    STATE(50), 1,
      sym_pipeline,
    ACTIONS(15), 2,
      sym_last_value,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [326] = 10,
    ACTIONS(66), 1,
      sym_variable,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_expression,
    STATE(8), 1,
      sym_boolean,
    STATE(12), 1,
      aux_sym_system_body_repeat1,
    STATE(20), 1,
      sym_pipeline_operation,
    STATE(41), 1,
      sym_pipeline,
    ACTIONS(15), 2,
      sym_last_value,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [360] = 10,
    ACTIONS(66), 1,
      sym_variable,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_expression,
    STATE(8), 1,
      sym_boolean,
    STATE(12), 1,
      aux_sym_system_body_repeat1,
    STATE(20), 1,
      sym_pipeline_operation,
    STATE(50), 1,
      sym_pipeline,
    ACTIONS(15), 2,
      sym_last_value,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [394] = 6,
    ACTIONS(13), 1,
      sym_variable,
    STATE(4), 1,
      sym_expression,
    STATE(8), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_last_value,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [416] = 6,
    ACTIONS(13), 1,
      sym_variable,
    STATE(5), 1,
      sym_expression,
    STATE(8), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_last_value,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [438] = 5,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(72), 1,
      anon_sym_PIPE,
    ACTIONS(74), 1,
      anon_sym_EQ,
    ACTIONS(70), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(19), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [458] = 6,
    ACTIONS(13), 1,
      sym_variable,
    STATE(8), 1,
      sym_boolean,
    STATE(9), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_last_value,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [480] = 5,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(81), 1,
      anon_sym_EQ,
    ACTIONS(84), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(19), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [500] = 5,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(72), 1,
      anon_sym_PIPE,
    ACTIONS(74), 1,
      anon_sym_EQ,
    ACTIONS(19), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(17), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [520] = 6,
    ACTIONS(13), 1,
      sym_variable,
    STATE(8), 1,
      sym_boolean,
    STATE(10), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_last_value,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_primary,
      sym_binary_expression,
  [542] = 2,
    ACTIONS(53), 3,
      anon_sym_RPAREN,
      sym_last_value,
      sym_number,
    ACTIONS(87), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [553] = 4,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_component,
    ACTIONS(94), 1,
      anon_sym_system,
    STATE(23), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [568] = 4,
    ACTIONS(5), 1,
      anon_sym_component,
    ACTIONS(7), 1,
      anon_sym_system,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [583] = 2,
    ACTIONS(101), 2,
      sym_last_value,
      sym_number,
    ACTIONS(99), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [593] = 3,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_component_body,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [605] = 1,
    ACTIONS(107), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [613] = 1,
    ACTIONS(109), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [621] = 3,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      sym_variable,
    STATE(31), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [632] = 3,
    ACTIONS(113), 1,
      sym_variable,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(29), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [643] = 3,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      sym_variable,
    STATE(31), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [654] = 1,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [660] = 1,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [666] = 2,
    STATE(44), 1,
      sym_type,
    ACTIONS(126), 2,
      anon_sym_int,
      anon_sym_bool,
  [674] = 3,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_system_body,
    STATE(45), 1,
      sym_system_precondition,
  [684] = 1,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [690] = 1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [696] = 1,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [702] = 1,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [708] = 1,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [714] = 2,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_SEMI,
  [721] = 2,
    ACTIONS(144), 1,
      sym_variable,
    STATE(28), 1,
      sym_pipeline_operation,
  [728] = 1,
    ACTIONS(146), 2,
      anon_sym_RPAREN,
      sym_variable,
  [733] = 1,
    ACTIONS(148), 2,
      anon_sym_RPAREN,
      sym_variable,
  [738] = 2,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_system_body,
  [745] = 1,
    ACTIONS(152), 1,
      anon_sym_COLON,
  [749] = 1,
    ACTIONS(154), 1,
      sym_name,
  [753] = 1,
    ACTIONS(156), 1,
      anon_sym_EQ,
  [757] = 1,
    ACTIONS(158), 1,
      sym_variable,
  [761] = 1,
    ACTIONS(142), 1,
      anon_sym_SEMI,
  [765] = 1,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
  [769] = 1,
    ACTIONS(162), 1,
      sym_variable,
  [773] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [777] = 1,
    ACTIONS(166), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 183,
  [SMALL_STATE(9)] = 206,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 258,
  [SMALL_STATE(12)] = 292,
  [SMALL_STATE(13)] = 326,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 394,
  [SMALL_STATE(16)] = 416,
  [SMALL_STATE(17)] = 438,
  [SMALL_STATE(18)] = 458,
  [SMALL_STATE(19)] = 480,
  [SMALL_STATE(20)] = 500,
  [SMALL_STATE(21)] = 520,
  [SMALL_STATE(22)] = 542,
  [SMALL_STATE(23)] = 553,
  [SMALL_STATE(24)] = 568,
  [SMALL_STATE(25)] = 583,
  [SMALL_STATE(26)] = 593,
  [SMALL_STATE(27)] = 605,
  [SMALL_STATE(28)] = 613,
  [SMALL_STATE(29)] = 621,
  [SMALL_STATE(30)] = 632,
  [SMALL_STATE(31)] = 643,
  [SMALL_STATE(32)] = 654,
  [SMALL_STATE(33)] = 660,
  [SMALL_STATE(34)] = 666,
  [SMALL_STATE(35)] = 674,
  [SMALL_STATE(36)] = 684,
  [SMALL_STATE(37)] = 690,
  [SMALL_STATE(38)] = 696,
  [SMALL_STATE(39)] = 702,
  [SMALL_STATE(40)] = 708,
  [SMALL_STATE(41)] = 714,
  [SMALL_STATE(42)] = 721,
  [SMALL_STATE(43)] = 728,
  [SMALL_STATE(44)] = 733,
  [SMALL_STATE(45)] = 738,
  [SMALL_STATE(46)] = 745,
  [SMALL_STATE(47)] = 749,
  [SMALL_STATE(48)] = 753,
  [SMALL_STATE(49)] = 757,
  [SMALL_STATE(50)] = 761,
  [SMALL_STATE(51)] = 765,
  [SMALL_STATE(52)] = 769,
  [SMALL_STATE(53)] = 773,
  [SMALL_STATE(54)] = 777,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce, 6, .production_id = 6),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reduce, 6, .production_id = 6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_operation, 2, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline_operation, 2, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(8),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(42),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(49),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(52),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(46),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 4, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_precondition, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
