
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: smprudho
 *
 * Created on April 11, 2018, 8:32 AM
 */

#include <cstdlib>
#include "HashTable.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main()
{
   // Initialize random number generator
   srandom(time(NULL));
   
   int size;
   int count;
   int MAX;
   int key;
   int value;
   
   cout << "Enter Size Value" << endl;
   cin >> size;
   HashTable test(size);
   
   cout << "Enter count Value" << endl;
   cin >> count;
   
   cout << "Enter MAX Value " << endl;
   cin >> MAX;
   
   for(int i = 0; i < count; i++)
   {
       key = random() % MAX;
       value = random() % MAX;
       test.Insert(key, value);
   }
   
   test.Print();
   
   // ADD HERE
}

