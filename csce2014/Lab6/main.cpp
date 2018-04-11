/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: smprudho
 *
 * Created on February 21, 2018, 8:36 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int Return=1;
int Factorial(int Num, int Return)
{
    cout << "Entering Factorial, Num = " << Num << endl;
    Return*= Num;
   // Terminating condition
   if (Num <= 1){
      cout << "Leaving Factorial, Return = " << Return << endl;
      return(1);
   }

   // Recursive case
   else{
      cout << "Leaving Factorial, Return = " << Return << endl;
      return( Num * Factorial(Num-1, Return) );
   }
}

int Fibonacci(int Num)
{
    cout << "Entering Fibonacci, Num = " << Num << endl;
   // Terminating condition
   if (Num <= 2){
      cout << "Leaving Factorial, Return = " << Return << endl;
      return(1);
   }
   // Recursive case
   else{
      cout << "Leaving Factorial, Return = " << Return << endl;
      Return=( Fibonacci(Num-1) + Fibonacci(Num-2));
      return (Return);
   }
    
}    
        
float Power(float X, int p){
    //terminating case    
    if(p==0)
        return 1;
    else if(p==1)
        return X;
    else if(p%2==0){
        return(Power(X,p/2)*Power(X,p/2));
    }
    else if(p%2==1){
        return(Power(X,p/2)*Power(X,p/2)*X);
    }
    else if(p<0){
        return (1/Power(X, -p));
    }
        
}
int main(int argc, char** argv) {

    
//    int num;
//    cout << "Enter number that you wish to take the factorial of::";
//    cin >> num;
//    cout << "The factorial of " << num << " is " << Factorial(num,1) << endl;
//   int num;
//    cout << "Enter number that you wish to take the fibonacci of::";
//    cin >> num;
//    cout << "The factorial of " << num << " is " << Fibonacci(num) << endl;
    int p;
    float num;
    cout << "Enter the Base Number:: ";
    cin >> num;
    cout << "Enter the Power:: ";
    cin >> p;
    cout << "The  " << num << " to the power of " << p << " is " << Power(num,p) << endl;
    return 0;
}

