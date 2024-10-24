#include <iostream>
using namespace std;

class vehicle {
public:
    string brand;
    string model;
};

class car : public vehicle {
public:
    string price;

    car(string b, string m, string p) {
        brand = b;
        model = m;
        price = p;
    }

    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Price: " << price << endl << endl;
    }
};

class bike : public vehicle {
public:
    string cc;

    bike(string b, string m, string c) {
        brand = b;
        model = m;
        cc = c;
    }

    void display() {
        cout << "Bike Brand: " << brand << endl;
        cout << "Bike Model: " << model << endl;
        cout << "Bike CC: " << cc << endl << endl;
    }
};

class bus : public vehicle {
public:
    string route;
    string bus_number;
    int capacity;

    bus(string b, string m, string r, string bn, int cap) {
        brand = b;
        model = m;
        route = r;
        bus_number = bn;
        capacity = cap;
    }

    void display() {
        cout << "Bus Brand: " << brand << endl;
        cout << "Bus Model: " << model << endl;
        cout << "Bus Route: " << route << endl;
        cout << "Bus Number: " << bus_number << endl;
        cout << "Bus Capacity: " << capacity << endl << endl;
    }
};

int main() {
    car myCar("Vitz", "SP24", "100M");
    myCar.display();

    bike myBike("Yamaha", "MT-15", "155");
    myBike.display();

    bus myBus("Mercedes", "Sprinter", "Route 5", "B123", 30);
    myBus.display();

    return 0;
}
