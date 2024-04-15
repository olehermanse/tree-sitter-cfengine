#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 5
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_bundle_keyword = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_SEMI = 8,
  anon_sym_EQ_GT = 9,
  sym_quoted_string = 10,
  sym_identifier = 11,
  sym_qualified_identifier = 12,
  sym_promise_guard = 13,
  sym_class_guard = 14,
  sym_comment = 15,
  sym_macro = 16,
  sym_source_file = 17,
  sym__block = 18,
  sym_bundle_block = 19,
  sym_parameter_list = 20,
  sym_bundle_body = 21,
  sym_bundle_section = 22,
  sym__right_value = 23,
  sym_list = 24,
  sym__inner_list = 25,
  sym_class_guarded_promises = 26,
  sym_promise = 27,
  sym_attribute = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_parameter_list_repeat1 = 30,
  aux_sym_bundle_body_repeat1 = 31,
  aux_sym_bundle_section_repeat1 = 32,
  aux_sym_bundle_section_repeat2 = 33,
  aux_sym__inner_list_repeat1 = 34,
  aux_sym_promise_repeat1 = 35,
  alias_sym_attribute_name = 36,
  alias_sym_bundle_name = 37,
  alias_sym_bundle_type = 38,
  alias_sym_promiser = 39,
  alias_sym_stakeholder = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_bundle_keyword] = "bundle_keyword",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ_GT] = "=>",
  [sym_quoted_string] = "quoted_string",
  [sym_identifier] = "parameter",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_promise_guard] = "promise_guard",
  [sym_class_guard] = "class_guard",
  [sym_comment] = "comment",
  [sym_macro] = "macro",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_bundle_block] = "bundle_block",
  [sym_parameter_list] = "parameter_list",
  [sym_bundle_body] = "bundle_body",
  [sym_bundle_section] = "bundle_section",
  [sym__right_value] = "_right_value",
  [sym_list] = "list",
  [sym__inner_list] = "_inner_list",
  [sym_class_guarded_promises] = "class_guarded_promises",
  [sym_promise] = "promise",
  [sym_attribute] = "attribute",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
  [aux_sym_bundle_section_repeat1] = "bundle_section_repeat1",
  [aux_sym_bundle_section_repeat2] = "bundle_section_repeat2",
  [aux_sym__inner_list_repeat1] = "_inner_list_repeat1",
  [aux_sym_promise_repeat1] = "promise_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_bundle_name] = "bundle_name",
  [alias_sym_bundle_type] = "bundle_type",
  [alias_sym_promiser] = "promiser",
  [alias_sym_stakeholder] = "stakeholder",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_bundle_keyword] = sym_bundle_keyword,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_quoted_string] = sym_quoted_string,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_promise_guard] = sym_promise_guard,
  [sym_class_guard] = sym_class_guard,
  [sym_comment] = sym_comment,
  [sym_macro] = sym_macro,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_bundle_block] = sym_bundle_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_bundle_body] = sym_bundle_body,
  [sym_bundle_section] = sym_bundle_section,
  [sym__right_value] = sym__right_value,
  [sym_list] = sym_list,
  [sym__inner_list] = sym__inner_list,
  [sym_class_guarded_promises] = sym_class_guarded_promises,
  [sym_promise] = sym_promise,
  [sym_attribute] = sym_attribute,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_bundle_body_repeat1] = aux_sym_bundle_body_repeat1,
  [aux_sym_bundle_section_repeat1] = aux_sym_bundle_section_repeat1,
  [aux_sym_bundle_section_repeat2] = aux_sym_bundle_section_repeat2,
  [aux_sym__inner_list_repeat1] = aux_sym__inner_list_repeat1,
  [aux_sym_promise_repeat1] = aux_sym_promise_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_bundle_name] = alias_sym_bundle_name,
  [alias_sym_bundle_type] = alias_sym_bundle_type,
  [alias_sym_promiser] = alias_sym_promiser,
  [alias_sym_stakeholder] = alias_sym_stakeholder,
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [sym_qualified_identifier] = {
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
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_section] = {
    .visible = true,
    .named = true,
  },
  [sym__right_value] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_list] = {
    .visible = false,
    .named = true,
  },
  [sym_class_guarded_promises] = {
    .visible = true,
    .named = true,
  },
  [sym_promise] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inner_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_promise_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bundle_name] = {
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
  [alias_sym_stakeholder] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_bundle_type,
    [2] = alias_sym_bundle_name,
  },
  [2] = {
    [0] = alias_sym_promiser,
  },
  [3] = {
    [0] = alias_sym_promiser,
    [2] = alias_sym_stakeholder,
  },
  [4] = {
    [0] = alias_sym_attribute_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__right_value, 2,
    sym__right_value,
    alias_sym_stakeholder,
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
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
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
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '|') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '|') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(41);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(8);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(34);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_bundle_keyword);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_promise_guard);
      if (lookahead == ':') ADVANCE(41);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(41);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(10);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__block] = STATE(18),
    [sym_bundle_block] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
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
    ACTIONS(13), 1,
      sym_promise_guard,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(3), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(17), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [25] = 7,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(8), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(14), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [50] = 7,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_list,
    STATE(49), 1,
      sym__right_value,
    STATE(71), 1,
      sym__inner_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(25), 2,
      sym_quoted_string,
      sym_qualified_identifier,
  [74] = 6,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_list,
    STATE(53), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(25), 2,
      sym_quoted_string,
      sym_qualified_identifier,
  [95] = 6,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_list,
    STATE(53), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(25), 2,
      sym_quoted_string,
      sym_qualified_identifier,
  [116] = 5,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(33), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(31), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(8), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [135] = 5,
    ACTIONS(37), 1,
      sym_quoted_string,
    ACTIONS(40), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(8), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [154] = 5,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(44), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(42), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(7), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [173] = 7,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(48), 1,
      anon_sym_DASH_GT,
    ACTIONS(50), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(38), 1,
      sym_attribute,
    STATE(39), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [196] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_list,
    STATE(60), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(25), 2,
      sym_quoted_string,
      sym_qualified_identifier,
  [214] = 4,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_bundle_keyword,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(12), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [230] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym__right_value,
    STATE(22), 1,
      sym_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(25), 2,
      sym_quoted_string,
      sym_qualified_identifier,
  [248] = 5,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(15), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [266] = 5,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym_promise_guard,
    ACTIONS(67), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(15), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [284] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_list,
    STATE(53), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(25), 2,
      sym_quoted_string,
      sym_qualified_identifier,
  [302] = 5,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(15), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [320] = 4,
    ACTIONS(7), 1,
      sym_bundle_keyword,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(12), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [336] = 6,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      aux_sym_promise_repeat1,
    STATE(48), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [356] = 4,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(28), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [371] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(80), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [382] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(82), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [393] = 5,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_parameter_list,
    STATE(58), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [410] = 3,
    ACTIONS(90), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(88), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [423] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(92), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
  [434] = 3,
    ACTIONS(96), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(94), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [447] = 3,
    ACTIONS(100), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(98), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [460] = 4,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(28), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [475] = 3,
    ACTIONS(109), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(107), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [488] = 3,
    ACTIONS(113), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(111), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [501] = 3,
    ACTIONS(117), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(115), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [514] = 4,
    ACTIONS(78), 1,
      sym_promise_guard,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(20), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [529] = 3,
    ACTIONS(123), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(121), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [542] = 3,
    ACTIONS(127), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(125), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [555] = 4,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [569] = 4,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [583] = 4,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [597] = 4,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [611] = 4,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [625] = 4,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [639] = 4,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym__inner_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [653] = 4,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [667] = 4,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [681] = 4,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [695] = 4,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym__inner_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [709] = 4,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [723] = 4,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [737] = 4,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [751] = 4,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym__inner_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [765] = 4,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [779] = 4,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [793] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [804] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [813] = 3,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [824] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [835] = 3,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [846] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [855] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [864] = 3,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [875] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [884] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [893] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [902] = 3,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(66), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [913] = 3,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [924] = 3,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [935] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [944] = 2,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [952] = 2,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [960] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [968] = 2,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [976] = 2,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [984] = 2,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [992] = 2,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1000] = 2,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1008] = 2,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1016] = 2,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1024] = 2,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 196,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 266,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 302,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 336,
  [SMALL_STATE(20)] = 356,
  [SMALL_STATE(21)] = 371,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 393,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 423,
  [SMALL_STATE(26)] = 434,
  [SMALL_STATE(27)] = 447,
  [SMALL_STATE(28)] = 460,
  [SMALL_STATE(29)] = 475,
  [SMALL_STATE(30)] = 488,
  [SMALL_STATE(31)] = 501,
  [SMALL_STATE(32)] = 514,
  [SMALL_STATE(33)] = 529,
  [SMALL_STATE(34)] = 542,
  [SMALL_STATE(35)] = 555,
  [SMALL_STATE(36)] = 569,
  [SMALL_STATE(37)] = 583,
  [SMALL_STATE(38)] = 597,
  [SMALL_STATE(39)] = 611,
  [SMALL_STATE(40)] = 625,
  [SMALL_STATE(41)] = 639,
  [SMALL_STATE(42)] = 653,
  [SMALL_STATE(43)] = 667,
  [SMALL_STATE(44)] = 681,
  [SMALL_STATE(45)] = 695,
  [SMALL_STATE(46)] = 709,
  [SMALL_STATE(47)] = 723,
  [SMALL_STATE(48)] = 737,
  [SMALL_STATE(49)] = 751,
  [SMALL_STATE(50)] = 765,
  [SMALL_STATE(51)] = 779,
  [SMALL_STATE(52)] = 793,
  [SMALL_STATE(53)] = 804,
  [SMALL_STATE(54)] = 813,
  [SMALL_STATE(55)] = 824,
  [SMALL_STATE(56)] = 835,
  [SMALL_STATE(57)] = 846,
  [SMALL_STATE(58)] = 855,
  [SMALL_STATE(59)] = 864,
  [SMALL_STATE(60)] = 875,
  [SMALL_STATE(61)] = 884,
  [SMALL_STATE(62)] = 893,
  [SMALL_STATE(63)] = 902,
  [SMALL_STATE(64)] = 913,
  [SMALL_STATE(65)] = 924,
  [SMALL_STATE(66)] = 935,
  [SMALL_STATE(67)] = 944,
  [SMALL_STATE(68)] = 952,
  [SMALL_STATE(69)] = 960,
  [SMALL_STATE(70)] = 968,
  [SMALL_STATE(71)] = 976,
  [SMALL_STATE(72)] = 984,
  [SMALL_STATE(73)] = 992,
  [SMALL_STATE(74)] = 1000,
  [SMALL_STATE(75)] = 1008,
  [SMALL_STATE(76)] = 1016,
  [SMALL_STATE(77)] = 1024,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_list, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_list, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2), SHIFT_REPEAT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_value, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 6, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 6, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 3, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 3, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 7, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 7, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 2, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 2, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2), SHIFT_REPEAT(63),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inner_list_repeat1, 2), SHIFT_REPEAT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inner_list_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_list, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 5, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 4, .production_id = 1),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(74),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
