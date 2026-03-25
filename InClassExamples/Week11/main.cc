#include<iostream>
#include<string>

#include "RestaurantItem.h"
#include "Utensil.h"

using namespace std;

int main() {
	Utensil myitem("Spoon", 100, false);

	myitem.PrintItem();

	return 0;
}