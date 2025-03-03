#ifndef SONG_H_
#define SONG_H_

#include<iostream>
#include<string>

using namespace std;

class Song {
public:
    Song(); // Default constructor
    Song(string inArtist, string inTitle);  // Initialization constructor
    Song(const Song &sourceSong); // Copy constructor

    string GetTitle() const;  // Accessor method
    string GetArtist() const; // Accessor method

    void SetTitle(string inTitle);   // Mutator method
    void SetArtist(string inArtist); // Mutator method

    void Print() const;  // General method

private:
    string title_;  // Member fields
    string artist_; // Member fields
};


#endif