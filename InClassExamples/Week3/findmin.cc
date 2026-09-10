#include<iostream>

int main() {
  double numbers[100];
  int size = 0;
  bool done = false;

  while (!done) {
    double num;
    std::cin >> num;
 
    // If it wasn't a number, we're done
    if (std::cin.fail()) {
      std::cin.clear();
      done = true;
    }

    // Otherwise, store the number
    else {
      numbers[size] = num;
      size++;
    }
  }

  double min = numbers[0];
  for (int idx=0; idx<size; idx++) {
    if (numbers[idx] < min) 
      min = numbers[idx];
  }

  std::cout << "The smallest value was: " << min << std::endl;

  return 0;
}
