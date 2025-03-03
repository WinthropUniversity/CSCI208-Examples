#include "Song.h"
#include<iostream>

using namespace std;

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

    cout << "Print the third song, copy of the second song:" << endl;
    Song thirdSong(myothersong);
    thirdSong.Print();
    // Evertying is okay
    return 0;
}