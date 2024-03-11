#include <iostream>


//user defined function 
void userD()
{
  std::cout << " This is user defined function" << '\n';
}

// function return value 

int returnFive()
{
  return 5;
  return 71;
}

//func get value from user 
int getValueFromUser()
{
  std::cout << "Enter the Number: ";
  int numOne{};
  std::cin >> numOne;
  return numOne;

}

//void return value 

//void means function doesn't return a value to the caller
void printHi()
{
  std::cout << "Hi \n";
  //this function doesn't return anything so no return statement is needed 
}

//functional parameter and arguments
int getValueFromUserAgain()
{
  std::cout << "Enter Second Number: ";
  int numThree{};
  std::cin >> numThree;
  return numThree;
}

void doPrint() // this function doesn't rely on the caller for anything  // takes no parameter 
{
  std::cout << "In doPrint()\n";
}

void printValue(int x)
{
  std::cout << x <<'\n';
}

int add(int x, int y) //function has two integer parameters. The caller will supply the value of both x and y
{
  return x + y;
}


//Question 1
//Write a function called doubleNumber() that takes one integer parameter. 
//The function should return double the value of the parameter.
int doubleNumber(int x)
{
  return x * 2;
}

//Question 2
//Write a complete program that reads an integer from the user, 
//doubles it using the doubleNumber() function you wrote in the previous quiz question, 
//and then prints the doubled value out to the console.
void ques2()
{
  std::cout << "Enter the Number Five: ";
  int numFive{};
  std::cin >> numFive;
  std::cout << "Doubled Value in Ques Two: " << doubleNumber(numFive) << '\n';
}

// Introduction to local scope
int  addTwo(int x, int y)//x and y are local variables 
{
  int z{x+y}; //z is local variable
  return  z;   
}//x,y and z are destroyed here

//main 

int main()
{ 
   std::cout << "Main function started..."<< '\n';
   userD(); //user defined function executed after above line 
   std::cout << "main function finished." << '\n';

   //return 
   std::cout << returnFive() << '\n';
   std::cout << returnFive() + 2 << '\n';
   returnFive(); // okay: value is 5, but it is ignored since main doesn't do anything with it.

   //func get value from user 
   int numTwo{getValueFromUser()};
   std::cout << "It is the value that is returned by the function (getValueFromUser): " << numTwo << std::endl;

   //void return value 
   printHi(); //printHi function is called and no value is returned 

   //functional parameter and arguments
   int numFour{getValueFromUserAgain()};
   std::cout << "Num Three: " << numFour << "\nDoubled Number Three :" << numFour * 2 << '\n';

   doPrint();
   printValue(22);
   std::cout << add(69, 2) << '\n'; //function call has two arguments, 69 and 2 // if we doesn't include std::cout it will print nothing

   //question 1 
   std::cout << "Question 1 ANS: "<<doubleNumber(22) << std::endl;

   //question 2
   ques2();

   //local variables
   std::cout << "addTwo() function: " << addTwo(6,1) << std::endl;
   return 0; //program finished executing

}

