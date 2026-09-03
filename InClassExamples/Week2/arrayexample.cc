#include<iostream>
#include<string>

#define MAX_ARRAY_CAPACITY 100

void PopulateNumberList(double list[], int count);
void ReportReverseList(double list[], int count);


int main() {
  double numbers[MAX_ARRAY_CAPACITY];
  int numbersCount = 0;

  // Get number count from user
  std::cout << "How many numbers? ";
  std::cin >> numbersCount;

  PopulateNumberList(numbers, numbersCount);
  ReportReverseList(numbers, numbersCount);

  std::cout << "What is the first item? " << numbers[0] << std::endl;
  return 0;
}


// Function queries the user for numbers and stores count of them in an array
void PopulateNumberList(double list[], int count) {
  for (int idx=0; idx<count; idx++) {
    std::cout << "Give me a number: ";
    std::cin >> list[idx];
  }
}

// Function report a list in reverse order, doesn't modify list
void ReportReverseList(double list[], int count) {
   std::cout << std::endl << "The list in reverse order:" << std::endl;
   std::cout << "-------------------------" << std::endl;
   for (int idx=count-1; idx>=0; idx--) {
     std::cout << list[idx] << std::endl;
     list[0] = 44;
   }
}
