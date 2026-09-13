#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;

public:
    void setVehicleDetails(string b, string m) {
        brand = b;
        model = m;
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    void setCarDetails(int doors) {
        numberOfDoors = doors;
    }

    void displayCar() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

class Bike : public Vehicle {
private:
    int engineCapacity;

public:
    void setBikeDetails(int capacity) {
        engineCapacity = capacity;
    }

    void displayBike() {
        cout << "Bike Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car c;
    c.setVehicleDetails("Toyota", "Fortuner");
    c.setCarDetails(4);

    Bike b;
    b.setVehicleDetails("Yamaha", "R15");
    b.setBikeDetails(155);

    c.displayCar();

    cout << endl;

    b.displayBike();

    return 0;
}
