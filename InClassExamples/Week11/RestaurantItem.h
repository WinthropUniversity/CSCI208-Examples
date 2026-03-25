#ifndef RESTAURANTITEM_H_
#define RESTAURANTITEM_H_

#include<iostream>
#include<string>

using namespace std;

class RestaurantItem {
public:
    RestaurantItem();
	RestaurantItem(string inName, int inQuantity);

	string GetName() const;
	void SetName(string inName);

	int GetQuantity() const;
	void SetQuantity(int inQuantity);

	virtual void PrintItem() const;

protected:
	virtual void SpecializedPrint() const = 0;

    string name_;
	int quantity_;
};



#endif