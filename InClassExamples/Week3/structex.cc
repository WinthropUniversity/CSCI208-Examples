#include<iostream>

struct StudentData {
	std::string lastName;
	std::string firstName;
	std::string major;
	double averageGPA;
};

int main() {
	unsigned int count = 0;
	StudentData students[20];
	std::string doneStr = "No";

	do {
		std::cout << "Enter a last name: ";
		std::getline(std::cin, students[count].lastName);

		std::cout << "Enter a first name: ";
		std::getline(std::cin, students[count].firstName);

		std::cout << "Enter major: ";
		std::getline(std::cin, students[count].major);

		std::cout << "Enter an average GPA: ";
		std::cin >> students[count].averageGPA;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(128, '\n');
		}
		else {
			count++;
		}

		std::cout << "Are you done? ";
		std::cin >> doneStr;
		std::cout << std::endl;
		std::cin.ignore();
	} while ( (doneStr[0] == 'N') || (doneStr[0] == 'n') );

	std::cout << std::endl;
	for (int idx=count-1; idx>=0; idx--) {
		//std::cerr << "DBG:  idx=" << idx << "  count=" << count << std::endl;
		std::cout << "STUDENT: " << students[idx].lastName
				<< ", " << students[idx].firstName 
				<< " (" << students[idx].major << ") "
				<< " Average GPA: " << students[idx].averageGPA << std::endl;
	}

	// Everything is awesome!
	return 0;
}