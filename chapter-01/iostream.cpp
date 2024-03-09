#include <iostream>//for std::cout  7 std::cin 

// iostream: cout, cin, and endl
//std::cout 
int main()
{
  std::cout << "Enter two Numbers: ";
  int numOne {}; //define variable x to  hold user input (and value-initialize it)
  int numTwo {};
  std::cin >> numOne >> numTwo ; //get number from keyboard and store it in var x
  std::cout << "You Entered: " << numOne << " and "<<  numTwo << '\n';
  std::cout << " This One Resolved" << std::endl;

  
  
  //uninitialized variables 
  int xx;
  std::cout << "xx: " << xx << '\n';

  //Implementation-defined behavior 
  std::cout << "Size of int: "<< sizeof(int) << '\n';

  // literals and variable 
  std::cout << 69 << '\n'; //this is literal 
  int numThree {71}; // this is variable 
  std::cout << numThree << '\n';

  //Operator 
  std::cout << 1+2 << '\n';


  //expression 
  int aa{1};
  int bcd{2+3};
  int cdf{(2*3)+4};
  int defg{bcd};

  // Question:
  /* 
   * let’s create a program that asks the user to enter an integer,
   * waits for them to input an integer, then tells them what 2 times that number is. 
   * The program should produce the following output (assume I entered 4 as input):
   */
  std::cout << "Enter the Num: ";
  int aNum{};
  std::cin >> aNum ;
  std::cout << "You entered: " << aNum << '\n';
  std::cout << "Double of that Num: " << aNum * 2 << '\n';
  std::cout << "Triple the Num: " << aNum * 3 << '\n';
  return 0;
}
