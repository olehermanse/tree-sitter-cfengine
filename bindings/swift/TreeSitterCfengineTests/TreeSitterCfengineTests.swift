import XCTest
import SwiftTreeSitter
import TreeSitterCfengine

final class TreeSitterCfengineTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_cfengine())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Cfengine grammar")
    }
}
