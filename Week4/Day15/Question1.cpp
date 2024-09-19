#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    string rollNumber;

public:
    Student(const string& n, int a, const string& r)
        : name(n), age(a), rollNumber(r) {}

    void displayInfo() const {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Roll Number: " << this->rollNumber << endl;
    }
};

int main() {
    Student student1("Alice", 20, "A12345");
    student1.displayInfo();

    return 0;
}
