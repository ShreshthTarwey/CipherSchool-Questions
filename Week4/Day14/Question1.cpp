#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

public:
    void setBrandName(const string& brand) {
        brandName = brand;
    }

    void setModel(const string& mod) {
        model = mod;
    }

    void setEngine(const string& eng) {
        engine = eng;
    }

    void setNumberOfSeats(int seats) {
        numberOfSeats = seats;
    }

    void displayInfo() const {
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    Car myCar;
    myCar.setBrandName("Toyota");
    myCar.setModel("Corolla");
    myCar.setEngine("V6");
    myCar.setNumberOfSeats(5);
    myCar.displayInfo();
    return 0;
}
