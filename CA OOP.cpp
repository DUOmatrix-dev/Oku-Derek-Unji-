#include <iostream>
#include <string>
using namespace std;

// Vehicle base class
class Vehicle {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor with parameters
    Vehicle(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Returns vehicle information
    virtual string GetInfo() {
        return "Brand: " + brand + ", Model: " + model + ", Year: " + to_string(year);
    }
};

// Car derived from Vehicle
class Car : public Vehicle {
private:
    int numDoors;

public:
    // Constructor with door count
    Car(string b, string m, int y, int doors)
        : Vehicle(b, m, y) {
        numDoors = doors;
    }

    // Returns car information
    string GetInfo() override {
        return Vehicle::GetInfo() + ", Doors: " + to_string(numDoors);
    }
};

// Motorcycle derived from Vehicle
class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    // Constructor with sidecar option
    Motorcycle(string b, string m, int y, bool sidecar)
        : Vehicle(b, m, y) {
        hasSidecar = sidecar;
    }

    // Returns motorcycle information
    string GetInfo() override {
        string sidecarText = hasSidecar ? "Yes" : "No";
        return Vehicle::GetInfo() + ", Has Sidecar: " + sidecarText;
    }
};

// Program entry point
int main() {
    // Instantiate vehicle objects
    Car car1("Toyota", "Corolla", 2022, 4);
    Motorcycle bike1("Yamaha", "R1", 2021, false);    // Output vehicle informationfo
    cout << car1.GetInfo() << endl;
    cout << bike1.GetInfo() << endl;

    return 0;
}