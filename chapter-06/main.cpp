#include <iostream>
using namespace std; 

// Global Variables
int abhi{71};

// Compound statements (blocks)
int blocks() 
{
cout << "Enter a integer: ";
int x{};
cin >> x;

if (x >= 0)
{ //start of nested block
  cout << "You entered a positive integer.\n";
  cout << "integer maybe 0 or greater than zero\n";
} //end of nested block 
else 
{ //start of another nested block 
  cout << "Integer you entered is negative\n";
  cout<< "the positive integer of value you entered is "<<-x<< endl;
}//end of nested block 
 return 0;
}

// Defining your own namespaces
namespace Foo // define a namespace named Foo
{
    // This doSomething() belongs to namespace Foo
    int doSomething(int x, int y)
    {
        return x + y;
    }
}

namespace Goo // define a namespace named Goo
{
    // This doSomething() belongs to namespace Goo
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

// Local variables
 int localVar() // outer block
{
    int x { 5 }; // x enters scope and is created here

    { // nested block
        int y { 7 }; // y enters scope and is created here
    } // y goes out of scope and is destroyed here

    // y can not be used here because it is out of scope in this block

    return 0;
} // x goes out of scope and is destroyed here


// Global Variables
int value { 5 }; // global variable

int globalVar()
{
    int value { 7 }; // hides the global variable value
    ++value; // increments local value, not global value

    --(::value); // decrements global value, not local value (parenthesis added for readability)

    std::cout << "local variable value: " << value << '\n';
    std::cout << "global variable value: " << ::value << '\n';

    return 0;
} // local value is destroyed


int main()
{
  //Compound statements (blocks)
  blocks();

  // accessing namespacce 
  cout << Foo::doSomething(4,5) << '\n';

  // GLOABL VARIABLES
  globalVar();

  return 0;
}
