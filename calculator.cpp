#include <iostream>

//function for addition
void add( ) {
      double x;
      double y;
      double result;
      
      std::cout <<"\nEnter first number: ";
      std::cin >> x;

      std::cout <<"Enter second number: ";
      std::cin >> y;

      result= x+y;
      std::cout <<"Result addition: " << x <<" + " << y <<" = " << result <<"\n";
         
}
//function for multiplication
void multiply() {
      double x;
      double y;
      double result;

      std::cout <<"\nEnter first number: ";
      std::cin >> x;

      std::cout <<"Enter second number: ";
      std::cin >> y;

      result= x*y;
      std::cout <<"Result multiplication: " << x <<" X " << y <<" = " << result <<"\n";

}
//function for division
void divide() {
      double x;
      double y;
      double result;

      std::cout <<"\nEnter first number: ";
      std::cin >> x;

      std::cout <<"Enter second number: ";
      std::cin >> y;

      result= x/y;
      std::cout  <<"Result division: " << x <<" / " << y <<" = " << result <<"\n";

}
//function for subtraction
void subtract() {
      double x;
      double y;
      double result;

      std::cout <<"\nEnter first number: ";
      std::cin >> x;

      std::cout <<"Enter second number: ";
      std::cin >> y;

      result= x-y;
      std::cout <<"Result subtraction: " << x <<" - " << y <<" = " << result <<"\n";
  
}
//calculator function
void calculator() {
     
    int choice;
    //menu for the user to navigate the calculator
    do {
     std::cout <<"\n=============================================\n";
     std::cout <<"           SIMPLE CALCULATOR C++\n";
     std::cout <<"=============================================\n";
     std::cout <<" 1 -> Init Simple Calculator\n";
     std::cout <<" 0 -> Exit Simple Calculator\n";
     std::cout <<"\nEnter your choice: ";
     std::cin  >> choice;
     std::cout <<"\n=============================================\n";
       //menu of operation types the user can choose from
       if(choice == 1) {
          char type_operation;
          std::cout <<" + -> Addition\n";
          std::cout <<" - -> Subtraction\n";
          std::cout <<" x -> Multiplication\n";
          std::cout <<" / -> Division\n";
          std::cout <<"\nEnter the desired type of operation:  ";
          std::cin  >> type_operation;
          std::cout <<"\n=============================================\n";
          //block to handle user choices and call the appropriate functions
          switch(type_operation) {
               case('+'):
                 add();
                 break;
               case('-'):
                 subtract();
                 break;
               case('x'):
                 multiply();
                 break;
               case('/'):
                 divide();
                 break;
           }
       }
  
 } while (choice != 0);
    
}
//principle function to init program
int main() {
 //calling function to simple calculator   
 calculator();
 
}
