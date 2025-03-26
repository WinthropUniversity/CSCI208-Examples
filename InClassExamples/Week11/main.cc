#include <iostream>
#include <Book.h>
#include <Textbook.h>

using namespace std;

int main() {
    //Book favoriteBook("Zen and the Art of Motorcycle Maintenance", "Robert Pirsig");
    //Textbook favoriteBook;
    Textbook favoriteBook("Zen and the Art of Motorcycle Maintenance", "Robert Pirsig", 120.21);
    cerr << "    JUST CREATED THE BOOK RIGHT BEFORE THIS LINE!" << endl;

    //favoriteBook.SetAuthor("Robert Pirsig");
    //favoriteBook.SetTitle("Zen and the Art of Motorcycle Maintenance");
    //favoriteBook.SetCost(120.21);

    favoriteBook.Print("-------------");

    // Everything was okay
    cerr << "    LAST LINE OF THE PROGRAM IS NEXT" << endl;
    return 0;
}