#include<iostream>
#include<vector>
#include<cstdlib>
#include<time.h>

using namespace std;

/**
 * Populate the vector with targetSize number of random numbers.
 * Each integer in the list will be a random number between 0
 * max
 *  @param numberList Vector of integers to Populate
 *  @param targetSize The target size of the vector
 *  @param max The largest values the random integers can be
 **/
void PopulateList(vector<int> &numberList, int targetSize, int max) {
  // First make sure the list is clear and seed the RNG
  numberList.clear();
  srand (time(NULL));

  // Now push targetSize number of random integers into it
  for (int idx=0; idx<targetSize; idx++)
    numberList.push_back( rand() % max);
}


/**
 * Print the vector of integers, in order
 *  @param numberList Vector of integers
 **/
void PrintList(vector<int> &numberList) {
  cout << endl << "List: ";
  for (vector<int>::iterator item=numberList.begin(); item!=numberList.end(); ++item)
    cout << (*item) << "  ";
  // RPW:  This is equivalent to the two lines above
  //for (int idx=0; idx<numberList.size(); idx++)
  //  cout << numberList[idx] << "  ";
  cout << endl << endl;
}


/**
 * Find the key in the vector using linear search.  Returns -1
 * if the item is not in the list.
 *  @param searchKey The integer to look for in the list
 *  @param numberList The list to search
 *  @return The position of the item found
 **/
int LinearSearch(int searchKey, vector<int> &numberList, int &compCount) {
  vector<int>::iterator item = numberList.begin();
  int position = -1;
  int idx = 0;

  // Initialize the compare counter
  compCount = 0;

  while ( (item != numberList.end()) && (position == -1) ) {
    if (*item == searchKey)  position = idx;
    ++compCount;
    ++item;
    ++idx;
  } // end while

  return (position);
}


/**
 * Find the key in the vector using linear search.  Returns -1
 * if the item is not in the list.
 *  @param searchKey The integer to look for in the list
 *  @param numberList The list to search
 *  @return The position of the item found
 **/
int BinarySearch(int searchKey, vector<int> &numberList, int &compCount) {
  int listSize = numberList.size();
  int left = 0;
  int right = listSize;
  int position = -1;

  // Initialize the compare counter
  compCount = 0;

  do {
    // Calculate the midpoint of the sublist
    int mid = (right + left) / 2;
    ++compCount;

    // If that's it, we won!
    if (searchKey == numberList[mid])
      position = mid;

    // If the key is less than this, search [left, mid-1]
    else if (searchKey < numberList[mid])
      right = mid - 1;

    // If the key is greater than this, search [mid+1, right]
    else if (searchKey > numberList[mid])
      left = mid + 1;

  } while ( (left <= right) && (position == -1) );

  return (position);
}



/**
 * Sort the vector of integers.
 *  @param numberList The list to sorted
 **/
void SelectionSort(vector<int> &numberList) {
  for (int idx=0; idx<numberList.size()-1; idx++) {
    // Select the smallest in unsorted part
    int smallestIdx = idx;
    for (int jdx=idx+1; jdx<numberList.size(); jdx++)
      if (numberList[jdx] < numberList[smallestIdx])
        smallestIdx = jdx;

    // Swap the smallest for the first item in unsorted list
    int temp = numberList[idx];
    numberList[idx] = numberList[smallestIdx];
    numberList[smallestIdx] = temp;
  }
}


// Perform unit tests if the unit test flag is on
#ifdef MAINselectandsort
int main() {
  vector<int> numberList;
  int listSize;

  // Create a list with a user-specified number of random elements
  cout << endl;
  cout << "How big a list do you want? ";
  cin >> listSize;
  PopulateList(numberList, listSize, 10000);
  SelectionSort(numberList);

  PrintList(numberList);

  int input = 0;
  while (input >=0) {
    cout << "Enter an item to search for (-1 to quit):  ";
    cin >> input;
    int compareCounter;

    if (input >= 0) {
      cout << "Position[Lin]: " << LinearSearch(input, numberList, compareCounter)
           << "  [" << compareCounter << " compares]" << endl;
      cout << "Position[Bin]: " << BinarySearch(input, numberList, compareCounter)
           << "  [" << compareCounter << " compares]" << endl;
      cout << endl;
    }
  }

  // Everything is A-Okay
  return 0;
}

#endif
