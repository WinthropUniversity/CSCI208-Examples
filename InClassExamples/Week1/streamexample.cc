#include<iostream>

int main() {
	double favoriteNumber;
	std::cout << "Hello World!" << std::endl;

	// Prompt the user for faviorite number and store
	std::cout << "What is your faviorite number: ";
	std::cin >> favoriteNumber;

	std::cout << "The number " << favoriteNumber << " seems like a great number!" << std::endl;

	return 0;
}