#include "List.h"
#include<iostream>


int main() {
    List list;

    list.InsertAtFront("Paul");
    list.InsertAtFront("Preston");
    list.InsertAtFront("Maria");
    list.InsertAtFront("Jadon");

    list.PrintList();

    // Everything is okay
    return 0;
}