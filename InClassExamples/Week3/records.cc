#include<iostream>
#include<string>


struct SillyCardType {
  std::string name;
  std::string game;
  int pet;
  std::string book;
};


void PrintRecord(SillyCardType myrec) {
  std::cout << "Name:           " << myrec.name << std::endl;
  std::cout << "Favorite Game:  " << myrec.game << std::endl;
  std::cout << "Number of Pets: " << myrec.pet  << std::endl;
  std::cout << "Favorite Book:  " << myrec.book << std::endl;
  std::cout << std::endl;
}

SillyCardType PromptUserForRecInfo() {
  std::string userInput = "";
  SillyCardType returnRec;

  std::cout << "What's your Info?  In the following format:" << std::endl;
  std::cout << "Name, game, number of pets, favorite book" << std::endl;

  std::getline(std::cin, userInput, ',');
  returnRec.name = userInput;

  std::getline(std::cin, userInput, ',');
  returnRec.game = userInput;

  std::getline(std::cin, userInput, ',');
  returnRec.pet = std::stoi(userInput);

  std::getline(std::cin, userInput);
  returnRec.book = userInput;

  std::cout << std::endl;

  return returnRec; 
}


int main() {
  //double x;
  /*SillyCardType  recOne;
  SillyCardType  recTwo;

  recOne.name = "Robert";
  recOne.game = "Marvle Rivals";
  recOne.pet =  3;
  recOne.book = "Percy Jackson";

  recTwo.name = "Travis";
  recTwo.game = "Worms";
  recTwo.pet = 1;
  recTwo.book = "Diary of a Whimpy Kid";

  recOne = PromptUserForRecInfo();
  recTwo = PromptUserForRecInfo();

  PrintRecord(recOne);
  PrintRecord(recTwo);*/


  SillyCardType recordList[100];
  int size = 0;
  std::cout << "How many records? ";
  std::cin >> size;

  // Populate our array of records
  for (int idx=0; idx<size; idx++)
    recordList[idx] = PromptUserForRecInfo();

  // Print a header for the output
  std::cout << std::endl;
  std::cout << "Some Silly Information:" << std::endl;
  std::cout << "-----------------------" << std::endl;

  // Print all those items
  int fewestPetsIdx = 0;
  for (int idx=0; idx<size; idx++) {
    PrintRecord(recordList[idx]);
    if (recordList[idx].pet < recordList[fewestPetsIdx].pet) 
      fewestPetsIdx = idx;
  }

  std::cout << std::endl << recordList[fewestPetsIdx].name 
            << " has the fewest pets!" << std::endl;

  return 0;
}



