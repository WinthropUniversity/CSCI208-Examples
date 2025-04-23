#include <iostream>
#include <string>

using namespace std;

bool IsPalindrome(const string &substr, unsigned int start, unsigned int end) {
	bool retVal = true;

	if (start == end) retVal = true;
	else if (substr[start] != substr[end]) retVal = false;
	else if (start < end+1) retVal = IsPalindrome(substr, start+1, end-1);
	else retVal = true;

	return retVal;
}


int main() {
	string testString;
	unsigned int n;

	cout << "Give me a string:" << endl << ">> ";
	getline(cin, testString);
	n = testString.size();

	if (n == 0)
		cout << "I guess an empty string is a palindrome?" << endl;
	else if (IsPalindrome(testString, 0, n-1))
		cout << "That *is* a palindrome!!" << endl;
	else	
		cout << "Sorry.  That's not a palindrome." << endl;

	return 0;
}