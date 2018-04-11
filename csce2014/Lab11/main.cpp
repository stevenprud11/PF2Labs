/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: smprudho
 *
 * Created on April 4, 2018, 8:36 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
int compare_counter;
int move_counter;

//------------------------------------------------------------------
// Initialize data array with random values
//------------------------------------------------------------------
void create_random_data(int data[], int count, int range)
{
   // Put specified count of random numbers into data array
   for (int index = 0; index < count; index++)
      data[index] = rand() % range;
}

//------------------------------------------------------------------
// Initialize data array with mostly sorted values 
//------------------------------------------------------------------
void create_mostly_sorted_data(int data[], int count, int swaps)
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

//----------------------------------------------------------------
// Insertion sort algorithm
//----------------------------------------------------------------
void insertion_sort(int data[], int low, int high)
{
   // Insert each element of unsorted list into sorted list
   for (int unsorted = low+1; unsorted <= high; unsorted++)
   {
      // Select unsorted value to be inserted
      int value = data[unsorted];
      int posn = unsorted;
      
      // Make room for new data value
      while ((posn > 0) && (data[posn - 1] > value))
      {
         compare_counter++;
	 data[posn] = data[posn - 1];
	 posn--;
      }

      // Put new value into array
      data[posn] = value;
      move_counter++;
   }
}

//----------------------------------------------------------------
// Partition function used by Quicksort.
//----------------------------------------------------------------
void partition(int data[], int low, int high, int &mid)
{
   // Select pivot value
   int pivot = data[high];
   int left = low;
   int right = high;

   // Partition array into two parts
   while (left < right)
   {
      // Scan left to right
      while ((left < right) && (data[left] < pivot)){
          compare_counter++;
         left++;
      }
      // Scan right to left
      while ((left < right) && (data[right] >= pivot)) {
          compare_counter++;
          right--;
      }
      // Swap data values
      move_counter++;
      int temp = data[left];
      data[left] = data[right];
      data[right] = temp;
   }

   // Swap pivot to mid
   mid = left;
   data[high] = data[mid];
   data[mid] = pivot;
}

//----------------------------------------------------------------
// Recursive Quicksort algorithm using basic partition function.
//----------------------------------------------------------------
void quick_sort(int data[], int low, int high)
{
    if(high<=50){
        cout << "executing insertion sort" << endl;
        insertion_sort(data,low,high);
    }
        
   // Check terminating condition
   else{
   if (low < high)
   {
      // Partition data into two parts
      int mid = 0;
      partition(data, low, high, mid);

      // Recursive calls to sort array
      quick_sort(data, low, mid - 1);
      quick_sort(data, mid + 1, high);
   }
   }
}

//----------------------------------------------------------------
// Mergesort using secondary storage for data merging.
//----------------------------------------------------------------
void merge_sort(int data[], int low, int high)
{
    if(high<=50){
        cout << "executing insertion sort" << endl;
        return insertion_sort(data,low,high);
    } 
   // Check terminating condition
   else{
   int range = high - low + 1;
   if (range > 1)
   {
      // Divide the array and sort both halves
      int mid = (low + high) / 2;
      merge_sort(data, low, mid);
      merge_sort(data, mid + 1, high);

      // Create temporary array for merged data
      int *copy = new int[range];

      // Initialize array indices
      int index1 = low;
      int index2 = mid + 1;
      int index = 0;

      // Merge smallest data elements into copy array
      while (index1 <= mid && index2 <= high)
      {
         compare_counter++;
         move_counter++;
	 if (data[index1] < data[index2])
             copy[index++] = data[index1++];
 
	 else
	    copy[index++] = data[index2++];
      }

      // Copy any remaining entries from the first half
      while (index1 <= mid){
          move_counter++;
          compare_counter++;
          copy[index++] = data[index1++];
      }
	 

      // Copy any remaining entries from the second half
      while (index2 <= high){
          move_counter++;
          compare_counter++;
          copy[index++] = data[index2++];
      }

      // Copy data back from the temporary array
      for (index = 0; index < range; index++){
          move_counter++;
          //compare_counter++;
          data[low + index] = copy[index];

      }
	 
      delete []copy;
   }
}
}
/*
 * 
 */
int main(int argc, char** argv) {

    int length = 10;
    int arr[length];
    create_random_data(arr,length,100);
    
    merge_sort(arr,0,length);
    for(int i=0; i<length; i++)
        cout << arr[i] << endl;
    
    cout << "Compare Counter:: " << compare_counter << endl;
    cout << "Move Counter:: " << move_counter << endl;
    
    
    return 0;
}

