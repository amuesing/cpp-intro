//** Introduction to Objects and Variables **//

// In computing, data is any information that can be
// moved, processed, or stored by a computer.

// Programs are collections of instructions that manipulate
// data to produce a desired result.

// Data is stored in a format that is efficient for storage or
// processing (and thus is not human readable). Thus, when the
// "Hello World" program is compiled, the text "Hello world!" is
// converted into a more efficient format for the program to use (binary)

//** Objects and Variables **//

// All computers have memory, called RAM (random access memory), that
// is available for your programs to use. You can think of RAM as a
// series of numbered mailboxes that can each be used to hold a piece of data
// while the program is running. A single piece of data, stored in memory 
// somewhere, is called a value.

// In some older programming languages (like Apple basic), you could directly
// access these mailboxes (a statement could say something like go get the
// value stored in mailbox number 7532).

// In C++, direct memory access is not allowed. Instead, we access memory indirectly
// through an object. An object is a region of storage (usually memory) that has a
// value and other associated properties. The key point here is that rather than say
// go get the value stored in mailbox 7532, we can say, go get the value stored by this object.

// Objects can be named or unnamed (anonymous). A named object is called a variable, 
// and the name of the object is called an identifier. In our programs, most of the 
// objects we create and use will be variables.

// In general programming, the term object typically refers to a variable, data structure in memory,
// or function. In C++, the term object has a narrower definition that excludes functions.

//** Variable instantiation **//

// In order to create a variable, we use a special kind of declaration called a definition.
// Here is an example of a definition:

int x; // define a variable named x, of type int

// At compile time, when the compiler sees this statement, it makes a note that we are defining a
// variable, giving it the name x, and that it is of type int. From that point forward, whenever
// the compiler sees the identifier x, it will know that we're referencing this variable.

// When the program is run (called runtime), the variable will be instantiated. Instantiation is a
// fancy word that means the object will be created and assigned a memory address. Variables must 
// be instantiated before they can be used to store values. For the sake of example, let's say that
// variable x is instantiated at memory location 140. Whenever the program then uses variable x,
// it will access the value in memory location 140. An instantiated object is sometimes also called an instance.

//** Data Types **//

// So far, we've covered that variable are named region of storage that can store a data value.
// A data type (more commonly just called a type) tells the compiler what type of value
// (e.g. a number, a letter, text, etc...) the variable will store.

// In the above example, our variable x was given type int, which means variable x will represent an
// integer value. An integer is a number that can be written without a fractional component, such as
// 4, 27, 0, -2, -12. For short, we can say that x is an integer variable.

// In C++. the type of a variable must be known at compile-time (when the program is compiled), and that
// type can not be changed without recompiling the program. This means an integer variable can only hold
// integer values. If you want to store some other kind of value, you'll need to use a different variable.

// Integers are just one of many types that C++ supports out of the box. For illustrative purposes, here's
// another example of defining a variable using data type double:

double width; // define a variable named width, of type double

// C++ also allows you to create your own user-defined types.

//** Defining Multiple Variables **//

// It is possible to define multiple variables of the same type in a single statement by separating the names
// with a comma,

// The following 2 snippets of code are effectively the same:

int a;
int b;

// is the same as:

int a, b;

// When defining multiple variables this way, there are two common mistakes that new programmers tend to make
// (neither serious, since the compiler will catch these and ask you to fix them):

// The first mistake is giving each variable a type when defining variables in sequence.

// int a, int b; // wrong (compiler error)

int a, b; // correct

// The second mistake is to try to define variables of different types in the same statement, which is not allowed;
// Variables of different types must be defined in separate statements.

int a, double b; // wrong (compiler error)

int a; double b; // correct (but not recommended way)

// correct and recommended (easier to read)

int a;
double b;

// Best practice: Although the language allows you to do so, avoid defining multiple variables in a single statement
// (even if they are the same type). Instead, define each variable in a separate statement (and then use a single-line
// comment to document what it is used for).

//** Summary **//

// In C++, we use variables to access memory. Variables have an identifier, a type, and a value ( and some other 
// attributes that aren't relevant here ). A variable's type is used to determine how the value in memory should 
// be interpreted.

// Data is any information that can be moved, processed, or stored by a computer.

// A value is a single piece of data stored in memory.

// A variable is a named region of memory.

// An identifier is the name that a variable is accessed by.

// A type tells the program how to interpret a value in memory.

// An integer is a number that can be written without a fractional component.