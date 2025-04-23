#include<iostream>

using namespace std;

void recursivelySolveTowersOfHanoi(unsigned int n, 
								   char fromTower,
								   char toTower,
								   char auxTower) {

	if (n <= 0) return;

	recursivelySolveTowersOfHanoi(n-1, fromTower, auxTower, toTower);
	cout << "Move ring " << n << " from tower " << fromTower << " to tower " << toTower << endl;
	recursivelySolveTowersOfHanoi(n-1, auxTower, toTower, fromTower);
}

int main() {
	unsigned int n = 0;
	cout << "How many rings? ";
	cin >> n;

	recursivelySolveTowersOfHanoi(n, 'A', 'B', 'C');

	return 0;
}