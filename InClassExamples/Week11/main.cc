#include<iostream>
#include<string>
#include<vector>

#include "RestaurantItem.h"
#include "Utensil.h"
#include "Food.h"

using namespace std;

int main() {
	// Populate a list of restaurant items
	vector<RestaurantItem*> list;
	list.push_back(new Utensil("Spood", 100, false));
	list.push_back(new Food("Bacon", 20, 5.00));
	list.push_back(new Utensil("Forks", 99, true));
	list.push_back(new Food("Apple", 3, 0.59));

	// Print the list
	for (auto riptr : list) 
		riptr->PrintItem();

	//RestaurantItem myitem(); // This won't work because SpecializedPrint() is abstract

	// Clean up the list
	for (auto riptr : list)
		delete riptr;
	list.clear();

	return 0;
}