#include <iostream>
#include "song.h"
#include "UtPod.h"
Song::Song() {
    Artist="";
    Title="";
    Size=0;
}




Song::Song(string A, string T, int s){
     setName(A);
     setTitle(T);
     setMem(s);
}




string Song::getName() const{
    return Artist;
}




string Song::getTitle() const{
    return Title;
}



int Song::getMem() const {
    return Size;
}



void Song::setName (string A) {
    Artist=A;
}



void Song::setTitle(string T) {
    Title=T;
}



void Song::setMem(int s) {
    Size=s;
}



bool Song::operator ==(Song const &rhs) {
    return (Artist==rhs.getName() && Title==rhs.getTitle() && Size==rhs.getMem());
}



bool Song::operator <(Song const &rhs) {
    if (this->Artist!=rhs.Artist){
        return (this->Artist < rhs.Artist);}

    if (this->Title!=rhs.Title) {
        return (this->Title < rhs.Title);}

    if (this->Size!=rhs.Size){
        return (this->Size < rhs.Size);
    }
    return false;
}




bool Song::operator >(Song const &rhs) {
    if (this->Artist!=rhs.Artist){
        return (this->Artist > rhs.Artist);}

    if (this->Title!=rhs.Title) {
        return (this->Title > rhs.Title);}

    if (this->Size!=rhs.Size){
        return (this->Size > rhs.Size);
    }
    return false;
}