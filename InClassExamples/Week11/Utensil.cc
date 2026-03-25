#include "Utensil.h"


Utensil::Utensil() : RestaurantItem() {
	washed_ = false;
}


Utensil::Utensil(string inName, int inQuantity, bool inWashed) : RestaurantItem(inName, inQuantity) {
	washed_ = inWashed;
}


bool Utensil::IsWashed() const {
	return washed_;
}

void Utensil::SetWashed(bool inWash) {
	washed_ = inWash;
}


void Utensil::SpecializedPrint() const {
	cout << "   " << (IsWashed() ? "[CLEAN!!]" : "[Needs washing]");

}

