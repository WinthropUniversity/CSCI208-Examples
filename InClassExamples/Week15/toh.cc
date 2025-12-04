#include<iostream>
#include<string>

using namespace std;

void towers(unsigned int n, string from, string to, string aux) {
	if (n>0) {
		towers(n-1, from, aux, to);
		cout << "Move ring " << n << " from post " << from << " to post " << to << endl;
		towers(n-1, aux, to, from);
	}
}


int main() {
	unsigned int n;
	cout << "How many rings? ";
	cin >> n;

	towers(n, "A", "B", "C");
	return 0;
}