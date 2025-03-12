#include<iostream>
#include<string>

using namespace std;

class Machine {
public:
    virtual void Print() const = 0;
};

class Vehicle : public Machine {
public:

    double GetMaxSpeed() const {
        return maxSpeed_;
    }

    void SetMaxSpeed(double inSpeed) {
        maxSpeed_ = inSpeed;
    }

    virtual void Print() const {
        cout << "Vehicle:" << endl;
        cout << "  Maximum Speed: " << GetMaxSpeed() << endl;
    }

//private:   // RPW:  Try this and see what happens to the last line in the Print() of MotorVehicle
protected:
    double maxSpeed_;
};


class MotorVehicle : public Vehicle {
public:
    unsigned int GetNumberOfWheels() const{
        return numWheels_;
    }

    void SetNumberOfWheels(unsigned int inNumWheels) {
        numWheels_ = inNumWheels;
    }

    virtual void Print() const {
        Vehicle::Print();
        cout << "  Number of Wheels: " << GetNumberOfWheels() << endl;
        //cout << "  Internal member variable maxSpeed_ = " << maxSpeed_ << endl;
    }

protected:
    unsigned int numWheels_;
};


class Plane : public Vehicle {
public:
    unsigned int GetNumberOfWings() const {
        return numWings_;
    }

    void SetNumberOfWings(unsigned int inNumWings) {
        numWings_ = inNumWings;
    }

    virtual void Print() const {
        Vehicle::Print();
        cout << "  Number of Wings: " << GetNumberOfWings() << endl;
    }


protected:
    unsigned int numWings_;
};


 class Car : public MotorVehicle {
 };


void CompareAndReportMaximumSpeed(const Vehicle &x, const Vehicle &y) {
  if (x.GetMaxSpeed() > y.GetMaxSpeed()) {
    cout << "First vehicle (max speed of " << x.GetMaxSpeed() 
         << "), which is faster than the second (max speed of " << y.GetMaxSpeed() << ")" << endl;
  }

  else {
    cout << "Second vehicle (max speed of " << y.GetMaxSpeed() 
         << "), which is at least as fast as the first (max speed of " << x.GetMaxSpeed() << ")" << endl;    
  }
}


int main() {
    Vehicle myVehicle;
    MotorVehicle myMotorVehicle;
    Plane myPlane;
    Car myCar;

    myVehicle.SetMaxSpeed(10.0);
    myVehicle.Print();

    myMotorVehicle.SetMaxSpeed(150.0);
    myMotorVehicle.SetNumberOfWheels(4);
    myMotorVehicle.Print();

    myPlane.SetMaxSpeed(600.0);
    myPlane.SetNumberOfWings(2);
    myPlane.Print();

    myCar.SetMaxSpeed(100);
    myCar.SetNumberOfWheels(4);
    myCar.Print();
    
    cout << endl;
    CompareAndReportMaximumSpeed(myMotorVehicle, myVehicle);
    CompareAndReportMaximumSpeed(myPlane, myMotorVehicle);
    cout << endl;

    // Evertying is okay
    return 0;
}