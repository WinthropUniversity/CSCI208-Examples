#include<iostream>
#include<string>
#include "RestaurantItem.h"

using namespace std;

int main() {
	RestaurantItem myitem("Spoon", 100);

	myitem.PrintItem();
	
	return 0;
}