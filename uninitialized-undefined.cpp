//** Uninitialized variables **//

// Unlike some programming languages, C/C++ does note initialize most variables to a given value (such
// as zero) automatically. Thus when a variable is assigned a memory location by the compiler, the default
// value of that variable is whatever (garbage) value happens to already be in that memory location!
// A variable that has not been given a known value (usually through initialization or assignment) is called an 
// uninitialized variable.

//** Note **//

// The terms "initialized" and "uninitialized" to be strict opposites, but they aren't quite! Initialization 
// means the object was provided with an initail value at the point of definition. Uninitialization means the object
// was provided with an initial value at the point of definition. Uninitialization means the object has not been
// given a known value (through any means, including assignment). Therefore, an object that is not intialized but
// is then assigned a value is no longer uninitialized (because is has been given a known value).

// To recap:

    // Initialization = The object is given a known value at the point of definition.

    // Assignment = The object is given a known value beyond the point of definition.

    // Uninitialized = The object has not been given a known value yet.

//** Aside **//

// This lack of initialization is a performance optimization inherited from C, back when computers were slow.
// Imagine a case where you were going to read in 100,000 values from a file. In such a case, you might create
// 100,00 variables, then fill them with data from the file.

// If C++ initialized all of those variables with default values upon creation, this would result in 100,000
// initializations (which would be slow), and for little benefit (since you're overwriting those values anyway).

// For now, you should always initialize your variables because the cost of doing so is miniscule compared to the
// benefit. Once you are more comfortable with the language, there may be certain cases where you omit the 
// initialization for optimization purposes. But this should always be done selectively and intentionally.

// Using the value of initialized variables can lead to unexpected results. Consider the following short program:

#include <iostream>

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value
    // print the value of x to the screen
    std::cout << x; // who knows what we'll get, because x is uninitialized
    return 0;
}

// In this case, the computer will assign some unused memory to x. It will then send the value
// residing in that memory location to std::cout, which will print the value (interpreted as an integer).
// But what value will it print? The answer is "who knows!", and the answer may (or may not) change 
// every time you run the program. When the author ran this program Visual Studio, std::cout printed
// the value 7177728 one time, and 5277592 the next.

//** Aside **//

// Some compilers, such as Visual Studio, will initialize the contents of memory to some preset value
// when you're using a debug build configuration. This will not happen when using a release build configuration.
// For example, if you run the above progam in Visual Studio debug configuration, it will consistently print 
// -858993460, because that's the value (interpreted as an integer) that Visual Studio initializes memory
// with in debug configurations.

// Most modern compilers will attempt to detect if a variable is being used without being given a value.
// If they are able to detect this, they will generally issue a compile-time error. 

// If your compiler won't let you compile and run the above program for this reason, here is a possible solution:

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}
 
int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized
 
    doNothing(x); // make the compiler think we're assigning a value to this variable
 
    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x;
 
    return 0;
}

// Using uninitialized variables is one of the most common mistakes that novice programmers make, and unfortunately,
// it can also be one of the most challenging to debug (because the program may run fine anyway if the uninitialized
// variable happened to get assigned to a spot of memory that had a reasonable value in it, like 0).

// This is the primary reason for the "always initialize your variables" best practice.

//** Undefined Behavior **//

// Using the value from an uninitialized variable is our first example of undefined behavior. Undefined behavior (often
// abbreviated UB) us the result of executing code whose behavior is not well defined by the C++ language. In this case,
// the C++ language doesn't have any rules determining what happens if you use the value of a variable that has not been
// given a known value. Consequently, if you actually do this, undefined behavior will result.

// Code implementing undefined behavior may exhibit any of the following symptoms:
    // Your program produces different results every time it is run.
    // Your program consistently produces the same incorrect result.
    // Your program behaves inconsistently (sometimes produces the correct result, sometimes not).
    // Your program seems like its working but produces incorrect results later in the program.
    // Your program crashes, either immediately or later.
    // Your program works on some compilers but not others.
    // Your program works until you change some other seemingly unrelated code.

// Or, your code may actually produce the correct behavior anyway. The nature of undefined behavior is that you never quite
// know what you're going to get, whether you'll get it every time, and whether that behavior will change when you make other
// changes.

// C++ contains many cases that can result in undefined behavior if you're not careful. Take note of where these cases are and 
// avoid them.

//** Rule **//

// Take care to avoid all situations that result in undefined behavior, such as using uninitialized variables.

//** Summary **//

// An uninitialized variable is a variable that has not been given a value by the program (generally through initialization or
// assignment). Using the value stored in an uninitialized variable will result in undefined behavior.

// Undefined behavior is the result of executing code whose behavior is not will defined by the language. The result can be almost
// anything, including something that behaves correctly.