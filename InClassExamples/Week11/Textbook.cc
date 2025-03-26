#include <Textbook.h>

Textbook::Textbook() : Book(), cost_(0.00)
{
    cerr << "     MSG:  Textbook default constructor is being run!!" << endl;
}


Textbook::Textbook(string inTitle, string inAuthor, double inCost) : Book(inTitle, inAuthor), cost_(inCost)
{
    cerr << "    MSG:  Textbook init constructor is being run!!" << endl;
}

Textbook::~Textbook() {
    cerr << "    MSG:  Textbook destructor is being run!!" << endl;
}


double Textbook::GetCost() const {
    return cost_;
}

void Textbook::SetCost(double inCost) {
    cost_ = inCost;
}


void Textbook::Print() const {
    Book::Print();
    cout << "Cost: " << GetCost() << endl;
}

void Textbook::Print(string header) const {
    Book::Print(header);
}
