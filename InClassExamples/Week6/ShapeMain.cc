#include<iostream>
#include<string>

#include "ShapeNode.h"
#include "ShapeList.h"

int main() {
    ShapeList list;
    string shapeName = "";

    while (shapeName != "quit") {
        cout << "Type a shape name, or 'quit' to end: ";
        cin >> shapeName;
        if (shapeName != "quit") list.InsertShape(shapeName);
    }

    list.PrintList();
    
    return 0;
}