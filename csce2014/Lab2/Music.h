/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Music.h
 * Author: smprudho
 *
 * Created on January 24, 2018, 8:37 AM
 */

#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
using namespace std;

class Music {
public:
    Music();
    Music(const Music& orig);
    string getTitle();
    string getArtist();
    string getAlbum();
    int getRating();
    float getTime();
    void setTitle(string t);
    void setArtist(string a);
    void setAlbum(string a);
    void setRating(int r);
    void setTime(float t);
    void printAll();
    void printSubset(); //will have artist, title, and rating
    virtual ~Music();
private:
    string title;
    string artist;
    string album;
    int rating;
    float time;
    
    

};

#endif /* MUSIC_H */

