#include <iostream>
#include <string>

#define MAX_ARRAY_SIZE 100

using namespace std;

/**
 * This function gets input from the user and populates
 * an array of strings.  It won't populate more than
 * 'maxSize', and it returns the number of items in the
 * list so the caller knows how big it is.
*/
int PopulateList(string list[], int maxSize) {
    string input = "";
    int size = 0;

    do {
        cout << "Enter a string ('quit' to end): ";
        cin >> input;
        if (input != "quit") {
            list[size] = input;
            size++;
        }  
    } while ( (input != "quit") && (size < maxSize) );

    return size;
}


/**
 *  This function takes an array of strings and prints
 *  them in a pleasing way.
*/
void PrintList(string list[], int count) {
         // init  ;  condition        ; step
    for (int idx=0; idx<count-1; idx++) {
        cout << list[idx] << ", ";
    }
    cout << "and " << list[count-1] << endl;
}

/**
 * Search through the list for a string with the same
 * value as the 'key' parameter.  Return the position
 * of that value in the list.  If it's not found, return
 * -1.
*/
int FindInList(string key, string list[], int count) {
    int position = -1;
    int idx=0;

    while ( (idx < count) && (position == -1) ) {
      if (list[idx] == key ) position = idx;
      idx++;
    }

    return position;
}


int main() {
    string input;
    string stringList[MAX_ARRAY_SIZE];
    int stringListSize = 0;

    // Populating the string list from the user
    stringListSize = PopulateList(stringList, MAX_ARRAY_SIZE);
    PrintList(stringList, stringListSize );

    cout << "Let's look for something!  Give me a string: ";
    cin >> input;
    
    // Let the user query the list for a string
    int pos = FindInList(input, stringList, stringListSize);
    if   (pos < 0) cout << "Not in the list, sorry!" << endl;
    else           cout << "It was in position " << pos << endl;

    // Everything is okay
    return 0;
}