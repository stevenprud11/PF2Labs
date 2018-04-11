/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: smprudho
 *
 * Created on February 28, 2018, 9:00 AM
 */

#include <iostream>
using namespace std;

//----------------------------------------------
string ParseInt(const string Input, const int pos)
{
    //cout<< Input<< endl;
   if ((pos < 0) || (pos >= Input.length()))
      return "";
   else if ((Input[pos] < '0') || (Input[pos] > '9'))
      return "";
   else
       return (Input[pos] + ParseInt(Input, pos+1));
   
      
}

//----------------------------------------------
string ParseFloat(const string Input, const int pos)
{
   // ADD HERE
    string temp = ParseInt(Input, pos);
    temp+='.';
    return (temp + ParseInt(Input, temp.length()));
}

//----------------------------------------------
int main()
{
   string input = "123.456hello";
   cout << "Input = " << input << endl;
   cout << "ParseInt = " << ParseInt(input, 0) << endl;
   cout << "ParseFloat = " << ParseFloat(input, 0) << endl;
}


