#include "RestaurantItem.h"


RestaurantItem::RestaurantItem() {
    name_ = "UNKNOWN";
	quantity_ = 0;
}

RestaurantItem::RestaurantItem(string inName, int inQuantity) {
	name_ = inName;
	quantity_ = inQuantity;
}


string RestaurantItem::GetName() const {
    return name_;
}

void RestaurantItem::SetName(string inName) {
	name_ = inName;
}

int RestaurantItem::GetQuantity() const {
	return quantity_;
}

void RestaurantItem::SetQuantity(int inQuantity) {
	quantity_ = inQuantity;
}

void RestaurantItem::PrintItem() const {
	cout << GetName() << " (" << GetQuantity() << ")" << endl; 
}
