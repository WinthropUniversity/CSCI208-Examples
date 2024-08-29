#include<iostream>
#include<string>

#define MAX_SEQUENCE_SIZE 500

// Prompt the user for the sequence count that we want to reach for our
// Fibonacci sequence.
int getFibSequenceCount() {
    int seqCount = 0;
    std::cout << "How many number from the Fibonacci sequence do you want? ";
    std::cin >> seqCount;
    return seqCount;
}

// This function takes a sequence count and populates the sequenceArray with
// all the Fibonacci numbers from the first through sequenceCount.
void populateFibonacciSequence(int sequenceArray[], int sequenceCount) {
    int term1 = 0;
    int term2 = 1;

    // Compute the Fibonacci sequence to that count 
    for (int i=0; i<(sequenceCount-1); i++) {
        sequenceArray[i] = term2;
        int tmp = term2;
        term2 += term1;
        term1 = tmp;
    }

    sequenceArray[sequenceCount-1] = term2;
}

// This function prints integers from an array with commas and spaces 
// for legability.
void printNumberArray(int array[], int size) {
    for (int idx=0; idx<size; idx++)
        std::cout << array[idx] << ", ";
    std::cout << std::endl;
}


int main() {
    int fibSequence[MAX_SEQUENCE_SIZE];

    int fibNum = getFibSequenceCount();
    populateFibonacciSequence(fibSequence, fibNum);
    printNumberArray(fibSequence, fibNum);

    // Everything is okay
    return 0;
}