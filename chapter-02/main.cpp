#include <iostream>

int add(int x, int y); // function forward declaration //function declaration
                       // this function is defined in other file called add.cpp
                       // so when you run main.cpp file it doesn't compile
                       // you have to compile both file alogside 
                       // g++ -o main main.cpp add.cpp
                       // this will generate a main file (executable) now this will work


// Conditional compilation
#define PRINT_ABHI


/*
Question #1

Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, 
and then outputs the answer. The program should use three functions:

A function named “readNumber” should be used to get (and return) a single integer from the user.
A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
A main() function should be used to glue the above functions together.
 */ 
 // Have to be solve 
 
 /*
  * Question #2

Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”. Use a forward declaration to access them from main().

If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.
  */

/*
 * Question #3

Modify the program you wrote in #2 so that it uses a header file (named io.h) to access the functions instead of using forward declarations directly in your code (.cpp) files. Make sure your header file uses header guards.
 */


// main 
int main() 
{
  std::cout << add(4,5) << std::endl;

//Conditional compilation
#ifdef PRINT_ABHI
  std::cout << "helloabhii\n"; //print because PRINT_ABHI defined 
#endif

#ifdef PRINT_WHO
  std::cout << "who?\n"; // will not be printed because PRINT_WHO is not defined 
#endif

#ifndef PRINT_HELLO
  std::cout << "This always printed \n"; // this will be printed because PRINT_HELLO isn't defined //opposite of ifdef 
#endif

#if 0 ///don't compile anything 
  std::cout << "This means exclude this \n";
#endif  //till here 

#if 1 //always compile this 
  std::cout << "this will be printed\n";
#endif 
     
  return 0;
}
