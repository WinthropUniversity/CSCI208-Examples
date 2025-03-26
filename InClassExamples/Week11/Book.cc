#include "Book.h"


Book::Book() : title_("NO TITLE"), author_("NO AUTHOR") 
{
    cerr << "     MSG:  Book default constructor is being run!!" << endl;
}

Book::Book(string inTitle, string inAuthor) : title_(inTitle), author_(inAuthor)
{
    cerr << "    MSG:  Book init constructor is being run!!" << endl;
}

Book::~Book() {
    cerr << "    MSG:  Book destructor is being run!!" << endl;
}

string Book::GetTitle() const {
    return title_;
}

string Book::GetAuthor() const {
    return author_;
}

void Book::SetTitle(string inTitle) {
    title_ = inTitle;
}

void Book::SetAuthor(string inAuthor) {
    author_ = inAuthor;
}

void Book::Print() const {
    cout << "Title: " << GetTitle() << endl;
    cout << "Author: " << GetAuthor() << endl;
}


void Book::Print(string header) const {
    cout << header << endl;
    Print();
    cout << endl;
}
