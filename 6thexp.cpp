#include <iostream>
#include <string>
using namespace std;

class StudentResult {
private:
    int rollNo;
    string name;
    int marks1, marks2, marks3;
    static int totalStudents;   // static data member

public:
    // Parameterized constructor
    StudentResult(int r, string n, int m1, int m2, int m3) {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
        totalStudents++;   // increment when object is created
        cout << "Student object created for: " << name << endl;
    }

    // Destructor
    ~StudentResult() {
        cout << "Student object destroyed for: " << name << endl;
    }

    // Friend class declaration
    friend class ResultAnalyzer;

    // Static function to show total students created
    static void showTotalStudents() {
        cout << "Total StudentResult objects created: " << totalStudents << endl;
    }
};

// Initialize static member
int StudentResult::totalStudents = 0;

// Friend class definition
class ResultAnalyzer {
public:
    void analyze(const StudentResult& s) {
        int total = s.marks1 + s.marks2 + s.marks3;
        double percentage = total / 3.0;

        cout << "\n--- Result Analysis ---" << endl;
        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: PASS" << endl;
        else
            cout << "Result: FAIL" << endl;
    }
};

int main() {
    StudentResult s1(101, "Vikas", 70, 65, 80);
    StudentResult s2(102, "Rohan", 30, 25, 40);

    // Show total students created
    StudentResult::showTotalStudents();

    ResultAnalyzer analyzer;
    analyzer.analyze(s1);
    analyzer.analyze(s2);

    return 0;
}

