#include "Song.h"


Song::Song() {
  artist_ = "NO ARTIST";
  title_  = "NO TITLE";
}


Song::Song(string inArtist, string inTitle) {
    artist_ = inArtist;
    title_ = inTitle;
}


Song::Song(const Song &sourceSong) {
    cout << " ---->  I am copyinging the following song:";
    sourceSong.Print();

    this->artist_ = sourceSong.artist_ + " (copy)";
    this->title_  = sourceSong.title_  + " (copy)";
}


string Song::GetTitle() const {
    return title_;
}

string Song::GetArtist() const {
    return artist_;
}

void Song::SetTitle(string inTitle) {
    title_ = inTitle;
}

void Song::SetArtist(string inArtist) {
    artist_ = inArtist;
}


void Song::Print() const {
    cout << "Song Title:  " << title_ << endl;
    cout << "Song Artist: " << artist_ << endl;
    cout << endl;
}