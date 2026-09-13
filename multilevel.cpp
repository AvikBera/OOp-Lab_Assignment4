#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void getPersonData() {
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayPersonData() {
        cout << "Name          : " << name << endl;
    }
};

class Employee : public Person {
protected:
    int empID;

public:
    void getEmployeeData() {
        getPersonData();               
        cout << "Enter Employee ID: ";
        cin >> empID;
    }

    void displayEmployeeData() {
        displayPersonData();           
        cout << "Employee ID   : " << empID << endl;
    }
};

class Manager : public Employee {
protected:
    string department;

public:
    void getManagerData() {
        getEmployeeData();             
        cout << "Enter Department: ";
        cin >> department;
    }

    void displayManagerData() {
        displayEmployeeData();         
        cout << "Department    : " << department << endl;
    }
};

int main() {
    Manager m;

    cout << "----- Enter Manager Details -----" << endl;
    m.getManagerData();

    cout << "\n----- Manager Details -----" << endl;
    m.displayManagerData();

    return 0;
}