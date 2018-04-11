/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stack.h
 * Author: smprudho
 *
 * Created on March 7, 2018, 8:34 AM
 */

#include <iostream>
using namespace std;

// Stack data node definition
class SNode
{
   public:
   int Number;
   SNode *Next;
};

class Stack
{
   public:
      // constructor functions
      Stack();
      ~Stack();

      // general stack operations
      void Push(int Number);
      int Pop();
      int Top();
      bool IsFull();
      bool IsEmpty();
      void Print();

   private:
      SNode *Head;
      int Length;
};


