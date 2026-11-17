// Data Structures and Algorithms (DSA)
// ├── Data Structures
// │   ├── Organize and store data in memory
// │   ├── Help access and modify data efficiently
// │   └── Support faster processing and better resource usage
// │
// └── Algorithms
//     └── Step-by-step instructions for solving problems with data
//
// Data Types
// ├── Definition
// │   └── A data type tells the compiler how to interpret a value and
// │       which operations can be performed on it.
// │
// └── Primitive types
//     ├── int
//     │   └── Stores whole numbers, such as 1, 2, and 3
//     ├── float
//     │   └── Stores decimal values with single precision
//     ├── double
//     │   └── Stores decimal values with more precision than float
//     ├── char
//     │   └── Stores a character, such as 'a'
//     ├── bool
//     │   └── Stores true or false
//     └── void
//         └── Represents the absence of a value; it is not used to store
//             an ordinary value in a variable
//
// How values are represented in memory
// ├── Integer example: 5
// │   ├── Stored as an integer value
// │   ├── On many systems, int is 32 bits (4 bytes)
// │   └── For a typical 32-bit int, the range is
// │       -2,147,483,648 to 2,147,483,647
// │       (the exact size and range depend on the implementation)
// │
// └── Floating-point example: 2.5
//     ├── Floating-point values are represented approximately in binary
//     ├── Commonly follow the IEEE 754 format
//     ├── A typical float uses 32 bits:
//     │   ├── Sign bit
//     │   ├── Exponent
//     │   └── Fraction (significand)
//     └── In C++, 2.5 is a double literal by default; 2.5f is a float literal
//
// Floating-point precision example
// ├── A value such as 2.40000000000000000000000022 may not be represented
// │   exactly with finite binary floating-point precision
// ├── A typical double uses 64 bits and has more precision than a float
// └── Its bits represent a sign, exponent, and fraction (significand)
//
// Data Structures: classifications
// ├── Based on how elements are organized
// │   ├── Linear
// │   │   ├── Elements are arranged in a sequence
// │   │   └── Examples: arrays, linked lists, stacks, queues
// │   └── Non-linear
// │       ├── Elements can have branching or many-to-many relationships
// │       └── Examples: trees and graphs
// │
// ├── Based on how data is represented
// │   ├── Primitive types
// │   │   └── Basic types such as int, float, double, char, and bool
// │   └── Composite types / structures
// │       ├── Combine or organize multiple values
// │       └── Examples: arrays, structs, classes, and linked lists
// │
// ├── Based on abstraction
// │   └── Abstract Data Types (ADTs)
// │       ├── Describe data and the operations available on it
// │       ├── Do not specify the implementation details
// │       └── Examples: stack, queue, and list
// │
// └── Based on size during execution
//     ├── Fixed-size structures have a predetermined capacity
//     └── Dynamic structures can grow or shrink during execution
//         └── Examples: linked lists, trees, and graphs
//
// Note:
// A tree is a non-linear, hierarchical structure. These classifications can
// overlap; for example, a tree is both non-linear and hierarchical.
// Zaki and Talha