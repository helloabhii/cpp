# CHAPTER - 7: CONTROL FLOW

### If Statements and Blocks:
If the condition is true, the true_statement executes; otherwise, if an else statement exists, the false_statement executes.

### Switch Statement Basics:
A switch statement evaluates an expression to produce a value. If the expression's value matches any case label, the statements after that label execute. If no match is found and a default label exists, the statements after the default label execute. Use break to exit the switch block.

### Goto Statements:
C++ supports unconditional jumps via goto statements, directing the program to a labeled statement. Avoid excessive indentation for clarity.

### Introduction to Loops:
Loops allow code to execute repeatedly until a condition is met, enhancing flexibility in programming. Three main loop types exist:

#### While Statements:
The simplest loop construct, executing as long as a condition is true.

#### Do While Statements:
Similar to while loops, but always execute at least once before checking the condition.

#### For Statements:
Preferred when there's a clear loop variable. Facilitates defining, initializing, testing, and modifying loop variables concisely.

### Break and Continue:
Break: Terminates loops or switch statements, continuing execution after the loop or switch.
Return vs. Break: Return terminates the entire function; break only exits the loop or switch.
Continue: Skips the current iteration of a loop, continuing with the next iteration.

### Halts (Exiting Early):
Halts terminate the program. In C++, use std::exit() for normal termination. Prefer exceptions for error handling unless exceptions are disabled.

