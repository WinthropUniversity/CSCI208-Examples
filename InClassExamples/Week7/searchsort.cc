#include<iostream>
#include<vector>
#include<string>

using namespace std;

void PopulateList(vector<string> &list) {
	string input;
	do {
		cout << "Enter a string to store, or 'QUIT' to be done." << endl;
		getline(cin, input);
		cout << endl;
		if (input != "QUIT") list.push_back(input);
	} while (input != "QUIT");
}


int Find(const vector<string> &list, string key) {
	int location = -1;
	int idx=0;

	while (location<0 && idx<list.size()) {
		if (key == list[idx]) location = idx;
		idx++;
	}

	return location;
}


int ArgMin(const vector<string> &list, int start) {
	int smallestIdx=start;

	for (int idx=0; idx<list.size(); idx++) {
		string smallest = list[smallestIdx];
		string current = list[idx];
		if (current < smallest) smallestIdx = idx;
	}

	return smallestIdx;
}


void Swap(vector<string> &list, int index1, int index2) {
	string temp = list[index1];
	list[index1] = list[index2];
	list[index2] = temp;
}

void PrintList(const vector<string> &list) {
	cout << "List:" << endl;
	cout << "-----" << endl;
	for (auto item: list) cout << item << endl;
	cout << endl;
}

int main() {
	vector<string> list;
	string searchString;

	PopulateList(list);

	cout << "Search for this in the list: ";
	getline(cin, searchString);
	int idx = Find(list, searchString);
	
	cout << endl;
	if (idx >= 0) cout << "String was at position " << idx << endl;
	else          cout << "That string is not in the list" << endl;

	cout << endl;
	cout << "The smallest string is: " << list[ArgMin(list, 0)] << endl;

	Swap(list, 2, 3);
	PrintList(list);
	return 0;
}