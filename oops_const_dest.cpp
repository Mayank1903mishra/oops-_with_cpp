#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:

    // Default Constructor
    Student()
    {
        rollNo = 1;
        name = "Mayank";
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    Student s1;

    cout << endl;
    s1.display();

    cout << endl;

    Student s2(101, "Vikas");

    cout << endl;
    s2.display();

    cout << endl;

    Student s3 = s2;

    cout << endl;
    s3.display();

    return 0;
}