#include<iostream>
#include<fstream>

using namespace std;

int main() {
    int returnCode = 0; // Everything is okay by default
    ifstream fin;
    fin.exceptions(ios::failbit);

    fin.open("data.txt");
    if (!fin.is_open()) {
        cerr << "ERRROR:  data.txt does not exist" << endl;
        returnCode = 1;
    }

    else {
        while (!fin.eof()) {
            try {
                double x;
                fin >> x;
                cout << "Data point: " << x << endl;
            }
            catch (ios_base::failure &excpt) {
                if (!fin.eof()) {
                    fin.clear();
                    string garbage;  // Move the read head forward
                    fin >> garbage;
                    //cerr << "BAD READ: " << garbage << endl;
                }
            }
        }

        fin.close();
    }

    return returnCode;
}
