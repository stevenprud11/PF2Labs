/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.h
 * Author: smprudho
 *
 * Created on March 14, 2018, 8:29 AM
 */

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

const int QUEUE_SIZE = 1000;

//-----------------------------------------------------------
// Define the queue class interface. 
//-----------------------------------------------------------
class Queue
{
 public:
   // constructor functions
   Queue();
   ~Queue();

   // general queue operations
   bool IsFull();
   bool IsEmpty();
   void Insert(int Number);
   void Remove(int &Number);
   int Remove();
   int GetLength();
   void Print();

 private:
   int Data[QUEUE_SIZE];
   int End;
};

