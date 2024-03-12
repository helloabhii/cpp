#include <iostream>



///chaining if else 
void ifelse()
{
 std::cout << "Enter an integer(function ifelse): ";
 int x{};
 std::cin >> x;
 if (x > 0)
   std::cout << "The value user enter is positive.\n"; // this statement only executes if value == 0
 else if (x < 0)
   std::cout << "The value user enter negative.\n"; //execute if  user enter value is non zero
 else
   std::cout << "The value user enter is zero.\n";
}

// chars 
void chr () 
{
  char ch{'a'}; //initialize char variable using  character literals
  std::cout << "char: " << ch << '\n' ;
  //Inputting chars
  std::cout << "Input a character: ";
  char che{};
  std::cin >> che;
  std::cout << "character you entered: " << che << '\n';
} 


//type casting 
void tcast(int x)
{
  std::cout << x << '\n'; 
}


int main ()
{

  //if else statement
 std::cout << "Enter an integer: ";
 int x{};
 std::cin >> x;
 if (x == 0)
   std::cout << "The value user enter is zero.\n"; // this statement only executes if value == 0
 else 
   std::cout << "The value user enter is not zero.\n"; //execute if  user enter value is non zero
 
 //chaining if else
 ifelse();

 //chars 
 chr();

 //Escape sequences = \n used to add new line
 std::cout <<"first line \n Second line\n";

 // Another commonly used escape sequence is '\t', which embeds a horizontal tab:
 std::cout << "tab space will be entered after this \t now\n";
 
//type casting 
//explicitly 
tcast(static_cast<int>(5.5));//explicitly convert double value 5.5 to an int


 return 0;


}


