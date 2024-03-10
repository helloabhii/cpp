### Chapter 2: C++ BASICS: FUNCTIONS & FILES 

## Functions

Definition: A function is a self-contained block of code that performs a specific task. It promotes code reusability in your C++ programs.

Execution: User-defined functions are only executed when you call them from within your program, typically from the main function.

Nesting: C++ does not allow nesting functions directly within other functions. However, functions can call other functions, creating a hierarchy of execution.

## Return types:

Value-returning functions: These functions return a specific value (like int, double, string, etc.) to the caller using the return statement.
Void functions: These functions don't return any value and are typically used to perform actions without providing an output (void is used as the return type).
Multiple return statements: While a function can have multiple return statements, only one will be executed depending on the code flow within the function. Once a return statement is encountered, the function exits, and any subsequent statements are not reached.

## Functional Parameters and Arguments

Parameters: These are variables listed within the function's declaration that act as placeholders for values that will be passed when the function is called. They define the type of data the function expects to receive.
Arguments: These are the actual values that are passed to the function during the call. They are provided in the parentheses following the function's name when it's called and are matched with the corresponding parameters based on their order.
Local variables: Variables declared within the body of a function are local to that function and cannot be accessed directly from outside the function's scope.
Conditional Compilation

Preprocessor directives: These are special instructions that are processed by the compiler before the actual compilation of the code. They influence how the remaining code is interpreted.

## #ifdef and #ifndef:

#ifdef allows checking if a specific identifier has been previously defined using #define. If so, the code between #ifdef and its matching #endif is compiled; otherwise, it's ignored.
#ifndef is the opposite. It checks if the identifier has not been defined yet. If not, the code is compiled.

## #if 0 and #if 1:

#if 0 temporarily excludes a block of code from compilation. It's a way to comment out code using preprocessor directives.
#if 1 is used to re-enable the code that was wrapped in #if 0. This allows you to temporarily disable and enable code sections without manual commenting/uncommenting.

