#ifndef TEXTBOOK_H_
#define TEXTBOOK_H_

#include <iostream>
#include <string>
#include <Book.h>

using namespace std;

class Textbook : public Book {
public:
    Textbook();
    Textbook(string inTitle, string inAuthor, double inCost);
    ~Textbook();

    double GetCost() const;
    void SetCost(double inCost);

    // Override the print function from book
    virtual void Print() const;
    virtual void Print(string header) const;


protected:
    double cost_;
};

#endif