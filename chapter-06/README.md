# CHAPTER 6: Scope, Duration, and Linkage

### Compound Statements (Blocks)
A compound statement (also called a block or block statement) is a group of zero or more statements that the compiler treats as a single statement.

### Using Blocks to Execute Multiple Statements Conditionally
One of the most common use cases for blocks is in conjunction with if statements. By default, an if statement executes a single statement if the condition evaluates to true. However, we can replace this single statement with a block of statements if we want multiple statements to execute when the condition evaluates to true.

### User-defined Namespaces and the Scope Resolution Operator
C++ allows us to define our own namespaces via the namespace keyword. Namespaces that you create in your own programs are casually called user-defined namespaces (though it would be more accurate to call them program-defined namespaces).

The best way to tell the compiler to look in a particular namespace for an identifier is to use the scope resolution operator (::).

### Local Variables
Local variables have block scope, which means they are in scope from their point of definition to the end of the block they are defined within.

### Introduction to Global Variables
By convention, global variables are declared at the top of a file, below the includes, in the global namespace.

### Variable Shadowing (Name Hiding)
Since global variables are part of the global namespace, we can use the scope operator (::) with no prefix to tell the compiler we mean the global variable instead of the local variable.
