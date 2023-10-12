#include<iostream>
#include<string>

#include <StringList.h>

using namespace std;

int main() {
    StringList list1(100);
    StringList list2(200);

    cout << "First list test:" << endl;
    list1.PopulateList();

    cout << "Second list test:" << endl;
    list2.PopulateList();

    cout << endl << "Print list 1:" << endl;
    list1.PrintList();

    cout << endl << "Print list 2:" << endl;
    list2.PrintList();

    return 0;
}