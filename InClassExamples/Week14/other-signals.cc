#include <iostream>
#include <string>
#include <vector>

using namespace std;

int FindValue(const vector<int> &searchlist, int valueToFind) {
    int foundIndex = -1; // Implicit error signal
    int idx = 0;

    while ( (idx < searchlist.size()) && (foundIndex < 0) ) {
        if (searchlist[idx] == valueToFind) foundIndex = idx;
        idx++;
    }

    // RPW:  One way to "signal" an error
    string errorMessage = "Could not find value";
    throw errorMessage;

    // RPW:  Another way is to just return a -1 to signal there is an error
    return foundIndex;
}


int main(int argc, char *argv[]) {
    vector<int> list;

    list.push_back(10);
    list.push_back(2);
    list.push_back(28);
    list.push_back(11);
    list.push_back(42);
    list.push_back(23);

    if (argc <= 1) {
        cerr << "Error:  I need a command line arg! (integer)" << endl;
    }
    else {        
        int x = atoi(argv[1]);

        // One way to deal with an error ...
        try {
          int idx = FindValue(list, x);
          cout << "Value " << x << " at index " << idx << endl;
        }
        catch (string &e) {
            cerr << "Could not find " << x << " in list!" << endl;
        }

        // Another way to deal with an error
        // Check if there was an error finding the value
        //int idx = FindValue(list, x);
        //if (idx < 0) cerr << "Could not find " << x << " in list!" << endl;
        //else         cout << "Value " << x << " at index " << idx << endl;
    }

    return 0;
}