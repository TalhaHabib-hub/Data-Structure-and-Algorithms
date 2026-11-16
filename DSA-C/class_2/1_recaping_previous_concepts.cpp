#include<iostream>
using namespace std;
int main(){
  cout << "Array is DS"<<endl;
   //first way to create
  int marks[5];

   //second way to create
  int people_count[5]={23,232,32,21,43};

   //third way to create
  int books_count[] = {32, 323, 23};}

// main memory = RAM
// what is computer system
// it is a machine that takes input, processes it, and gives output.

// Purpose of using Data Structures in detail:
// Data Structures
// ├── To store data in an organized way
// │   ├── Arrays keep similar data together
// │   ├── Lists store data in a sequence
// │   └── Records group related information
// │
// ├── To access data quickly
// │   ├── Arrays use index-based access
// │   ├── Hash tables support fast searching
// │   └── Trees and graphs help in traversal
// │
// ├── To manage memory efficiently
// │   ├── Stacks and queues use memory wisely
// │   ├── Linked lists use dynamic memory
// │   └── It avoids unnecessary waste
// │
// ├── To improve performance
// │   ├── Searching becomes faster
//   │   ├── Sorting becomes easier
//   │   └── Program operations become efficient
//   │
// ├── To solve real-world problems
// │   ├── Student records use structures
// │   ├── File systems use trees
// │   ├── Social networks use graphs
// │   └── Waiting systems use queues
// │
// └── To build large and maintainable software
//     ├── Code becomes easier to understand
//     ├── Data can be updated efficiently
//     └── Systems stay organized and scalable
//
// Data Type
// ├── Definition:
// │   └── A data type tells the computer what kind of data a variable can hold.
// │
// ├── Examples:
// │   ├── int -> whole numbers
// │   ├── float -> decimal numbers
// │   ├── char -> single character
// │   └── bool -> true / false
// │
// └── Why it is called a data type:
//     └── Because it defines the type/category of the data stored in a variable.
//
// Data Structure
// ├── Definition:
// │   └── A data structure is a way to arrange and store data efficiently.
// │
// ├── Examples:
// │   ├── Array
// │   ├── Stack
// │   ├── Queue
// │   ├── Linked List
// │   ├── Tree
// │   └── Graph
// │
// └── Purpose:
//     ├── Organize data
//     ├── Access data fast
//     ├── Save memory
//     └── Improve program performance
//
// Primitive Data Type
// ├── Built-in data types of the language
// ├── Store one value at a time
// ├── Simple and fast
// └── Examples:
//     ├── int
//     ├── float
//     ├── char
//     ├── double
//     └── bool
//
// Non-Primitive Data Type
// ├── More complex types
// ├── Can store multiple values or objects
// ├── Usually created from primitive types
// └── Examples:
//     ├── Array
//     ├── String
//     ├── Class
//     ├── Structure
//     ├── Linked List
//     └── Queue
//
// Abstract Data Type (ADT)
// ├── Definition:
// │   └── An abstract data type is a mathematical model for data
// │       where the behavior is defined by operations, not by implementation details.
// │
// ├── It focuses on:
// │   ├── What operations are allowed
// │   ├── What the data represents
// │   └── What result each operation gives
// │
// ├── It hides implementation details:
// │   ├── User does not need to know how it is built internally
// │   └── Only the interface matters
// │
// └── Examples:
//     ├── Stack
//     ├── Queue
//     ├── List
//     └── Set
//
// Difference between Data Type and Data Structure
// ├── Data Type
// │   ├── Describes the type of a single value
// │   ├── Example: int, float, char
// │   └── Used for variables
// │
// └── Data Structure
//     ├── Describes how many values are arranged together
//     ├── Example: array, stack, queue
//     └── Used for collection of data
//
// Difference between Primitive and Non-Primitive
// ├── Primitive
// │   ├── Built-in
// │   ├── Holds only one value
// │   └── Example: int x = 5;
// │
// └── Non-Primitive
//     ├── More complex or user-defined
//     ├── Can hold multiple values
//     └── Example: int arr[5] = {1, 2, 3, 4, 5};
//
// Difference between Class and Struct
// ├── Class
// │   ├── Default access specifier is private
// │   ├── Mostly used for object-oriented programming
// │   ├── Data hiding is common
// │   └── Methods and attributes are grouped together
// │
// └── Struct
//     ├── Default access specifier is public
//     ├── Mostly used for simple data containers
//     ├── Members are usually accessed directly
//     └── Commonly used for lightweight data storage
//
// Most valid difference:
// Class is designed for encapsulation and behavior, while struct is designed for
// storing data in a simple way with public access by default.
//
// Why does C++ have both class and struct?
// ├── C already had struct for grouping related data, and C++ kept it for
// │   compatibility with C and to make it familiar to C programmers.
// ├── C++ added class to support features such as private access and
// │   encapsulation by default.
// └── In C++, struct can also have functions, constructors, and access control.
//     The main language difference is that struct members are public by default,
//     while class members are private by default.
//
// How does show() know which object called it?
// ├── Example calls:
// │   ├── s1.show();
// │   └── s2.show();
// ├── The call syntax tells C++ which object is calling the function.
// ├── For s1.show(), the function's implicit this pointer refers to s1.
// ├── For s2.show(), this refers to s2.
// └── So, when show() accesses a member such as name, it uses that object's
//     member (this->name).
//
// In short:
// s1.show() -> this points to s1
// s2.show() -> this points to s2
//
// Difference between Pointer and Reference
// ├── Pointer
// │   ├── A variable that stores the address of another object
// │   ├── Can be reassigned to point to a different object
// │   ├── Can be nullptr (point to no object)
// │   ├── Access the pointed-to value using *
// │   └── Example: int* ptr = &value;
// │
// └── Reference
//     ├── Another name (alias) for an existing object
//     ├── Must be initialized when declared
//     ├── Cannot be changed later to refer to a different object
//     ├── Normally cannot be null
//     ├── Use it like the original object; no * is needed
//     └── Example: int& ref = value;
//
// Example:
// int value = 10;
// int* ptr = &value; // pointer stores value's address
// int& ref = value;  // ref is another name for value
//
// Note: A reference is described by its behavior as an alias; it is not
// necessarily implemented internally as a pointer.
//
// Reference example:
// int number = 10;
// int& alias = number; // alias refers to the same variable as number
// alias = 25;          // changes number through the reference
// cout << number;      // prints 25
//
// Both number and alias refer to the same stored value.
