#ifndef UTENSIL_H_
#define UTENSIL_H_

#include<iostream>
#include<string>

#include "RestaurantItem.h"

using namespace std;


class Utensil : public RestaurantItem {
public:
	Utensil();
	Utensil(string inName, int inQuantity, bool inWashed);

	bool IsWashed() const;
	void SetWashed(bool inWash);

protected:
	virtual void SpecializedPrint() const;
	bool washed_;
};

#endif