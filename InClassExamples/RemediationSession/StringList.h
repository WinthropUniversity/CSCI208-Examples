#ifndef STRINGLIST_H_
#define STRINGLIST_H_

using namespace std;

#include<iostream>
#include<string>


class StringList {
public:
    StringList(int inCapacity);

    // Accessor Methods
    string GetString(int idx) const;
    int GetSize() const;
    int GetCapacity() const;

    // General Methods
    int PopulateList();
    void PrintList() const;
    int FindInList(string key) const;

private:
    string *list_;
    int size_;
    int capacity_;
};

#endif