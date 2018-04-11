/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stack.cpp
 * Author: smprudho
 * 
 * Created on March 7, 2018, 8:34 AM
 */

#include "stack.h"

//-----------------------------------------------------------
// Constructor function.
//-----------------------------------------------------------
Stack::Stack()
{
   Head = NULL;
   Length = 0;
}

//-----------------------------------------------------------
// Destructor function.
//-----------------------------------------------------------
Stack::~Stack()
{
}

//-----------------------------------------------------------
// This checks to see if stack is full.
//-----------------------------------------------------------
bool Stack::IsFull()
{
   return (false);
}

//-----------------------------------------------------------
// This checks to see if stack is empty.
//-----------------------------------------------------------
bool Stack::IsEmpty()
{
   return (Length == 0);
}

//-----------------------------------------------------------
// This routine pushes data into the stack.
//-----------------------------------------------------------
void Stack::Push(int Number)
{
   // Check for full stack
   if (IsFull())
      return;

   // Allocate space for data
   SNode *Temp = new SNode;
   if (Temp == NULL)
      return;

   // Insert data at head of list
   Temp->Number = Number;
   Temp->Next = Head;
   Head = Temp;
   Length++;
}

//-----------------------------------------------------------
// This routine pops data from the stack.
//-----------------------------------------------------------
int Stack::Pop()
{
   // Check for empty stack
   if (IsEmpty())
      return NULL;

   // Extract information from node
   int num = Head->Number;

   // Pop item from linked list
   SNode *Temp = Head;
   Head = Head->Next;
   delete Temp;
   Length--;
   return num;
}

//-----------------------------------------------------------
// This routine returns the data from the front of the stack.
//-----------------------------------------------------------
int Stack::Top()
{
    if(IsEmpty())
        return NULL;
   // ADD HERE
    SNode *temp = Head;
    int num = Head->Number;
    return num;
}

//-----------------------------------------------------------
// This routine prints all records in the stack.
//-----------------------------------------------------------
void Stack::Print()
{
    if(IsEmpty())
        return;
   // ADD HERE'
    SNode *ptr = Head;
    cout << "Printing Stack..." << endl;
    while(ptr!=NULL)
    {
        cout << ptr->Number << endl;
        ptr=ptr->Next;
    }
    
}