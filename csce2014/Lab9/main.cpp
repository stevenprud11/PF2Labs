/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: smprudho
 *
 * Created on March 14, 2018, 8:29 AM
 */

#include <cstdlib>
#include "Queue.h"
#include <cstdio>
#include <ctime>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

   int NumLines = 5;
   int NumCustomers = 25;
   int CurrentTime = 0;
   Queue *Vendor = new Queue[NumLines];

   // Add customers to different queues
   for (int Customer = 0; Customer < NumCustomers; Customer++)
   {
      // Generate customer data
      CurrentTime += 5 + random() % 20;
      int NumItems = 1 + random() % 5;
      
      // Search for shortest queue
      int ShortLine = 0;
      int ShortLength = Vendor[0].GetLength();
      int probability;
      for (int Line = 0; Line < NumLines; Line++)
      {    
         probability = rand()%100;
	 int Length = Vendor[Line].GetLength();
	 if(Vendor[Line].IsEmpty()){
             ShortLine=Line;
         }
         else if (Length < ShortLength)
	 {
	    ShortLine = Line;
	    ShortLength = Length;
	 }
         else if(probability<=20){
             ShortLine=Line;
             cout << "Customer is leaving line " << Line << endl;
             Vendor[Line].Remove();
         }
             
      }
      
      
      // Add customer to shortest line
      Vendor[ShortLine].Insert(NumItems);
      cout << "Customer joining line " << ShortLine << " with " << NumItems << " items" << endl;
      for (int Line = 0; Line < NumLines; Line++)
      {
        cout << "Line " << Line << " ";
        Vendor[Line].Print();
      }
   }
   //removing all customers
   for(int Line=0; Line<NumLines; Line++){
       if(!(Vendor[Line].IsEmpty())){
           Vendor[Line].Remove();
           Line--;
       }
           
   }
   // Print all customer lines
   cout << "Clearing all lines of Customers" << endl;
   for (int Line = 0; Line < NumLines; Line++)
   {
      cout << "Line " << Line << " ";
      Vendor[Line].Print();
   }
   cout << endl;

       return 0;
}



