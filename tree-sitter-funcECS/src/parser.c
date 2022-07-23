#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_system = 1,
  aux_sym_system_declaration_token1 = 2,
  anon_sym_LPAREN_RPAREN = 3,
  sym_number = 4,
  anon_sym_PLUS = 5,
  anon_sym_DASH = 6,
  anon_sym_STAR = 7,
  anon_sym_SLASH = 8,
  anon_sym_EQ_EQ = 9,
  anon_sym_BANG_EQ = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  sym_source_file = 13,
  sym_system_declaration = 14,
  sym_expression = 15,
  sym_primary = 16,
  sym_binary_expression = 17,
  sym_operator = 18,
  aux_sym_source_file_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_system] = "system",
  [aux_sym_system_declaration_token1] = "system_declaration_token1",
  [anon_sym_LPAREN_RPAREN] = "()",
  [sym_number] = "number",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_source_file] = "source_file",
  [sym_system_declaration] = "system_declaration",
  [sym_expression] = "expression",
  [sym_primary] = "primary",
  [sym_binary_expression] = "binary_expression",
  [sym_operator] = "operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_system] = anon_sym_system,
  [aux_sym_system_declaration_token1] = aux_sym_system_declaration_token1,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [sym_number] = sym_number,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_source_file] = sym_source_file,
  [sym_system_declaration] = sym_system_declaration,
  [sym_expression] = sym_expression,
  [sym_primary] = sym_primary,
  [sym_binary_expression] = sym_binary_expression,
  [sym_operator] = sym_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_system_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_system_declaration] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_system_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [aux_sym_system_declaration_token1] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_system_declaration] = STATE(6),
    [sym_expression] = STATE(2),
    [sym_primary] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_system] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
  },
  [2] = {
    [sym_operator] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_system] = ACTIONS(9),
    [sym_number] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
  },
  [3] = {
    [sym_operator] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_system] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_system] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_system] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_BANG_EQ] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_system,
    ACTIONS(7), 1,
      sym_number,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_expression,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(7), 2,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [21] = 6,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_system,
    ACTIONS(26), 1,
      sym_number,
    STATE(2), 1,
      sym_expression,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
    STATE(7), 2,
      sym_system_declaration,
      aux_sym_source_file_repeat1,
  [42] = 3,
    ACTIONS(7), 1,
      sym_number,
    STATE(3), 1,
      sym_expression,
    STATE(5), 2,
      sym_primary,
      sym_binary_expression,
  [53] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_system,
      sym_number,
  [59] = 1,
    ACTIONS(31), 1,
      aux_sym_system_declaration_token1,
  [63] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [67] = 1,
    ACTIONS(35), 1,
      anon_sym_LPAREN_RPAREN,
  [71] = 1,
    ACTIONS(37), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 21,
  [SMALL_STATE(8)] = 42,
  [SMALL_STATE(9)] = 53,
  [SMALL_STATE(10)] = 59,
  [SMALL_STATE(11)] = 63,
  [SMALL_STATE(12)] = 67,
  [SMALL_STATE(13)] = 71,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_declaration, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
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
