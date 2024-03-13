#include  <iostream>
#include <string> //for std::string and std::getline

//const 
void constt()
{
  std::cout << "Enter the age: ";
  int age{};
  std::cin >> age;
  const int constAge{age};
  std::cout << "The const age: "<< constAge << '\n';
  age = 5;
  //constAge = 5; //this will cause error because it is constant 
  std::cout << "Updated age: " << age << '\n';
}

// const functional parameter 
void parameterFunc(const int x)
{
  std::cout << x << '\n';
}

// literals
int ltr()
{
  bool myNameIsAbhi {true}; // true is a boolean literal 
  double d{3.4};  // 3.4 is a double literal 
  std::cout << "helloabhii"; // helloabhii is a C-style string literal 
  return 5; //5 is an integer literal 
}

 // std::getline()
void getlinee()
{
  std::cout << "Enter your full name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name); //read full line of text into name 
                                           //
  std::cout << "Enter your favorite color: ";
  std::string color{};
  std::getline(std::cin >> std::ws, color); // read full line of texr into color
  // if  you use only std::cin then there if only takes the first word , next word will be ignored 
                                            
  std::cout << "Your name is " << name << " and your favorite color is  " << color << '\n';
}

int main()
{
 int x{4};//x is non-constant variable
 x = 5; //change value of x to 5 using assignment operator
 
 constt();


 //const function parameter 
 parameterFunc(7);
 parameterFunc(6); // 6 will be used as the initializer for x

 // STRINGS 
std::cout << "heloabhii"; // 'helloabhii'  is a C-style  string literals 
                         //
// std :: string // have to import <string> to use it 

std::string name {}; //empty string
std::string anotherName {"helloabhii"}; //initialize name with string literals "helloabhii"
anotherName = "abhii"; // change name to 'abhii'                  

getlinee();

return 0;
}


