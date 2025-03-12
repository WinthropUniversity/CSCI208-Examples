#include "Song.h"
#include<iostream>

using namespace std;


void DoSomethingCool(Song inSongParam) {
    cout << "=======================================" << endl;
    cout << "I am in the DoSomethingCool Function!!!" << endl;
    inSongParam.Print();
    cout << "=======================================" << endl;
}

int main() {
    Song mysong;  // Declare object of class type Song

    cout << "Before I assign the fields:" << endl;
    mysong.Print();

    mysong.SetArtist("Dire Straits");
    mysong.SetTitle("Sultans of Swing");
    cout << "After I assign the fields:" << endl;
    mysong.Print();
    
    cout << "Another song:" << endl;
    Song myothersong("Beyonce", "Care");
    myothersong.Print();

    //cout << "Print the third song, copy of the second song:" << endl;
    //Song thirdSong(myothersong);
    //thirdSong.Print();

    cout << endl << "###########" << endl;
    DoSomethingCool(mysong);

    // Evertying is okay
    return 0;
}