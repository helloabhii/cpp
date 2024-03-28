#include <iostream>

int main()
{
  // type conversion 
  double d{3}; // int value 3 implicitly converted to type double 
  d = 6; // int value 6 implicitly converted to type double 
 /* 
  if (5) // int value 5 implicitly converted into type bool
  {
  }
  */
  // C-style casts 
  int x{10};
  int y{4};
  double z{(double)x/y}; // convert x to a double so we get floating point division 
  std::cout << z << '\n'; //prints 2.5     

  // static_cast 
  char c{'a'};
  std::cout << c << ' ' << static_cast<int>(c) << '\n'; // prints a 97
  
// Type aliases
using Distance = double; //define Distance as an alias for type double 
Distance milesToDestination{3.4}; //define a variable of type double                           
std::cout  << milesToDestination << '\n'; // prints a double value  

// following aliases are identical 
typedef long Miles;
using Miles = long;


void printDistance(Distance distance); // Distance is some defined type

return 0;
}

