#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 7
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 11

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
  anon_sym_COLON = 12,
  anon_sym_DOT = 13,
  sym_promise_guard = 14,
  sym_class_guard = 15,
  sym_comment = 16,
  sym_macro = 17,
  sym_source_file = 18,
  sym__block = 19,
  sym_bundle_block = 20,
  sym_parameter_list = 21,
  sym_bundle_body = 22,
  sym_bundle_section = 23,
  sym_right_value = 24,
  sym_class_guarded_promises = 25,
  sym_promise = 26,
  sym_attribute = 27,
  sym__qualified_identifier = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_parameter_list_repeat1 = 30,
  aux_sym_bundle_body_repeat1 = 31,
  aux_sym_bundle_section_repeat1 = 32,
  aux_sym_bundle_section_repeat2 = 33,
  aux_sym_promise_repeat1 = 34,
  alias_sym_attribute_name = 35,
  alias_sym_bundle_name = 36,
  alias_sym_bundle_type = 37,
  alias_sym_namespace = 38,
  alias_sym_parameter = 39,
  alias_sym_promiser = 40,
  alias_sym_stakeholder = 41,
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
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
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
  [sym_right_value] = "right_value",
  [sym_class_guarded_promises] = "class_guarded_promises",
  [sym_promise] = "promise",
  [sym_attribute] = "attribute",
  [sym__qualified_identifier] = "_qualified_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
  [aux_sym_bundle_section_repeat1] = "bundle_section_repeat1",
  [aux_sym_bundle_section_repeat2] = "bundle_section_repeat2",
  [aux_sym_promise_repeat1] = "promise_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_bundle_name] = "bundle_name",
  [alias_sym_bundle_type] = "bundle_type",
  [alias_sym_namespace] = "namespace",
  [alias_sym_parameter] = "parameter",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_right_value] = sym_right_value,
  [sym_class_guarded_promises] = sym_class_guarded_promises,
  [sym_promise] = sym_promise,
  [sym_attribute] = sym_attribute,
  [sym__qualified_identifier] = sym__qualified_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_bundle_body_repeat1] = aux_sym_bundle_body_repeat1,
  [aux_sym_bundle_section_repeat1] = aux_sym_bundle_section_repeat1,
  [aux_sym_bundle_section_repeat2] = aux_sym_bundle_section_repeat2,
  [aux_sym_promise_repeat1] = aux_sym_promise_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_bundle_name] = alias_sym_bundle_name,
  [alias_sym_bundle_type] = alias_sym_bundle_type,
  [alias_sym_namespace] = alias_sym_namespace,
  [alias_sym_parameter] = alias_sym_parameter,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [sym_right_value] = {
    .visible = true,
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
  [sym__qualified_identifier] = {
    .visible = false,
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
  [alias_sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameter] = {
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
    [0] = alias_sym_parameter,
  },
  [3] = {
    [1] = alias_sym_parameter,
  },
  [4] = {
    [2] = alias_sym_parameter,
  },
  [5] = {
    [0] = alias_sym_promiser,
  },
  [6] = {
    [0] = alias_sym_promiser,
    [2] = alias_sym_stakeholder,
  },
  [7] = {
    [0] = alias_sym_attribute_name,
  },
  [8] = {
    [0] = alias_sym_namespace,
  },
  [9] = {
    [0] = alias_sym_bundle_name,
  },
  [10] = {
    [0] = alias_sym_namespace,
    [2] = alias_sym_bundle_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_right_value, 2,
    sym_right_value,
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
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '`') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == '}') ADVANCE(27);
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
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(36);
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
      if (lookahead == ':') ADVANCE(37);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(35);
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
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(31);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_bundle_keyword);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_promise_guard);
      if (lookahead == ':') ADVANCE(37);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(37);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
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
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym__block] = STATE(10),
    [sym_bundle_block] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
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
    STATE(8), 2,
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
    STATE(7), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(14), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [50] = 5,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(23), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(21), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(6), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [69] = 7,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_DASH_GT,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(37), 1,
      sym_attribute,
    STATE(38), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [92] = 5,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(35), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(7), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [111] = 5,
    ACTIONS(39), 1,
      sym_quoted_string,
    ACTIONS(42), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(37), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(7), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [130] = 5,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(13), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [148] = 6,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    ACTIONS(46), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      aux_sym_promise_repeat1,
    STATE(34), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [168] = 4,
    ACTIONS(7), 1,
      sym_bundle_keyword,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(12), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [184] = 4,
    ACTIONS(52), 1,
      anon_sym_COLON,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(50), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [200] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      sym_bundle_keyword,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(12), 3,
      sym__block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [216] = 5,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      sym_promise_guard,
    ACTIONS(65), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(13), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [234] = 5,
    ACTIONS(15), 1,
      sym_class_guard,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(13), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [252] = 3,
    ACTIONS(74), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(72), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [265] = 3,
    ACTIONS(78), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(76), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [278] = 4,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(27), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [293] = 3,
    ACTIONS(86), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(84), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [306] = 3,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [319] = 3,
    ACTIONS(94), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(92), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [332] = 3,
    ACTIONS(98), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(96), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [345] = 5,
    ACTIONS(100), 1,
      sym_quoted_string,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(44), 1,
      sym__qualified_identifier,
    STATE(60), 1,
      sym_right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [362] = 3,
    ACTIONS(106), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(104), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [375] = 4,
    ACTIONS(82), 1,
      sym_promise_guard,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(17), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [390] = 3,
    ACTIONS(112), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(110), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [403] = 5,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_parameter_list,
    STATE(51), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [420] = 4,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(27), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [435] = 3,
    ACTIONS(125), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(123), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [448] = 5,
    ACTIONS(100), 1,
      sym_quoted_string,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(9), 1,
      sym_right_value,
    STATE(44), 1,
      sym__qualified_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [465] = 4,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [479] = 4,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [493] = 4,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [507] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [521] = 4,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [535] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [549] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [563] = 4,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [577] = 4,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [591] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(144), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [601] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [615] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(148), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [625] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [639] = 4,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [653] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(154), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [663] = 4,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [677] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [691] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [700] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [709] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [718] = 3,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [729] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [738] = 3,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [749] = 3,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [760] = 3,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [771] = 3,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [782] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [793] = 3,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [804] = 3,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [815] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym_bundle_keyword,
  [824] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [833] = 2,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [841] = 2,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [849] = 2,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [857] = 2,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [865] = 2,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [873] = 2,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [881] = 2,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [889] = 2,
    ACTIONS(205), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [897] = 2,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [905] = 2,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [913] = 2,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [921] = 2,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [929] = 2,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [937] = 2,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 278,
  [SMALL_STATE(18)] = 293,
  [SMALL_STATE(19)] = 306,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 375,
  [SMALL_STATE(25)] = 390,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 420,
  [SMALL_STATE(28)] = 435,
  [SMALL_STATE(29)] = 448,
  [SMALL_STATE(30)] = 465,
  [SMALL_STATE(31)] = 479,
  [SMALL_STATE(32)] = 493,
  [SMALL_STATE(33)] = 507,
  [SMALL_STATE(34)] = 521,
  [SMALL_STATE(35)] = 535,
  [SMALL_STATE(36)] = 549,
  [SMALL_STATE(37)] = 563,
  [SMALL_STATE(38)] = 577,
  [SMALL_STATE(39)] = 591,
  [SMALL_STATE(40)] = 601,
  [SMALL_STATE(41)] = 615,
  [SMALL_STATE(42)] = 625,
  [SMALL_STATE(43)] = 639,
  [SMALL_STATE(44)] = 653,
  [SMALL_STATE(45)] = 663,
  [SMALL_STATE(46)] = 677,
  [SMALL_STATE(47)] = 691,
  [SMALL_STATE(48)] = 700,
  [SMALL_STATE(49)] = 709,
  [SMALL_STATE(50)] = 718,
  [SMALL_STATE(51)] = 729,
  [SMALL_STATE(52)] = 738,
  [SMALL_STATE(53)] = 749,
  [SMALL_STATE(54)] = 760,
  [SMALL_STATE(55)] = 771,
  [SMALL_STATE(56)] = 782,
  [SMALL_STATE(57)] = 793,
  [SMALL_STATE(58)] = 804,
  [SMALL_STATE(59)] = 815,
  [SMALL_STATE(60)] = 824,
  [SMALL_STATE(61)] = 833,
  [SMALL_STATE(62)] = 841,
  [SMALL_STATE(63)] = 849,
  [SMALL_STATE(64)] = 857,
  [SMALL_STATE(65)] = 865,
  [SMALL_STATE(66)] = 873,
  [SMALL_STATE(67)] = 881,
  [SMALL_STATE(68)] = 889,
  [SMALL_STATE(69)] = 897,
  [SMALL_STATE(70)] = 905,
  [SMALL_STATE(71)] = 913,
  [SMALL_STATE(72)] = 921,
  [SMALL_STATE(73)] = 929,
  [SMALL_STATE(74)] = 937,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_identifier, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2), SHIFT_REPEAT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 6),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 2, .production_id = 5),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 2, .production_id = 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 7, .production_id = 6),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 7, .production_id = 6),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_identifier, 3, .production_id = 8),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 5),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 5),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 6, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 6, .production_id = 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 3, .production_id = 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 3, .production_id = 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 6),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2), SHIFT_REPEAT(55),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_identifier, 5, .production_id = 10),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_identifier, 3, .production_id = 9),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_value, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 5, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 4, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(67),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, .production_id = 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
