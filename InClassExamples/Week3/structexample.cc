#include<iostream>
#include<string>

struct person_t {
    std::string name;
    double hours;
    int age;
};


int main() {
    std::string done = "no";
    //std::string names[100];
    //double hours[10];
    person_t people[100];
    int count=0;

    while (done[0] != 'y' && done[0] != 'Y') {
        std::cout << "Name:  ";
        std::cin >> people[count].name;
        std::cout << "Hours: ";
        std::cin >> people[count].hours;
        std::cout << "Age:   ";
        std::cin >> people[count].age;
        count++;

        std::cout << "Finished? ";
        std::cin >> done;
    }

    for (int idx=count-1; idx>=0; idx--) {
        std::cout << people[idx].name 
                  << "  (" << people[idx].hours << "), age "
                  << people[idx].age
                  << std::endl;
    }

    return 0;
}
