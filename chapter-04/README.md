# CHAPTER 4 - CONSTANTS AND STRINGS 

### Constants: 
A constant is a value that cannot be altered during the execution of a program. C++ supports two primary types of constants: named constants and literals.

### Constant Variables: 
A constant variable is a variable whose value is immutable. To declare a variable as constant, the const keyword is used. It is important to note that constant variables must be initialized at the time of their declaration. Generally, it is advisable to avoid using const when passing by value or returning by value in functions, as the const qualifier doesn't offer additional benefits in these contexts.

### Literals:
Literals, sometimes referred to as literal constants, represent fixed values directly inserted into the code. Their interpretation cannot be changed (for example, the number 5 always represents the integer value five). Literals are integral to expressing specific values within the code succinctly and clearly.

### Strings:
A string is a sequence of characters that represents text, such as names, sentences, or any combination of characters meant to convey information. In C++, string literals are enclosed in double quotes and are essentially C-style strings. However, these have a peculiar type that can be cumbersome to work with due to their low-level nature.

### The std::string Type:
To facilitate easier and safer text manipulation, C++ offers the std::string type, available through including the <string> header. std::string simplifies working with strings, albeit with a trade-off in initialization and copy operations, which can be expensive.

### Creating std::string Objects:
Objects of type std::string can be created just like other objects in C++. Should there be insufficient memory to store a string, std::string dynamically allocates additional memory at runtime, ensuring smooth operation.

### Reading Input with std::getline():
For reading an entire line of text input into a string, the std::getline() function is the preferred method. This function requires two arguments: std::cin for the input stream and the string variable where the input will be stored. std::getline() is designed to capture an entire line, including spaces, until a newline character is encountered, making it ideal for text input scenarios.
