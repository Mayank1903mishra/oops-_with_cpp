#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    double salary;

public:
    // Default constructor
    Employee() {
        employeeId = 0;
        name = "Unknown";
        salary = 0.0;
    }

    // Parameterized constructor
    Employee(int id, string n, double s) {
        employeeId = id;
        name = n;
        salary = s;
    }

    // Copy constructor
    Employee(const Employee& e) {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    // Const member function to display details
    void display() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    // Salary update function
    void updateSalary(double newSalary) {
        salary = newSalary;
    }
};

int main() {
    // Create a const Employee object
    const Employee e1(101, "Vikas", 50000);

    // Display details using const object
    e1.display();

    // Create another Employee object using copy constructor
    Employee e2(e1);
    cout << "\nCopied Employee details:" << endl;
    e2.display();


    e2.updateSalary(60000);
    cout << "\nAfter salary update:" << endl;
    e2.display();



    return 0;
}
