/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: smprudho
 *
 * Created on January 24, 2018, 8:35 AM
 */

#include <cstdlib>
#include <iostream>
#include "Music.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Steven Prudhomme 010799677" << endl;
    Music song1;
    song1.setTitle("Go Flex");
    song1.setArtist("Post Malone");
    song1.setAlbum("Stoney");
    song1.setRating(5);
    song1.setTime(3.09);
    song1.printAll();
    song1.printSubset();
   
    
    Music song2(song1);
    return 0;
}

