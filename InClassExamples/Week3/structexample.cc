#include<iostream>
#include<string>

// Define a game record to be used in the array
struct WiegandsSillyGameRecord {
    std::string FirstName;
    std::string LastName;
    double FavoriteNumber;
    std::string FavoriteGame;
    double CreditHours;
};


/**
 *  Prompt the user for information about a specific game record,
 *  then return the complete record to the caller.
*/
WiegandsSillyGameRecord promptUserForGameRecord() {
    WiegandsSillyGameRecord  incomingGameRecord;

    std::cout << "First Name: ";
    std::getline(std::cin, incomingGameRecord.FirstName);

    std::cout << "Last Name: ";
    std::getline(std::cin, incomingGameRecord.LastName);

    std::cout << "Favorite Number: ";
    std::cin >> incomingGameRecord.FavoriteNumber;
    std::cin.ignore(); // Ignore the trailing newline after the cin

    std::cout << "Favorite Game: ";
    std::getline(std::cin, incomingGameRecord.FavoriteGame);

    std::cout << "Credit Hours this Term: ";
    std::cin >> incomingGameRecord.CreditHours;
    std::cin.ignore();  // Ignore the trailing newline after the cin

    return incomingGameRecord;
}



int main() {
    WiegandsSillyGameRecord gameArray[100];
    unsigned int length = 0;
    std::string isDone = "";

    // Get all the record information and put in array
    do {
        gameArray[length] = promptUserForGameRecord();
        length++;

        std::cout << "Another? (y/n) ";
        std::cin >> isDone;
        std::cin.ignore();
    } while (isDone == "y");

    std::cout << std::endl;

    // Print out the array
    for (unsigned int idx=0; idx<length; idx++){
        std::cout << "[" << idx << "] -- Record:"  << std::endl 
                  << gameArray[idx].FirstName      << std::endl
                  << gameArray[idx].LastName       << std::endl
                  << gameArray[idx].FavoriteNumber << std::endl
                  << gameArray[idx].FavoriteGame   << std::endl
                  << gameArray[idx].CreditHours    << std::endl << std::endl;
    }

    // Everything is okay!
    return 0;
}