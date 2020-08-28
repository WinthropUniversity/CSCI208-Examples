// Simple example of indirect access into an array.
// This program performs a kind of shell game:  It reads
// in a set of strings and priorities to populate an
// array of records.  Then it *sorts* that array without
// every moving any record at all ... through the magic
// of *indirection* ...
//
//   R. Paul Wiegand

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// Simple record structure to give us something to work with
struct GroceryItem {
  string itemName;
  int    priority;
};

/**
 * Read the grocery list from a file.  Each item has a name
 * string and an integery priority.  Return the number of items
 * read.  If there is any kind of a problem, just stop reading.
 *  @param list Array of grocery items
 *  @param index Array of index values into another array
 *  @return the number of items read from the file
 **/
int ReadGroceryListFromFile(GroceryItem list[], int index[]) {
  // Try to open the grocery file list, exit if it doesn't open
  ifstream groceryListFile;
  groceryListFile.open("groceries.txt");
  if (!groceryListFile.is_open()) {
    cout << "Error:  Could not open groceries.txt" << endl;
    return(0);
  }

  // Read the list into each record.
  // This *strongly* assumes the file contains alternating
  // strings and integers
  int numGroceries = 0;
  bool done = false;
  while (!done && !groceryListFile.eof()) {
    // Read the string, int pair
    string itemName;
    int priority;
    groceryListFile >> itemName;
    groceryListFile >> priority;

    // If there's a problem, jump over it and clear the error and stop reading
    if (groceryListFile.fail())
      done = true;

    // If there's not a problem, store the values and advance the counter.
    // Default our index list to be the natural order as we read.
    else {
      list[numGroceries].itemName = itemName;
      list[numGroceries].priority = priority;
      index[numGroceries] = numGroceries;
      numGroceries++;
    }
  } // end while

  return (numGroceries);
}


/**
 * This function prints the grocery item list values directly from the array.
 *  @param list Array of grocery items
 *  @param numGroceries The number of groceries stored in the list
 **/ 
void PrintUnorderedList(GroceryItem list[], int numGroceries) {
  // Print header 
  cout << endl;
  cout << "Here is the unordered grocery list:" << endl;
  cout << "-----------------------------------" << endl;

  // Print each item followed by its priority
  // Here we use the index value to directly lookup the grocery item
  for (int idx=0; idx<numGroceries; idx++)
    cout << "  " << list[idx].itemName << ", " << list[idx].priority << endl;
}


/**
 * This function prints the grocery item list values indirectly, based
 * on an index array
 *  @param list Array of grocery items
 *  @param index Array of index values into another array
 *  @param numGroceries The number of groceries stored in the list
 **/

void PrintIndexedList(GroceryItem list[], int index[], int numGroceries) {
  // Print header 
  cout << endl;
  cout << "Here is the INDEXED grocery list:" << endl;
  cout << "-----------------------------------" << endl;

  // Print each item followed by its priority
  // Here we use the index list to look up an index value
  // which we then use to lookup the grocery item
  for (int idx=0; idx<numGroceries; idx++)
    cout << "  " << list[ index[idx] ].itemName
	 << ", " << list[ index[idx] ].priority
	 << "\t\tindex=" << index[idx] << endl;
}


/**
 * In this function, we re-order our list not by moving grocery items around,
 * but by moving the indices to the grocery items around ...
 *  @param list Array of grocery items
 *  @param index Array of index values into another array
 *  @param numGroceries The number of groceries stored in the list
 **/
void OrderIndexListUsingInsertionSort(GroceryItem list[], int index[], int numGroceries) {
  // Go through each record, one at a time starting at the begining
  for (int idx=0; idx<numGroceries; idx++) {
    // Store the priority of the item we are looking at now
    int keyIndex = index[idx];  // Just store the *index* to the key item

    // Now let's compare the [idx-1 ... 0] items against the idx item
    // As long as the new item is better, shift it up by one in the list
    int jdx = idx - 1;
    while ( (jdx >= 0) && (list[index[jdx]].priority < list[keyIndex].priority) ) {
      index[jdx+1] = index[jdx];  // Just copy the *index* values
      jdx--;
    }

    // Make the next position the stored key record
    index[jdx+1] = keyIndex;  // Just copy the *index* value
  }

  // When this is done, the groceryList is still in its exact order since
  // we never moved any grocery items directly.  Instead, we moved the integers
  // in the index list around.
}


/**
 * This is the main of a program that reads in a grocery list with
 * priorities, then prints the original order of the list, and finally
 * prints the list sorted by priority.
 **/
int main() {
  GroceryItem groceryList[100];
  int groceryIndex[100];
  int numGroceries = 0;

  // Read the grocery list then sort it by priority
  numGroceries = ReadGroceryListFromFile(groceryList, groceryIndex);
  OrderIndexListUsingInsertionSort(groceryList, groceryIndex, numGroceries);

  // Print the direct list, then print the indexed list
  PrintUnorderedList(groceryList, numGroceries);
  PrintIndexedList(groceryList, groceryIndex, numGroceries);

  cout << endl;
  
  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
