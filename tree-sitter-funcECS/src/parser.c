#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 57
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
  sym_expression_list = 45,
  sym_component_creation = 46,
  sym_primary = 47,
  sym_boolean = 48,
  sym_binary_expression = 49,
  sym_operator = 50,
  sym_type = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_component_body_repeat1 = 53,
  aux_sym_system_body_repeat1 = 54,
  aux_sym_pipeline_repeat1 = 55,
  aux_sym_expression_list_repeat1 = 56,
  alias_sym_pipeline_operator = 57,
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
  [sym_expression_list] = "expression_list",
  [sym_component_creation] = "component_creation",
  [sym_primary] = "primary",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
  [sym_operator] = "operator",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_component_body_repeat1] = "component_body_repeat1",
  [aux_sym_system_body_repeat1] = "system_body_repeat1",
  [aux_sym_pipeline_repeat1] = "pipeline_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
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
  [sym_expression_list] = sym_expression_list,
  [sym_component_creation] = sym_component_creation,
  [sym_primary] = sym_primary,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
  [sym_operator] = sym_operator,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_component_body_repeat1] = aux_sym_component_body_repeat1,
  [aux_sym_system_body_repeat1] = aux_sym_system_body_repeat1,
  [aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
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
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_component_creation] = {
    .visible = true,
    .named = true,
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
  [aux_sym_expression_list_repeat1] = {
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
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
    [sym_source_file] = STATE(65),
    [sym_component_declaration] = STATE(34),
    [sym_system_declaration] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_component] = ACTIONS(5),
    [anon_sym_system] = ACTIONS(7),
  },
  [2] = {
    [sym_expression] = STATE(4),
    [sym_expression_list] = STATE(35),
    [sym_component_creation] = STATE(9),
    [sym_primary] = STATE(9),
    [sym_boolean] = STATE(13),
    [sym_binary_expression] = STATE(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [sym_variable] = ACTIONS(13),
    [sym_name] = ACTIONS(15),
    [sym_last_value] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [anon_sym_BANG_EQ] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_AMP_AMP] = ACTIONS(9),
    [anon_sym_PIPE_PIPE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      sym_operator,
    ACTIONS(21), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(28), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
    ACTIONS(29), 10,
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
  [39] = 7,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym_operator,
    STATE(30), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(33), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(29), 10,
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
  [74] = 5,
    STATE(25), 1,
      sym_operator,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(39), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
    ACTIONS(29), 10,
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
  [104] = 3,
    STATE(25), 1,
      sym_operator,
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
  [130] = 2,
    ACTIONS(49), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 14,
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
  [153] = 5,
    STATE(25), 1,
      sym_operator,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(51), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(29), 10,
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
  [182] = 2,
    ACTIONS(57), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 14,
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
  [205] = 2,
    ACTIONS(61), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 14,
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
  [228] = 2,
    ACTIONS(65), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 14,
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
  [251] = 2,
    ACTIONS(69), 4,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 14,
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
  [274] = 2,
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
  [297] = 6,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_operator,
    STATE(46), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 10,
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
  [326] = 11,
    ACTIONS(15), 1,
      sym_name,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      sym_variable,
    STATE(3), 1,
      sym_expression,
    STATE(13), 1,
      sym_boolean,
    STATE(16), 1,
      aux_sym_system_body_repeat1,
    STATE(27), 1,
      sym_pipeline_operation,
    STATE(52), 1,
      sym_pipeline,
    ACTIONS(17), 2,
      sym_last_value,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [364] = 11,
    ACTIONS(15), 1,
      sym_name,
    ACTIONS(75), 1,
      sym_variable,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_expression,
    STATE(13), 1,
      sym_boolean,
    STATE(18), 1,
      aux_sym_system_body_repeat1,
    STATE(27), 1,
      sym_pipeline_operation,
    STATE(61), 1,
      sym_pipeline,
    ACTIONS(17), 2,
      sym_last_value,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [402] = 11,
    ACTIONS(15), 1,
      sym_name,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      sym_variable,
    STATE(3), 1,
      sym_expression,
    STATE(13), 1,
      sym_boolean,
    STATE(16), 1,
      aux_sym_system_body_repeat1,
    STATE(27), 1,
      sym_pipeline_operation,
    STATE(61), 1,
      sym_pipeline,
    ACTIONS(17), 2,
      sym_last_value,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [440] = 11,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      sym_variable,
    ACTIONS(84), 1,
      sym_name,
    STATE(3), 1,
      sym_expression,
    STATE(13), 1,
      sym_boolean,
    STATE(18), 1,
      aux_sym_system_body_repeat1,
    STATE(27), 1,
      sym_pipeline_operation,
    STATE(61), 1,
      sym_pipeline,
    ACTIONS(87), 2,
      sym_last_value,
      sym_number,
    ACTIONS(90), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [478] = 4,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym_operator,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 10,
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
  [501] = 8,
    ACTIONS(13), 1,
      sym_variable,
    ACTIONS(15), 1,
      sym_name,
    STATE(4), 1,
      sym_expression,
    STATE(13), 1,
      sym_boolean,
    STATE(35), 1,
      sym_expression_list,
    ACTIONS(17), 2,
      sym_last_value,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [530] = 8,
    ACTIONS(13), 1,
      sym_variable,
    ACTIONS(15), 1,
      sym_name,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_boolean,
    STATE(14), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_last_value,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [559] = 7,
    ACTIONS(13), 1,
      sym_variable,
    ACTIONS(15), 1,
      sym_name,
    STATE(8), 1,
      sym_expression,
    STATE(13), 1,
      sym_boolean,
    ACTIONS(17), 2,
      sym_last_value,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [585] = 7,
    ACTIONS(13), 1,
      sym_variable,
    ACTIONS(15), 1,
      sym_name,
    STATE(5), 1,
      sym_expression,
    STATE(13), 1,
      sym_boolean,
    ACTIONS(17), 2,
      sym_last_value,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [611] = 7,
    ACTIONS(13), 1,
      sym_variable,
    ACTIONS(15), 1,
      sym_name,
    STATE(13), 1,
      sym_boolean,
    STATE(19), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_last_value,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [637] = 7,
    ACTIONS(13), 1,
      sym_variable,
    ACTIONS(15), 1,
      sym_name,
    STATE(6), 1,
      sym_expression,
    STATE(13), 1,
      sym_boolean,
    ACTIONS(17), 2,
      sym_last_value,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_component_creation,
      sym_primary,
      sym_binary_expression,
  [663] = 5,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    ACTIONS(102), 1,
      anon_sym_EQ,
    ACTIONS(105), 1,
      anon_sym_DOLLAR,
    ACTIONS(97), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(26), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [683] = 5,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(110), 1,
      anon_sym_EQ,
    ACTIONS(21), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(28), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [703] = 5,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(110), 1,
      anon_sym_EQ,
    ACTIONS(112), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(26), 4,
      sym__pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [723] = 2,
    ACTIONS(114), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 4,
      anon_sym_RPAREN,
      sym_name,
      sym_last_value,
      sym_number,
  [735] = 3,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(116), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [749] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(39), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [763] = 4,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_component,
    ACTIONS(126), 1,
      anon_sym_system,
    STATE(32), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [778] = 2,
    ACTIONS(129), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      sym_name,
      sym_last_value,
      sym_number,
  [789] = 4,
    ACTIONS(5), 1,
      anon_sym_component,
    ACTIONS(7), 1,
      anon_sym_system,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(32), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [804] = 1,
    ACTIONS(135), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [812] = 3,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_component_body,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [824] = 1,
    ACTIONS(141), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [832] = 1,
    ACTIONS(143), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [840] = 3,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      sym_variable,
    STATE(41), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [851] = 3,
    ACTIONS(147), 1,
      sym_variable,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(39), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [862] = 3,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      sym_variable,
    STATE(41), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [873] = 1,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [879] = 1,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [885] = 3,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_system_body,
    STATE(54), 1,
      sym_system_precondition,
  [895] = 2,
    STATE(55), 1,
      sym_type,
    ACTIONS(162), 2,
      anon_sym_int,
      anon_sym_bool,
  [903] = 3,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_expression_list_repeat1,
  [913] = 1,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [919] = 1,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [925] = 1,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [931] = 1,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [937] = 1,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_system,
  [943] = 2,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(178), 1,
      anon_sym_SEMI,
  [950] = 2,
    ACTIONS(180), 1,
      sym_variable,
    STATE(38), 1,
      sym_pipeline_operation,
  [957] = 2,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_system_body,
  [964] = 1,
    ACTIONS(184), 2,
      anon_sym_RPAREN,
      sym_variable,
  [969] = 1,
    ACTIONS(186), 2,
      anon_sym_RPAREN,
      sym_variable,
  [974] = 1,
    ACTIONS(188), 1,
      sym_name,
  [978] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ,
  [982] = 1,
    ACTIONS(192), 1,
      anon_sym_COLON,
  [986] = 1,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
  [990] = 1,
    ACTIONS(178), 1,
      anon_sym_SEMI,
  [994] = 1,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
  [998] = 1,
    ACTIONS(198), 1,
      sym_variable,
  [1002] = 1,
    ACTIONS(200), 1,
      sym_variable,
  [1006] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [1010] = 1,
    ACTIONS(204), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 182,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 251,
  [SMALL_STATE(13)] = 274,
  [SMALL_STATE(14)] = 297,
  [SMALL_STATE(15)] = 326,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 402,
  [SMALL_STATE(18)] = 440,
  [SMALL_STATE(19)] = 478,
  [SMALL_STATE(20)] = 501,
  [SMALL_STATE(21)] = 530,
  [SMALL_STATE(22)] = 559,
  [SMALL_STATE(23)] = 585,
  [SMALL_STATE(24)] = 611,
  [SMALL_STATE(25)] = 637,
  [SMALL_STATE(26)] = 663,
  [SMALL_STATE(27)] = 683,
  [SMALL_STATE(28)] = 703,
  [SMALL_STATE(29)] = 723,
  [SMALL_STATE(30)] = 735,
  [SMALL_STATE(31)] = 749,
  [SMALL_STATE(32)] = 763,
  [SMALL_STATE(33)] = 778,
  [SMALL_STATE(34)] = 789,
  [SMALL_STATE(35)] = 804,
  [SMALL_STATE(36)] = 812,
  [SMALL_STATE(37)] = 824,
  [SMALL_STATE(38)] = 832,
  [SMALL_STATE(39)] = 840,
  [SMALL_STATE(40)] = 851,
  [SMALL_STATE(41)] = 862,
  [SMALL_STATE(42)] = 873,
  [SMALL_STATE(43)] = 879,
  [SMALL_STATE(44)] = 885,
  [SMALL_STATE(45)] = 895,
  [SMALL_STATE(46)] = 903,
  [SMALL_STATE(47)] = 913,
  [SMALL_STATE(48)] = 919,
  [SMALL_STATE(49)] = 925,
  [SMALL_STATE(50)] = 931,
  [SMALL_STATE(51)] = 937,
  [SMALL_STATE(52)] = 943,
  [SMALL_STATE(53)] = 950,
  [SMALL_STATE(54)] = 957,
  [SMALL_STATE(55)] = 964,
  [SMALL_STATE(56)] = 969,
  [SMALL_STATE(57)] = 974,
  [SMALL_STATE(58)] = 978,
  [SMALL_STATE(59)] = 982,
  [SMALL_STATE(60)] = 986,
  [SMALL_STATE(61)] = 990,
  [SMALL_STATE(62)] = 994,
  [SMALL_STATE(63)] = 998,
  [SMALL_STATE(64)] = 1002,
  [SMALL_STATE(65)] = 1006,
  [SMALL_STATE(66)] = 1010,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_creation, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_creation, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce, 6, .production_id = 6),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reduce, 6, .production_id = 6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_creation, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_creation, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_creation, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_creation, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(62),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(11),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(53),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(64),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(63),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(23),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_operation, 2, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(59),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 4, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_precondition, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
