// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterCFEngine",
    products: [
        .library(name: "TreeSitterCFEngine", targets: ["TreeSitterCFEngine"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterCFEngine",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterCFEngineTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterCFEngine",
            ],
            path: "bindings/swift/TreeSitterCFEngineTests"
        )
    ],
    cLanguageStandard: .c11
)
