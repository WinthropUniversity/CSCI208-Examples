// Simple structure and enum example for Week 2 of CSCI 208
// R. Paul Wiegand

#include<iostream>


// Make a new type called ulong that is an unsigned long integer
typedef unsigned long int ulong;


// Enum type definition for DayQuality
enum DayQuality {DQ_GOOD, DQ_MEH, DQ_BAD};


// Structure type definition for Date
struct Date {
  int day;
  int month;
  int year;
  DayQuality quality;
};  // <--- Don't forget the semicolon!


/**
 * A simple function that asks about a day of the user and returns
 * that information
 *
 * @return  Date record of how a particular day the user described
 */
Date askUserAboutDay() {
  Date currentDate;

  std::cout << "Think of an important day, then answer these questions:" << std::endl;

  std::cout << "  What was the day of the month? ";
  std::cin >> currentDate.day;

  std::cout << "  What was the numeric month (1-12)? ";
  std::cin >> currentDate.month;

  std::cout << "  What was the year? ";
  std::cin >> currentDate.year;

  std::cout << "  Was it a good day (y, n, m)? ";
  char dq;
  std::cin >> dq;

  switch (dq) {
    case 'y' : currentDate.quality = DQ_GOOD; break;
    case 'n' : currentDate.quality = DQ_BAD; break;
    default : currentDate.quality = DQ_MEH;
  }

  return(currentDate);
}


/**
 * Print the day record to the screen.
 *
 * @param myDate This is the Date variable you want to print
 */
void printDay(Date myDate) {
  std::cout << myDate.month << "/"
	          << myDate.day   << "/"
	          << myDate.year  << "  "
            << (int)myDate.quality << std::endl << std::endl;
}


// The main of the program
int main() {
  char keepGoing;
  ulong bignum = 8446744073709551000;

  std::cout << "This is a big number: " << bignum << std::endl;

  do {
    std::cout << "I'm going to ask you about somes days of your life." << std::endl;
    printDay(askUserAboutDay());

    std::cout << "Ask about more days? ";
    std::cin >> keepGoing;
    std::cout << std::endl;
  } while (keepGoing == 'y');

  std::cout << "What is 'false'?  " << (int)false << std::endl;
  std::cout << "What is 'true'?   " << (int)true << std::endl;

  int x = 9;
  if (2 == x) std::cout << "42 is true!" << std::endl;

  std::cout << "I'm done!" << std::endl;
  
  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
