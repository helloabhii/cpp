#include <iostream>
#include <cmath> // for sqrt() function
#include <cstdlib> // for std::exit() 
using namespace std;


// If statements and blocks
void ifStat()
{
  cout << "Enter an integer: ";
  int num{};
  cin >> num;
  if (num > 7)
  {
    cout << "Number you entered is greater than 7\n";
  }
  else 
  {
   cout << "Number you entered is not greater than 7\n"; 
  }
}

// SWITCH 
void switchStat(int x)
{
switch (x)
{
  case 1:
  cout << "One";
  break;
  case 2:
  cout << "Two";
  break;
  case 3:
  cout << "Three";
  break;
  default:
  cout << "Unknown";
  break;
}
}

//goto statements 
void gotoStat() 
{
  double x{};
tryAgain: //this is a statement label 
  cout <<  "Enter a non-negative number: ";
  cin >> x;

  if (x < 0.0)
    goto tryAgain; // this is a goto statement 
  cout << "The square root of " << x << " is " << sqrt(x) << '\n';
}

// loops and while statements
void whileLoop()
{
  int count{1};
  cout << "Starting while loop\n";
  while (count <= 10)
  {
    cout << count << '\n';
    ++count;
  }
  cout << "End of while loop\n";
}


// NESTED LOOPS 
void nestedLoop()
{
int outer{1}; //outer loops between 1 and 5
cout << "Nested Loop started: \n";
while (outer <= 5)
{
  // For each iteration of the outer loop, the code in the body of the loop executes once

        // inner loops between 1 and outer
        int inner{1};
        while (inner <= outer)
        {
          cout << inner << ' ';
          ++inner;
        }
        // print a new line at the end of each row 
        cout << '\n';
        ++outer;

}
cout << "End of nested loop\n";

}

/*
 some error here
// DO WHILE LOOP 
void doWhile()
{
  //selection must be declared outside of the do-while-loop, so we can use it later 
  int selection{};

  do 
  {
    cout << "Please make a selection: \n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
  }
  while (selection > 1 || selection < 4);
  // do something with selection here
  // such as a while statement 
cout << "You selected option #" << selection << '\n';
}

*/

// FOR LOOP 
void forloop()
{
  cout << "FOR LOOP:\n";
  for (int i{1};i <= 10; ++i)
    cout << i << ' ';
  cout << '\n';

  //decrement 
  for (int j{10}; j >= 0; --j)
    cout << j << ' ';
  cout << '\n';
}

// BREAK & CONTINUE

// BREAK & CONTINUE
void breakCont()
{
  // break 
  cout << "BREAK & CONTINUE: \n";
  while(true) //infinite loop 
  {
    cout << "Enter 0 to exit or any other integer to continue: ";
    int num{};
    cin >> num;

    //exit loop if user enter 0 
    if (num == 0)
      break;
  }
  cout << "we're out!\n";

  // continue
  cout << "CONTINUE START: \n";
  for(int count{0}; count < 10; ++count)
  {
    // if the number is divisible by 4, skip the  iteration 
    if ((count % 4) == 0)
      continue; //go to next iteration 

    // If the number is not divisible by 4, keep going 
    cout << count << "\n";
    // the statement jumps to here 
  }
}

// Halts (exiting your program early)
void cleanup()
{
  std::cout << 1 << '\n';
    std::abort();

    // The following statements never execute
    std::cout << 2 << '\n';

}


int main()
{
  // if statements and blocks 
  ifStat();

  // SWITCH 
  switchStat(2);
  cout << '\n';

  //got statement 
  gotoStat();

  // while loop 
  whileLoop();

  //nested loop
  nestedLoop();

  //do while 
 // doWhile(); //some error here
 
  // FOR LOOP 
  forloop();

  //break and continue
  breakCont();

  // HALTS 
  cleanup();

  return 0;
}
