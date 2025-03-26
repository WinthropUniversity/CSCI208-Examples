#include <iostream>
#include <Book.h>
#include <Textbook.h>

using namespace std;

void PrintWhichAuthor(const Book &a,  const Book &b) {
    if (a.GetAuthor() > b.GetAuthor()) a.Print("-a-a-a-a-a-a-a-a");
    else                               b.Print("-b-b-b-b-b-b-b-b");
}


int main() {
    //Book favoriteBook("Zen and the Art of Motorcycle Maintenance", "Robert Pirsig");
    //Textbook favoriteBook;
    Textbook favoriteBook("Zen and the Art of Motorcycle Maintenance", "Robert Pirsig", 120.21);
    cerr << "    JUST CREATED THE BOOK RIGHT BEFORE THIS LINE!" << endl;

    //favoriteBook.SetAuthor("Robert Pirsig");
    //favoriteBook.SetTitle("Zen and the Art of Motorcycle Maintenance");
    //favoriteBook.SetCost(120.21);

    //favoriteBook.Print("-------------");


    //cout << endl << endl;

    Book otherbook("Harry Potter and the Sorcer's Stone", "J.K. Rowling");
    //otherbook.Print("==========");

    //cout << endl << endl;

    cout << "Print the book for which the author comes second: " << endl;
    PrintWhichAuthor(favoriteBook, otherbook);

    cout << endl << endl;

    // Everything was okay
    cerr << "    LAST LINE OF THE PROGRAM IS NEXT" << endl;
    return 0;
}