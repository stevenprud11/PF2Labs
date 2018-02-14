/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Music.cpp
 * Author: smprudho
 * 
 * Created on January 24, 2018, 8:37 AM
 */

#include "Music.h"

Music::Music() {
    cout << "In constructor\n\n";
    title ="";
    artist = "";
    album = "";
    rating =0;
    time = 0;
}

Music::Music(const Music& orig) {
    cout << "In copy constructor\n";
    title = orig.title;
    artist = orig.artist;
    album = orig.album;
    rating = orig.rating;
    time = orig.time;
}

Music::~Music() {
    cout << "In destructor\n";
}

//get methods
string Music::getTitle(){
    //cout<<"Retrieving Title\n";
    return title;
}
string Music::getArtist(){
    //cout<<"Retrieving Artist\n";
    return artist;
}
string Music::getAlbum(){
    //cout<<"Retrieving Album\n";
    return album;
}
int Music::getRating(){
    //cout<<"Retrieving Rating\n";
    return rating;
}
float Music::getTime(){
    //cout<<"Retrieving Time\n";
    return time;
}

//set methods
void Music::setTitle(string t){
    //cout<<"Setting Title\n";
    title = t;
}
void Music::setArtist(string a){
    //cout<<"Setting Artist\n";
    artist = a;
}
void Music::setAlbum(string a){
    //cout<<"Setting Album\n";
    album = a;
}
void Music::setRating(int r){
    //cout<<"Setting Rating\n";
    rating = r;
}
void Music::setTime(float t){
    //cout<<"Setting Time\n";
    time = t;
}

//print methods

void Music::printAll(){
    cout<<"Title:: "<< getTitle() << "\n";
    cout<<"Artist:: "<< getArtist() << "\n";
    cout<<"Album:: "<<getAlbum() << "\n";
    cout<<"Rating:: "<<getRating() <<"\n";
    cout<<"Time:: "<<getTime() << "\n\n";
}
void Music::printSubset(){
    cout<<"Artist:: "<< getArtist() <<"\n";
    cout<<"Title:: "<< getTitle() <<"\n";
    cout<<"Rating:: "<<getRating()<<"\n\n";
}