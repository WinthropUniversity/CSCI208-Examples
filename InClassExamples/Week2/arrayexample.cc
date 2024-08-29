#include<iostream>
#include<string>

int main() {
    int fibNum = 0;
    int term1 = 0;
    int term2 = 1;

    // Ask the user which fib number they want
    std::cout << "How many number from the Fibonacci sequence do you want? ";
    std::cin >> fibNum;

    // Compute the Fibonacci sequence to that count 
    for (int i=0; i<(fibNum-1); i++) {
        std::cout << term2 << ", ";
        int tmp = term2;
        term2 += term1;
        term1 = tmp;
    }

    std::cout << term2 << std::endl;

    //std::cout << "The " << fibNum << " in the Fibonacci sequence is " << term2 << std::endl;

    // Everything is okay
    return 0;
}