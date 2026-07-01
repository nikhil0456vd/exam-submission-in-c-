#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    string designation;

public:
    void setName(string n) {
        name = n;
    }

    void setSalary(double s) {
        salary = s;
    }

    void setDesignation(string d) {
        designation = d;
    }

    string getName() {
        return name;
    }

    double getSalary() {
        return salary;
    }

    string getDesignation() {
        return designation;
    }
};

int main() {
    Employee emp;

    emp.setName("Nikhil");
    emp.setSalary(100000);
    emp.setDesignation("electronic & communication engineer");

    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: " << emp.getSalary() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;

    return 0;
}
