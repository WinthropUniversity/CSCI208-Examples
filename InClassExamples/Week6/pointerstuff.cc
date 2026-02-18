#include<iostream>
#include<string>

using namespace std;

int main() {
	string mystring;

	cout << "Give me a string: ";
	cin >> mystring;

	cout << "Your string was: " << mystring << endl;
	cout << "The address of that variable: " << &mystring << endl;

	string *strptr;
	cout << "The address stored by strptr (pre-alloc):   " << strptr << endl;

	strptr = new string;
	*strptr = "Hello There!";

	cout << "The address stored by strptr (post-alloc):  " << strptr << endl;
	cout << "The string at that address is: " << *strptr << endl;


	cout << "strptr is stored in memory ... where is *it*? " << &strptr << endl;
    cout << "What is stored *there*? " <<  *&strptr << endl;
	delete strptr;
	cout << "The address stored by strptr (post-dealloc):  " << strptr << endl;
	strptr = nullptr;
	cout << "The address stored by strptr (post-erase):  " << strptr << endl;
	//cout << "The string at that address is: " << *strptr << endl;  // Crash!!

	return 0;
}