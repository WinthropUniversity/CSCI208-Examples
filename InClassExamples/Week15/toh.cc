#include<iostream>
#include<string>

using namespace std;

void toh(int n, string fromStr, string toStr, string auxStr) {
	if (n == 0) return;

	toh(n-1, fromStr, auxStr, toStr);
	cout << "Moving disk " << n << " From " << fromStr << " to " << toStr << endl;
	toh(n-1, auxStr, fromStr, toStr);
}


int  main(int argc, char *argv[]) {
	int n = 3;

	if (argc > 1) {
		string cmdarg = argv[1];
		n = stoi(cmdarg);
	}

	cout << "Running Towers of Hanoi with n=" << n << " disks" << endl;
	toh(n, "A", "B", "C");

	return 0;
}