#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"

#include<iostream>
#include<string>
#include<vector>

using namespace std;

// We don't have to change the move & print code for new objects
void MoveAndPrint(Vehicle &inVehicle ) {
    inVehicle.Move(0.5, -0.4);
    inVehicle.PrintPose();  // Different vehicles know how to print themselves
}


int main() {
    vector<Vehicle*> vehicleList;

    vehicleList.push_back(new Car(0.1, 0.2, "Green"));
    vehicleList.push_back(new Vehicle(-0.1, -0.2));
    vehicleList.push_back(new Plane(10.0, -5.0, 10024));
    vehicleList.push_back(new Car());

    // We don't have to change the loop code for new objects
    for (int idx=0; idx<5; idx++) {
        cout << endl << "STEP " << idx << endl;
        for (auto v : vehicleList) 
          MoveAndPrint(*v);
    }

    for (auto v : vehicleList) {
        delete v;
        v = nullptr;
    }

    // Everything is Okay
    return 0;
}
