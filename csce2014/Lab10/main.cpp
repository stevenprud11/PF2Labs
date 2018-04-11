/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: smprudho
 *
 * Created on March 28, 2018, 8:34 AM
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <array>
#include "Sorting.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int cnt=50000;
    int arr[cnt];
    int arr1[cnt];
    Sorting test;
    test.create_mostly_sorted_data(arr, cnt, 0);

    
    // Get start time
   clock_t time1=clock();

   // Some chunk of code
   test.selection_sort(arr,0,100);
   // Get end time
   clock_t time2=clock();
   double run_time = (time2-time1)/(double)CLOCKS_PER_SEC;
   cout << "Run time for selection: " << run_time << " seconds\n";
   
    
}

