#include<iostream>
#include<vector>
#include<string>

using namespace std;

void SelectionSort(vector<string> &wordlist, int &compcount) {
	compcount = 0;  // Init the comparison counter

	// Loop through the leading position between sorted and unsorted sublists
	for (int idx=0; idx<wordlist.size()-1; idx++) {
		int bestidx = idx;
		int progressNum = wordlist.size() / 10;
		if ((wordlist.size() % progressNum) == 0) cout << ".";

		// Go find the smallest item in the unsorted sublist
		for (int jdx=idx+1; jdx<wordlist.size(); jdx++) {
			compcount++;
			if (wordlist[jdx] < wordlist[bestidx]) bestidx = jdx;
		}

		string tmp = wordlist[idx];
		wordlist[idx] = wordlist[bestidx];
		wordlist[bestidx] = tmp;
	}
	cout << endl;
}

int main() {
	vector<string> wordlist;
	string input = "";

	cin >> input;
	while (input != "quit") {
		wordlist.push_back(input);
		cin >> input;
	}

	int compcount = 0;
	SelectionSort(wordlist, compcount);

	cout << endl << "Here's your list:" << endl;
	for (auto word: wordlist) 
		cout << word << endl;

	cout << endl << "Size: " << wordlist.size() << ",  comparisons: " << compcount << endl;

	return 0;
}