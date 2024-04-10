#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<vector>
#include<exception>

using namespace std;

int main() {
    vector<double> list;
    ifstream myfile;
    myfile.exceptions(ios::failbit);

    // Reading file into a string vector
    myfile.open("foo.txt");
    while (!myfile.eof()) {
        try {
            double value1;
            myfile >> value1;
            list.push_back(value1);
        }
        catch (ios_base::failure &e) {
            if (!myfile.eof()) {
                myfile.clear();
                string garbage;
                myfile >> garbage;
                cerr << "ERROR:  Expected a double but read: " << garbage << endl;
            }
        }
    }
    myfile.close();

    for (int idx=list.size()-1; idx>=0; --idx)
        cout << "[" << idx << "] " << list[idx] << endl;

    return 0;
}