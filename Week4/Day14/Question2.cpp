#include <iostream>

using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    Rectangle(const Rectangle& other) {
        width = other.width;
        height = other.height;
    }

    void displayInfo() const {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {
    Rectangle rect1(10.5, 5.5);
    Rectangle rect2(rect1);

    cout << "Original Rectangle:" << endl;
    rect1.displayInfo();

    cout << "Copied Rectangle:" << endl;
    rect2.displayInfo();

    return 0;
}
