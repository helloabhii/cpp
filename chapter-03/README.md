### CHAPTER 3: FUNDAMENTAL DATA TYPES

# Smallest Memory Unit:
The fundamental unit of memory in C++ is a bit, which is a binary digit.

# Signed Integers: 
Used for holding positive and negative whole numbers, including 0.

# Default Signed Integers: 
Integers in C++ are signed by default, meaning they can represent positive, negative, and zero values.

# Unsigned Integers: 
Exclusively hold positive numbers and zero; cannot represent negative values.

# Boolean Type: 
Used to store Boolean values, representing true or false.

Prefer using int when the size of the integer doesn't matter (e.g., the number fits within the range of a 2-byte signed integer) and the variable is short-lived (e.g., destroyed at the end of the function).

## Introduction to IF Statement:

The if statement in C++ allows the execution of one or more lines of code only if a specified condition is true. If the condition evaluates to true, the code inside the if block is executed; otherwise, it is skipped.

## If-Else Statement:

The if-else statement extends the functionality. If the condition is true, the code inside the if block is executed; otherwise, the code inside the else block is executed.

## Escape Sequences:

Escape sequences in C++ start with a backslash (\). For example, \n is used to print a newline character, creating a new line. Another common escape sequence is \t, which embeds a horizontal tab.

## Explicit Type Conversion via static_cast Operator:

The static_cast operator in C++ is used for explicit type conversion. It takes the value from an expression and returns it converted into the type specified by new_type. For example, static_cast<int>(3.14) converts the floating-point value 3.14 to an integer.






