#include<iostream>

using namespace std;

int main() {
    string textInput;
    string mylist[100];
    int count=0;

    do {
        cout << "Enter some text (quit to end): ";
        getline(cin, textInput);
        if (textInput != "quit") {
            mylist[count] = textInput;
            count++;
        }
    } while (textInput != "quit");

    cout << endl << "These were your strings:" << endl;
    for (int idx=0; idx<count; idx++) {
        cout << "[" << idx << "] " << mylist[idx] << endl;
    }
    return 0;
}