//----------------------------------------------
// Purpose: Numbers class with basic operations
// Author:  John Gauch
//----------------------------------------------

#include "numbers.cpp"

//----------------------------------------------
int main()
{
   string filename;
   cout << "Enter filename:";
   cin >> filename;

   // Process int numbers
   Numbers <char> num;
   num.readFile(filename);
   cout << "min = " << num.findMin() << endl;
   cout << "max = " << num.findMax() << endl;
   cout << "mean = " << num.findMean() << endl;

   // Process float numbers
   Numbers <float> num2;
   num2.readFile(filename);
   cout << "min = " << num2.findMin() << endl;
   cout << "max = " << num2.findMax() << endl;
   cout << "mean = " << num2.findMean() << endl;
   
   return 0;
}
