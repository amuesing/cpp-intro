#include <iostream>

//** Variable assignment and initialization **//

int x; // define an integer variable named x
int y, z; // define two variables, named y and z

// After a variable has been defined, you can give it a value (in a separate statement) using the = operator.
// This process is called copy assignment(or just assignment) for short

int width; // define an integer variable named width
width = 5; // copy assignment of value 5 into variable width
 
// variable width now has value 5

int main()
{
    int width;
    width = 5; // copy assignment of value 5 into variable width

    // variable width now has value 5

    width = 7; // change value stored in variable width to 7

    // variable width now has value 7

    return 0;
}

// When we assign value 7 to variable width, the value 5 that was there previously is overwritten.
// Normal variables can only hold one value at a time.

//** Warning **//

// One of the most common mistakes that new programmers make is to confuse the assignment operator (=)
// with the equality operator (==). Assignment (=) is used to assign a value to a variable. Equality (==)
// is used to test whether two operands are equal in value.

//** Initialization **//

// When a variable is defined, you can also provide an inital value for the variable at the same time.
// this is called initialization. The value used to initialize a variable is called an initializer.

// Initialization in C++ is surprisingly complex, so we'll present a simplified view here.

// There are 4 basic ways to initialize variables in C++:

int a; // no initializer
int b = 5; // initializer after equals sign
int c( 6 ); // initializer in parenthesis
int d{ 7 }; // initializer in braces

//** Copy Initialization **//

// When an initializer is provided after an equals sign, this is called copy initialization. Copy initialization
// was inherited from the C languages.

int width = 5; // copy initialization of value 5 into variable width

// Much like copy assignment, this copies the value on the right-hand side of the equals to the variable being created
// on the left-hand side.

// For simple types like int, copy initialization is efficient. However, when types get more complex, copy initialization can be inefficient.

//** Direct Initialization **//

// When an initializer is provided inside parenthesis, this is called direct initialization.

int width( 5 ); // direct initialization of value 5 into variable width

// For simple data types (like int), copy amd direct initialization are essentially the same. For more complicated types,
// direct initialization tends to be more efficient than copy initialization.

//** List Initialization **//

// Unfortunately, direct initialization can't be used for all types of initialization (such as initializing an object with a list of data).
// To provide a more consistent initialization mechanism, there's list initialization (also sometimes called uniform initialization or
// brace initialization) that uses curly braces.

// LIst initialization comes in three forms:

int width { 5 }; // direct list initialization of value 5 into variable width (preferred)
int height = { 6 }; // copy list initialization of value 6 into variable height
int depth {}; // value initialization (see next section)

// Direct and copy list initialization function almost identically, but the direct form is generally preferred.

// List initialization has the added benefit of disallowing "narrowing" concersions. THis means that if you try to use list initialization
// to initialize a variable with a value it can not safely hold, the compiler will throw a warning or an error. For example:

int width { 4.5 }; // error: not all double values fit into an int

// In the above snippet, we're trying to assign a number (4.5) that has a fractional part (the .5 part) to an integer variable
// (which can only hold numbers without fractional parts). Copy and direct initialization would drop the fractional part, 
// resulting in initialization of value 4 into variable width. However, with list initialization, this will cause the compiler to
// issue an error (which is generally a good thing, because losing data is rarely desired). Conversions that can be done without
// potential data loss are allowed. 


// Best practice: Favor initialization using braces whenever possible.

//** Value initialization and zero initialization **//

// When a variable is initialized with empty braces, value initialization takes place. In most cases, value initialization will
// initialize the variable to zero (or empty, if that's more appropriate for a given type). In such cases where zeroing occurs,
// this is called zero initialization.

int width{}; // zero initialization to value 0

// Use an explicit initialization value if you're actually using that value.

int x { 0 }; // explicit initialization to value 0
std::cout << x; // we'lsre using that zero value

// Use value initialization if the value is temporary and will be replaced.

int x{}; // value initialization
std::cout >> x; // we're immediately replacing that value

//** Initialize your variables **//

// Initialize your variables upon creation. YOu may eventually find cases where you want to ignore this advice for a specific reason

//** Initializing multiple variables **//

// Tt is possible to define multiple variables of 
// the same type in a single statement by separating the names with a comma.

int a, b;

// Best practice is to avoid this syntax althogether. However, since you may encounter other code that uses this style,
// it's still useful to know this syntax.

// You can initialize multiple variables defined on the same line:

int a = 5, b = 6; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e{ 9 }, f{ 10 }; // list initialization (preferred)

// Unfortunately, there's a common pitfall here that can occur when the programmer 
// mistakenly tries to initialize both variables by using one statement.

int a, b = 5; // wrong (a is not initialized!)
int a = 5, b = 5; // correct

// In the top statement, variable "a" will be unititialized, and the compiler may or may not complain.
// If it doesn't, this is a great way to have your program intermittently crash and produce sporadic results.

// The best way to remember that this is wrong is to consider the case of direct initialization or list initialization:

int a, b( 5 );
int c, d{ 5 };

// This makes it seem a little more clear that the value 5 is only being used to initialize variable b or d, not a or c.

//** Summary **//

// Initialization gives a variable an initial value at the point it is created. Assignment gives a variable a value at
// some point after the variable is created.

// Direct List Initialization is the preferred method of initialization. 
