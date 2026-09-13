#include <iostream>
using namespace std;

class College {
protected:
    string collegeName;

public:
    College(string name) {
        collegeName = name;
        cout << "College constructor executed." << endl;
    }
};

class Department : public College {
private:
    string departmentName;

public:
    Department(string college, string department)
        : College(college) {
        
        departmentName = department;
        cout << "Department constructor executed." << endl;
    }

    void display() {
        cout << "\nCollege Name: " << collegeName << endl;
        cout << "Department Name: " << departmentName << endl;
    }
};

int main() {
    Department d("Thapar University", "Computer Science");

    d.display();

    return 0;
}