//** Statements and the structure of a program **///

// Preprocessor Directive
#include <iostream>

// Define function main()
int main()

// Curly braces indicate to the complier where
// where the function begins and ends.
{
// Within the fuction, each line of code is a statement.
// std::cout stands for "character output"
  std::cout << "Hello world!";
// Return statement. When an executable program finishes
// running, the program sends a value back to the operating
// system in order to indicate whether it ran successfully
// or not. A return value of 0 indicates that everything went okay.
  return 0;
}

//** Notes **//

// A *statement* is an instruction in a computer program that 
// tells the computer to perform an action.

// A function is a collection of statements that executes sequentially.

// All programs must have a *main* function

// Execution starts with the first statement inside the main function.

// Statements in C++ are often ended with a semicolon (;)

// A syntax error is a complier error that occurs at compile-time when
// your program violates the grammar rules of the C++ language.

// A library is a collection of precompiled code that has been "packaged up"
// for reuse in other programs. The C++ Standard Library is a library that ships
// with C++. It contains additional functionality to use in your programs.
