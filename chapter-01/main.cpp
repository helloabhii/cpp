#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
  

    // this is called single line comment
    /*
    this is called 
    multi line 
    comment
     */
        
    int z ; //define the variable named as x, of type int 
    double width; // define a var name width, of type double 
    
    //defining multiple variable
    int a;
    int b;

    //or 
    int d, f; //both are same 
    

    //int a, double b; //wrong comiler error
    int s; double t; //correct but not recommended



    //correct and recommend 
    int j;
    double k;



    //define and assign value to the variable 
    int x; //define a variable 
    x = 71; // Assign value 71 into var x 
            
    //

    //use assignment twice
    int breadth;
    breadth = 5;
    std::cout << breadth; //prints 5
    std::cout << "\n";
    breadth = 71;
    std::cout << breadth;
    std::cout << "\n";
    

    //

    //initialization 
    int widthh {5}; // define variable widthh and initialize with initial value 5
    // var widthh has now value 5
    int bb = 5; //initialize value after equal sign (copy initialization)
    int c(6); // initial value in parenthesis (direct initialization)
              
    //

    //List initialization methods (c++ 11) (preffered)
    int dd {7}; //initial value in brace (direct list initialization)
    int ee = {8}; // initial value  in braces (direct list initialization)
    int ff {}; // initializer is empty brace (value initialization)
 
    //advance
    //int xx(); // forward declaration of function xx
    //int xx(0); //definition of variable  xx with  initliazer 0

    std::cout << ff;
    std::cout << ee;
    std::cout << "\n"; 

    //initialze multiple variable 
    int axb, cxd;
    int ab = 5, cd = 6; //copy initliaztion
    int ef(7), gh(8); //direct initliaztion 
    int re {9}, df {10}; //direct brace initialization
    int gg = {9}, hdd = {100}; // copy brace initializtion 
    int ll {}, jj {}; // value initliaztion
      
    //int a, b  = 5;// (wrong(a is not initialize))
    //int a = 7, b = 71; //correct
     
    /*
    int xyz  {5};
    return 0; //var defined but not used caused error 

    */ 
    int xyz {71};
    std::cout << xyz;


//[[maybe_unused]] attribute C++17

 [[maybe_unused]] double pi {3.14};
 [[maybe_unused]] double gravity {9.8};
 [[maybe_unused]] double phi {1.61};
  return 0;
}
