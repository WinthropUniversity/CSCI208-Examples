#include<iostream>
#include<ctime> // Gives you the time functions and structures


// Create a linear shuffling of the list.
void shuffleList(int numberList[], int length) {
    for (int idx=0; idx<length-1; idx++) {
      int lengthOfSublist = length - idx - 1;              // The length of the list *after* idx
      int newPosition = rand()%lengthOfSublist + idx + 1;  // Draw a new random position between (idx+1) and (len-1)

      // Swap those two values
      int tempVal = numberList[idx];
      numberList[idx] = numberList[newPosition];
      numberList[newPosition] = tempVal;
    }
}


int main() {
    int length = 10;
    int myList[length];

    // The pseudo random number generator needs a "seed" to start the sequence
    // so we'll give it the current time as a seed so it's arbitrary and changes.
    srand(time(NULL));
    
    //Populate the list with the same values as the index.  That is, position
    // 1 holds 1, position 10 holds 10, etc.
    for (int idx=0; idx<length; idx++) 
        myList[idx] = idx;  

    // Shuffle the list!    
    shuffleList(myList, length);

    // Print the list so we can see the shuffle!
    for (int idx=0; idx<length; idx++) 
        std::cout << myList[idx] << "  ";
    std::cout << std::endl;

    return 0; // Everything is okay
}

