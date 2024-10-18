import XCTest
import SwiftTreeSitter
import TreeSitterCFEngine

final class TreeSitterCFEngineTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_cfengine())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading CFEngine grammar")
    }
}
