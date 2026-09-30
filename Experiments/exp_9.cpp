#include<iostream>
#include<string>
using namespace std;

class students {
private:
    int rollNo;
    string name;
    double marks;

public:
    void readData() {
        cout << "Enter rollno: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void Display() {
        cout << "Your rollno: " << rollNo;
        cout << "\nYour name is: " << name;
        cout << "\nYour marks are: " << marks << endl;
    }

    double getMarks() {
        return marks;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;


    students* s = new students[n];

    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << endl;
        s[i].readData();
    }

    cout << "\n<---- STUDENT RECORD --->" << endl;
    for (int i = 0; i < n; i++) {
        s[i].Display();
    }

    
    students* topper = &s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].getMarks() > topper->getMarks()) {
            topper = &s[i];
        }
    }

    cout << "\n--- Topper ---" << endl;
    topper->Display();

   
    delete[] s;

    return 0;
}
