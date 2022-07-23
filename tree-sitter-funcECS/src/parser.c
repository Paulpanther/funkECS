#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_component = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_system = 5,
  anon_sym_SEMI = 6,
  anon_sym_PIPE = 7,
  anon_sym_EQ = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_COMMA = 10,
  sym_variable = 11,
  sym_name = 12,
  sym_number = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT_EQ = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_int = 28,
  anon_sym_bool = 29,
  sym_source_file = 30,
  sym_component_declaration = 31,
  sym_component_body = 32,
  sym_field_declaration = 33,
  sym_system_declaration = 34,
  sym_system_precondition = 35,
  sym_system_body = 36,
  sym_pipeline = 37,
  sym_pipe = 38,
  sym_assignment = 39,
  sym_reduce = 40,
  sym_expression = 41,
  sym_primary = 42,
  sym_boolean = 43,
  sym_binary_expression = 44,
  sym_operator = 45,
  sym_type = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_component_body_repeat1 = 48,
  aux_sym_system_body_repeat1 = 49,
  aux_sym_pipeline_repeat1 = 50,
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
  [sym_pipe] = "pipe",
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
  [sym_pipe] = sym_pipe,
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
  [sym_pipe] = {
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
  [5] = {.index = 8, .length = 3},
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
    {field_accumulator, 1},
    {field_initial, 5},
    {field_reducer, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
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
      ACCEPT_TOKEN(anon_sym_system);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(83);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
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
    [sym_source_file] = STATE(50),
    [sym_component_declaration] = STATE(11),
    [sym_system_declaration] = STATE(11),
    [sym_expression] = STATE(7),
    [sym_primary] = STATE(5),
    [sym_boolean] = STATE(3),
    [sym_binary_expression] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_component] = ACTIONS(5),
    [anon_sym_system] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [2] = {
    [sym_operator] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_component] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_system] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [anon_sym_PIPE_PIPE] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(21), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 16,
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
  [30] = 2,
    ACTIONS(25), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 16,
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
  [60] = 2,
    ACTIONS(29), 9,
      anon_sym_component,
      anon_sym_system,
      anon_sym_PIPE,
      anon_sym_EQ,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 16,
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
  [90] = 8,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(35), 1,
      anon_sym_EQ,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym_operator,
    ACTIONS(31), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(19), 4,
      sym_pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
    ACTIONS(39), 10,
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
  [129] = 5,
    STATE(20), 1,
      sym_operator,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(45), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 10,
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
  [160] = 5,
    STATE(20), 1,
      sym_operator,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(47), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(39), 10,
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
  [189] = 5,
    STATE(20), 1,
      sym_operator,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(51), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
    ACTIONS(39), 10,
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
  [218] = 4,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      sym_operator,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 10,
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
  [241] = 10,
    ACTIONS(5), 1,
      anon_sym_component,
    ACTIONS(7), 1,
      anon_sym_system,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(12), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [276] = 10,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_component,
    ACTIONS(64), 1,
      anon_sym_system,
    ACTIONS(67), 1,
      sym_variable,
    ACTIONS(70), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(7), 1,
      sym_expression,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(12), 3,
      sym_component_declaration,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [311] = 9,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 1,
      sym_variable,
    ACTIONS(81), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(13), 1,
      aux_sym_system_body_repeat1,
    STATE(43), 1,
      sym_pipeline,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [341] = 9,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(16), 1,
      aux_sym_system_body_repeat1,
    STATE(43), 1,
      sym_pipeline,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [371] = 9,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(16), 1,
      aux_sym_system_body_repeat1,
    STATE(42), 1,
      sym_pipeline,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [401] = 9,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_boolean,
    STATE(6), 1,
      sym_expression,
    STATE(13), 1,
      aux_sym_system_body_repeat1,
    STATE(43), 1,
      sym_pipeline,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [431] = 5,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(17), 4,
      sym_pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [451] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_component_body,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(104), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [469] = 5,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_EQ,
    ACTIONS(108), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(17), 4,
      sym_pipe,
      sym_assignment,
      sym_reduce,
      aux_sym_pipeline_repeat1,
  [489] = 6,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    STATE(2), 1,
      sym_expression,
    STATE(3), 1,
      sym_boolean,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [510] = 6,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(8), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [531] = 6,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(10), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [552] = 6,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      sym_number,
    STATE(3), 1,
      sym_boolean,
    STATE(9), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [573] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(116), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [585] = 2,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(120), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [597] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(124), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [609] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(128), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [621] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(132), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [633] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(136), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [645] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(140), 5,
      anon_sym_component,
      anon_sym_system,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [657] = 1,
    ACTIONS(142), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_DOLLAR,
  [665] = 2,
    ACTIONS(76), 2,
      anon_sym_RPAREN,
      sym_number,
    ACTIONS(144), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [675] = 3,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      sym_variable,
    STATE(34), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [686] = 3,
    ACTIONS(148), 1,
      sym_variable,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(35), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [697] = 3,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 1,
      sym_variable,
    STATE(35), 2,
      sym_field_declaration,
      aux_sym_component_body_repeat1,
  [708] = 2,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(157), 3,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
  [717] = 3,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_system_body,
    STATE(39), 1,
      sym_system_precondition,
  [727] = 2,
    STATE(41), 1,
      sym_type,
    ACTIONS(163), 2,
      anon_sym_int,
      anon_sym_bool,
  [735] = 2,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_system_body,
  [742] = 1,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      sym_variable,
  [747] = 1,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      sym_variable,
  [752] = 2,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 1,
      anon_sym_SEMI,
  [759] = 1,
    ACTIONS(173), 1,
      anon_sym_SEMI,
  [763] = 1,
    ACTIONS(175), 1,
      sym_variable,
  [767] = 1,
    ACTIONS(177), 1,
      anon_sym_COLON,
  [771] = 1,
    ACTIONS(179), 1,
      sym_variable,
  [775] = 1,
    ACTIONS(181), 1,
      anon_sym_EQ,
  [779] = 1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
  [783] = 1,
    ACTIONS(185), 1,
      sym_name,
  [787] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [791] = 1,
    ACTIONS(189), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 276,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 341,
  [SMALL_STATE(15)] = 371,
  [SMALL_STATE(16)] = 401,
  [SMALL_STATE(17)] = 431,
  [SMALL_STATE(18)] = 451,
  [SMALL_STATE(19)] = 469,
  [SMALL_STATE(20)] = 489,
  [SMALL_STATE(21)] = 510,
  [SMALL_STATE(22)] = 531,
  [SMALL_STATE(23)] = 552,
  [SMALL_STATE(24)] = 573,
  [SMALL_STATE(25)] = 585,
  [SMALL_STATE(26)] = 597,
  [SMALL_STATE(27)] = 609,
  [SMALL_STATE(28)] = 621,
  [SMALL_STATE(29)] = 633,
  [SMALL_STATE(30)] = 645,
  [SMALL_STATE(31)] = 657,
  [SMALL_STATE(32)] = 665,
  [SMALL_STATE(33)] = 675,
  [SMALL_STATE(34)] = 686,
  [SMALL_STATE(35)] = 697,
  [SMALL_STATE(36)] = 708,
  [SMALL_STATE(37)] = 717,
  [SMALL_STATE(38)] = 727,
  [SMALL_STATE(39)] = 735,
  [SMALL_STATE(40)] = 742,
  [SMALL_STATE(41)] = 747,
  [SMALL_STATE(42)] = 752,
  [SMALL_STATE(43)] = 759,
  [SMALL_STATE(44)] = 763,
  [SMALL_STATE(45)] = 767,
  [SMALL_STATE(46)] = 771,
  [SMALL_STATE(47)] = 775,
  [SMALL_STATE(48)] = 779,
  [SMALL_STATE(49)] = 783,
  [SMALL_STATE(50)] = 787,
  [SMALL_STATE(51)] = 791,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce, 6, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reduce, 6, .production_id = 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(3),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(23),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(46),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(44),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_body, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_declaration, 3, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 4, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_declaration, 4, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_body, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_body, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_system_body_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(45),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_precondition, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
