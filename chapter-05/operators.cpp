#include <iostream>



// Prefix increment and decrement

void prefix()
{
  int x{5};
  int y{++x}; //x is incremented to 6, x is evaluated to the value 6, and 6 is assigned to y
  std::cout << x << ' ' << y << '\n';
}

// Postfix increment and decrement
void postfix()
{
  int x{5};
  int y{x++}; //x is incremented to 6,copy of original x is evaluated to the value 5, and 5 is assigned to y  
  std::cout << x << ' ' << y << '\n';
}

// Logical operators 
void  logicalOpt()
{
  //NOT 
  int x{3};
  int y{4};
  if (!(x > y)) //
    std::cout << "x is not greater than y \n ";
  else 
    std::cout << "x is greater than y \n ";

  //OR
  std::cout << "Enter a number: ";
  int value{};
  std::cin >> value;
  if (value == 0 || value == 1) // you can add as much condition here you like to add
    std::cout << "you picked either 0 or 1\n";
  else 
    std::cout << "You picked any number except 0 or 1\n";

  // AND 
  if (value  > 0 && value < 9)
    std::cout << "You choose number 0 or either less than 9\n";
  else 
    std::cout << "You choose number except 0-9\n";
}

int main() 
{
  int x {7};
  int y {71};
  std::cout << "int/int: " << x/y <<'\n';

// static_cast<> to do floating point division with integers
std::cout <<"double/int: " << static_cast<double>(x)/y << '\n';

x = x + 4; // add 4 to existing value of x
x += 4; // add 4 to existing value of x (same thing but different approach)

// Prefix increment and decrement
prefix();

// Postfix increment and decrement
postfix();

//comma operator
std::cout << "X and Y are:  " << x , y;
std::cout << '\n';

//logcal operator 
logicalOpt();
return 0;
}

