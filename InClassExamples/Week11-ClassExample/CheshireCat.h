#ifndef CHESHIRECAT_H__
#define CHESHIRECAT_H__

#include<Cat.h>

class CheshireCat : public Cat {
public:
    CheshireCat() :
      Cat(4) {
        cerr << "MSG:  ---> Creating Cheshire Cat" << endl;
    };

    ~CheshireCat() {
        cerr << "MSG:  <--- Destroying Cheshire Cat" << endl;
    };

    virtual string GetSpecies() const {return "Cheshire Cat";}
};

#endif