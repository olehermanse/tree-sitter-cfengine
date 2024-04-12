#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 4
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_bundle_keyword = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SEMI = 7,
  anon_sym_DASH_GT = 8,
  sym_quoted_string = 9,
  sym_identifier = 10,
  sym_promise_guard = 11,
  sym_class_guard = 12,
  sym_comment = 13,
  sym_macro = 14,
  sym_source_file = 15,
  sym__block = 16,
  sym_bundle_block = 17,
  sym_argument_list = 18,
  sym_bundle_body = 19,
  sym_bundle_statement = 20,
  sym_right_value = 21,
  sym_promise_line = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_argument_list_repeat1 = 24,
  aux_sym_bundle_body_repeat1 = 25,
  aux_sym_bundle_statement_repeat1 = 26,
  alias_sym_argument = 27,
  alias_sym_bundle_id = 28,
  alias_sym_bundle_type = 29,
  alias_sym_promiser = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_bundle_keyword] = "bundle_keyword",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH_GT] = "->",
  [sym_quoted_string] = "quoted_string",
  [sym_identifier] = "identifier",
  [sym_promise_guard] = "promise_guard",
  [sym_class_guard] = "class_guard",
  [sym_comment] = "comment",
  [sym_macro] = "macro",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_bundle_block] = "bundle_block",
  [sym_argument_list] = "argument_list",
  [sym_bundle_body] = "bundle_body",
  [sym_bundle_statement] = "bundle_statement",
  [sym_right_value] = "promisee",
  [sym_promise_line] = "promise_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
  [aux_sym_bundle_statement_repeat1] = "bundle_statement_repeat1",
  [alias_sym_argument] = "argument",
  [alias_sym_bundle_id] = "bundle_id",
  [alias_sym_bundle_type] = "bundle_type",
  [alias_sym_promiser] = "promiser",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_bundle_keyword] = sym_bundle_keyword,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_quoted_string] = sym_quoted_string,
  [sym_identifier] = sym_identifier,
  [sym_promise_guard] = sym_promise_guard,
  [sym_class_guard] = sym_class_guard,
  [sym_comment] = sym_comment,
  [sym_macro] = sym_macro,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_bundle_block] = sym_bundle_block,
  [sym_argument_list] = sym_argument_list,
  [sym_bundle_body] = sym_bundle_body,
  [sym_bundle_statement] = sym_bundle_statement,
  [sym_right_value] = sym_right_value,
  [sym_promise_line] = sym_promise_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_bundle_body_repeat1] = aux_sym_bundle_body_repeat1,
  [aux_sym_bundle_statement_repeat1] = aux_sym_bundle_statement_repeat1,
  [alias_sym_argument] = alias_sym_argument,
  [alias_sym_bundle_id] = alias_sym_bundle_id,
  [alias_sym_bundle_type] = alias_sym_bundle_type,
  [alias_sym_promiser] = alias_sym_promiser,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_bundle_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_promise_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_class_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_bundle_block] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_right_value] = {
    .visible = true,
    .named = true,
  },
  [sym_promise_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bundle_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bundle_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_promiser] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_bundle_type,
    [2] = alias_sym_bundle_id,
  },
  [2] = {
    [0] = alias_sym_argument,
  },
  [3] = {
    [1] = alias_sym_argument,
  },
  [4] = {
    [0] = alias_sym_promiser,
  },
  [5] = {
    [2] = alias_sym_argument,
  },
  [6] = {
    [1] = alias_sym_promiser,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
};

static inline bool sym_class_guard_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '&'
      ? (c < ' '
        ? c == '\t'
        : c <= '!')
      : (c <= '&' || (c < '.'
        ? (c >= '(' && c <= ')')
        : c <= '.')))
    : (c <= '9' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '|') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '|') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(33);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(7);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(29);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 19:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_bundle_keyword);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_promise_guard);
      if (lookahead == ':') ADVANCE(33);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(33);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_bundle_keyword] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym__block] = STATE(4),
    [sym_bundle_block] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_bundle_keyword] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(14), 1,
      sym_promise_guard,
    ACTIONS(16), 1,
      sym_class_guard,
    STATE(2), 1,
      aux_sym_bundle_statement_repeat1,
    STATE(33), 1,
      sym_promise_line,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [23] = 7,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_quoted_string,
    ACTIONS(23), 1,
      sym_promise_guard,
    ACTIONS(25), 1,
      sym_class_guard,
    STATE(2), 1,
      aux_sym_bundle_statement_repeat1,
    STATE(33), 1,
      sym_promise_line,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [46] = 4,
    ACTIONS(7), 1,
      sym_bundle_keyword,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(5), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [62] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_bundle_keyword,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(5), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [78] = 4,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(10), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [93] = 3,
    ACTIONS(14), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(9), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [106] = 5,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_argument_list,
    STATE(25), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [123] = 4,
    ACTIONS(36), 1,
      sym_promise_guard,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(6), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [138] = 4,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(10), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [153] = 5,
    ACTIONS(21), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      sym_class_guard,
    STATE(3), 1,
      aux_sym_bundle_statement_repeat1,
    STATE(33), 1,
      sym_promise_line,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [170] = 3,
    STATE(42), 1,
      sym_right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(49), 2,
      sym_quoted_string,
      sym_identifier,
  [182] = 4,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [196] = 3,
    STATE(40), 1,
      sym_right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(49), 2,
      sym_quoted_string,
      sym_identifier,
  [208] = 3,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [219] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [230] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [239] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [248] = 3,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [259] = 3,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [270] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [281] = 3,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [292] = 3,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    ACTIONS(78), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [303] = 3,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(82), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [314] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [323] = 3,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [334] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [343] = 2,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [351] = 2,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [359] = 2,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [367] = 2,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [375] = 2,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [383] = 2,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [391] = 2,
    ACTIONS(102), 1,
      sym_quoted_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [399] = 2,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [407] = 2,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [415] = 2,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [423] = 2,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [431] = 2,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [439] = 2,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [447] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [455] = 2,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 182,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 219,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 259,
  [SMALL_STATE(21)] = 270,
  [SMALL_STATE(22)] = 281,
  [SMALL_STATE(23)] = 292,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 314,
  [SMALL_STATE(26)] = 323,
  [SMALL_STATE(27)] = 334,
  [SMALL_STATE(28)] = 343,
  [SMALL_STATE(29)] = 351,
  [SMALL_STATE(30)] = 359,
  [SMALL_STATE(31)] = 367,
  [SMALL_STATE(32)] = 375,
  [SMALL_STATE(33)] = 383,
  [SMALL_STATE(34)] = 391,
  [SMALL_STATE(35)] = 399,
  [SMALL_STATE(36)] = 407,
  [SMALL_STATE(37)] = 415,
  [SMALL_STATE(38)] = 423,
  [SMALL_STATE(39)] = 431,
  [SMALL_STATE(40)] = 439,
  [SMALL_STATE(41)] = 447,
  [SMALL_STATE(42)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 2), SHIFT_REPEAT(23),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_statement_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 2), SHIFT_REPEAT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_statement, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_statement, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 5, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 1, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 2, .production_id = 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 4, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5, .production_id = 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_value, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 3, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 4, .production_id = 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cfengine() {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
