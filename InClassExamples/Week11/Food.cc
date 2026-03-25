#include "Food.h"



Food::Food() : RestaurantItem() {
	price_ = 1000000.0;
}

Food::Food(string inName, int inQuantity, double inPrice) : RestaurantItem(inName, inQuantity) {
	SetPrice(inPrice);
}

double Food::GetPrice() const {
	return price_;
}

void Food::SetPrice(double inPrice) {
	if (inPrice < 0) price_ = inPrice * -1;
	else price_ = inPrice;
}

void Food::PrintItem() const {
	RestaurantItem::PrintItem();
	cout << "  Costs: $" << GetPrice() << endl; 
}