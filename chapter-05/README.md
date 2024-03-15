# CHAPTER 5: OPERATOR

## Binary Arithmetic Operators:
In C++, binary arithmetic operators allow performing basic mathematical operations between two operands. They are as follows:

Addition (+): x + y adds x and y.
Subtraction (-): x - y subtracts y from x.
Multiplication (*): x * y multiplies x by y.
Division (/): x / y divides x by y.
Remainder (%): x % y computes the remainder of x divided by y.

Using static_cast<> for Floating Point Division with Integers
To perform floating point division with integers, you can use static_cast<> to convert integers to floating point numbers before division

## Arithmetic Assignment Operators:
Arithmetic assignment operators provide a shorthand for modifying the value of a variable:

Assignment (=): x = y assigns the value of y to x.
Addition assignment (+=): x += y is equivalent to x = x + y.
Subtraction assignment (-=): x -= y is equivalent to x = x - y.
Multiplication assignment (*=): x *= y is equivalent to x = x * y.
Division assignment (/=): x /= y is equivalent to x = x / y.
Remainder assignment (%=): x %= y is equivalent to x = x % y.

## Increment/Decrement Operators and Side Effects:
Increment and decrement operators increase or decrease the value of a variable by 1. They come in two forms: prefix and postfix.

Prefix increment (++x): Increments x and then returns x.
Prefix decrement (--x): Decrements x and then returns x.
Postfix increment (x++): Copies x, then increments x, and returns the copy.
Postfix decrement (x--): Copies x, then decrements x, and returns the copy.
Favor the prefix versions for performance reasons and to avoid potential surprises. However, in simple assignment expressions like x = x + y (which can be rewritten as x += y), the choice depends on the specific use case.

## The Comma Operator:
The comma operator (,) allows evaluating multiple expressions in places where a single expression is expected. It evaluates its left operand, discards the result, then evaluates the right operand and returns its value.

## Relational Operators:
Relational operators compare two values and return a Boolean result:

Greater than (>): x > y is true if x is greater than y.
Less than (<): x < y is true if x is less than y.
Greater than or equals (>=): x >= y is true if x is greater than or equal to y.
Less than or equals (<=): x <= y is true if x is less than or equal to y.
Equality (==): x == y is true if x equals y.
Inequality (!=): x != y is true if x does not equal y.

## Logical Operators:
C++ includes three logical operators for combining Boolean expressions:

Logical NOT (!): Negates a Boolean expression. !true is false.
Logical AND (&&): Returns true if both operands are true; otherwise, returns false.
Logical OR (||): Returns true if at least one of the operands is true; otherwise, returns false.
