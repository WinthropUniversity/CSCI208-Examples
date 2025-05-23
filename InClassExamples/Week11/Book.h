#ifndef BOOK_H_
#define BOOK_H_

#include<iostream>
#include<string>

using namespace std;

class Book {
public:
    Book();
    Book(string inTitle, string inAuthor);
    ~Book();

    string GetTitle() const;
    string GetAuthor() const;

    void SetTitle(string inTitle);
    void SetAuthor(string inAuthor);
    
    // Print is overloaded
    virtual void Print() const;
    virtual void Print(string header) const;

protected:
    string title_;
    string author_;
};

#endif