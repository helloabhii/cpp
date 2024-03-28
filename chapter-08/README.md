# CHAPTER - 8: Type Conversion, Type Aliases, and Type Deduction

Type conversion, the process of converting a value from one data type to another, is essential in programming. Implicit type conversion, also known as automatic type conversion or coercion, occurs automatically by the compiler when a different data type is supplied than what is required.

### Implicit Type Conversion
Implicit type conversion is performed automatically by the compiler when necessary. It's a common feature in C++.

### Floating-point and Integral Promotion
C++ performs conversions between floating-point and integral types as necessary.

### C-style Casts
In standard C programming, casts are done using the () operator. While you may encounter these in older codebases, it's recommended to avoid them in modern C++.

### static_cast
C++ introduces static_cast, a casting operator used to convert a value of one type to another. It's favored over C-style casts for type conversion.

### Typedefs and Type Aliases
Type Aliases
Using the using keyword in C++, you can create an alias for an existing data type. It's preferred to name type aliases starting with a capital letter without using a suffix.

### Typedefs
typedef, short for "type definition," is an older way of creating an alias for a type. While still valid, type aliases are preferred over typedefs in modern C++.

In summary, prefer static_cast for type conversion and type aliases over typedefs for creating aliases in modern C++ code. 
