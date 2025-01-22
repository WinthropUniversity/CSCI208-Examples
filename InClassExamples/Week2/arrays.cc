#include<iostream>

int main() {
    int kyuRanks[5];
    int n = 5;

    // Get 15 ranks and store them in an array
    for (int idx=0; idx<n ; idx++) {
      std::cout << "What is the " << (idx+1) << "th person's rank? ";
      std::cin >> kyuRanks[idx];
    }

    int jdx=0;  // init
    while (jdx<n) {  // condit
      std::cout << "Person " << (jdx+1) << " is kyu " << kyuRanks[jdx] << std::endl;
      jdx++;
    }

    // Evertything is okay
    return 0;
}