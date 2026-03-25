#ifndef FOOD_H_
#define FOOD_H_

#include<iostream>
#include<string>

#include "RestaurantItem.h"

using namespace std;

class Food : public RestaurantItem {
public:
   Food();
   Food(string inName, int inQuantity, double inPrice);

   double GetPrice() const;
   void SetPrice(double inPrice);

   void PrintItem() const;

private:
    double price_;
};

#endif