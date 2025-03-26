#include <iostream>
#include "Book.h"

using namespace std;

int main() {
    Book favoriteBook("Zen and the Art of Motorcycle Maintenance", "Robert Pirsig");
    //Book favoriteBook;
    //favoriteBook.SetAuthor("Robert Pirsig");
    //favoriteBook.SetTitle("Zen and the Art of Motorcycle Maintenance");

    favoriteBook.Print("-------------");

    // Everything was okay
    cerr << "    LAST LINE OF THE PROGRAM IS NEXT" << endl;
    return 0;
}