/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: smprudho
 *
 * Created on March 7, 2018, 8:34 AM
 */

#include <cstdlib>
#include "stack.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Stack stack;
    cout << "Push 3"  << endl;
    stack.Push(3);
    cout << "Top is " << stack.Top() << endl;
    cout << "Push 1" << endl;
    stack.Push(1);
    cout << "Push 4" << endl;
    stack.Push(4);
    cout << "Push 1" << endl;
    stack.Push(1);
    cout << "Top is " << stack.Top() << endl;
    cout << "Push 5" << endl;
    stack.Push(5);
    cout << "Push 9" << endl;
    stack.Push(9);
    cout << "Top is " << stack.Top() << endl << endl;
    
    stack.Print();

    cout << "\nPop ";
    cout << stack.Pop() << endl;
    cout << "Pop ";
    cout << stack.Pop() << endl;
    cout << "Pop ";
    cout << stack.Pop() << endl;
    cout << "Pop ";
    cout << stack.Pop() << endl;
    cout << "Pop ";
    cout << stack.Pop() << endl;
    cout << "Pop ";
    cout << stack.Pop() << endl;
    
}

