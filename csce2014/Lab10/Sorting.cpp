/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sorting.cpp
 * Author: smprudho
 * 
 * Created on March 28, 2018, 8:34 AM
 */

#include "Sorting.h"
#include <fstream>
#include <iostream>

using namespace std;

Sorting::Sorting() {
}

Sorting::Sorting(const Sorting& orig) {
}

Sorting::~Sorting() {
}
void Sorting::create_random_data(int data[], int count, int range)
{
   // Put specified count of random numbers into data array
   for (int index = 0; index < count; index++)
      data[index] = rand() % range;
}

void Sorting::create_mostly_sorted_data(int data[], int count, int swaps)
{
   // Put sorted data values into array
   for (int index = 0; index < count; index++)
      data[index] = index;

   // Shuffle data by swapping random pairs of values
   for (int index = 0; index < swaps; index++)
   {
      int pos1 = rand() % count;
      int pos2 = rand() % count;
      int temp = data[pos1];
      data[pos1] = data[pos2];
      data[pos2] = temp;
   }
}

void Sorting::write_data(string name, int data[], int count)
{
   // Open output file
   ofstream dout;
   dout.open(name.c_str());
   if (dout.fail())
      cout << "Error: could not open output file\n";

   // Write the data
   dout << count;
   for (int i = 0; i < count; i++)
   {
      if (i % 20 == 0)
	 dout << endl;
      dout << data[i] << " ";
   }

   // Close the file 
   dout.close();
}
//BUBBLE SORT
void Sorting::bubble_sort(int data[], int count)
{
   int pass = 1;
   int exchange = 1;

   // Bubble largest value to the right N times
   while ((pass < count) && (exchange > 0))
   {
      // Scan unsorted part of data array
      exchange = 0;
      for (int index = 0; index < count - pass; index++)
      {
	 // Swap two data values if out of order
	 if (data[index] > data[index + 1])
	 {
	    int temp = data[index];
	    data[index] = data[index + 1];
	    data[index + 1] = temp;
	    exchange++;
	 }
      }
      pass++;
   }
}
//SELECTION SORT
void Sorting::selection_sort(int data[], int low, int high)
{
   // Put largest unsorted value at end of sorted list
   for (int last = high; last > low; last--)
   {
      // Find index of largest value in unsorted array
      int largest = low;
      for (int index = low + 1; index <= last; index++)
	 if (data[index] > data[largest])
	    largest = index;

      // Swap with last element in unsorted array
      int temp = data[last];
      data[last] = data[largest];
      data[largest] = temp;
   }
}
