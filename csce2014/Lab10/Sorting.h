/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sorting.h
 * Author: smprudho
 *
 * Created on March 28, 2018, 8:34 AM
 */

#ifndef SORTING_H
#define SORTING_H
#include <iostream>

using namespace std;
class Sorting {
public:
    Sorting();
    Sorting(const Sorting& orig);
    virtual ~Sorting();
    void create_random_data(int data[], int count, int range);
    void create_mostly_sorted_data(int data[], int count, int swaps);
    void write_data(string name, int data[], int count);
    void bubble_sort(int data[], int count);
    void selection_sort(int data[], int low, int high);
private:

};

#endif /* SORTING_H */

