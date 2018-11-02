#include <iostream>
#include <string>
using namespace std;
#ifndef UTPOD_SONG_H
#define UTPOD_SONG_H

class Song {

private:
    string Artist;
    string Title;
    int Size;


public:
    Song();
    Song(string A, string T, int s);
    string getName()const;
    string getTitle()const;
    int getMem() const;
    void setName (string A);
    void setTitle(string T);
    void setMem(int s);
    bool operator ==(Song const &rhs);
    bool operator <(Song const &rhs);
    bool operator >(Song const &rhs);
};


#endif //UTPOD_SONG_H