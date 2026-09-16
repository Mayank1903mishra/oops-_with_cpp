#include <iostream>
#include <string>
using namespace std;

class University {
private:
    string universityName;

public:
    // Constructor for University
    University(string name) {
        universityName = name;
    }

    // Nested Department class
    class Department {
    private:
        string departmentName;
        int studentCount;

    public:
        // Constructor for Department
        Department(string dName, int count) {
            departmentName = dName;
            studentCount = count;
        }

        // Function to display details using University reference
        void showDetails(const University& uni) {
            cout << "University Name: " << uni.universityName << endl;
            cout << "Department Name: " << departmentName << endl;
            cout << "Student Count: " << studentCount << endl;
        }
    };
};

int main() {
    // Create University object
    University u("ABES Engineering College");

    // Create Department object using nested class
    University::Department d("Computer Science (AI/ML)", 120);

    // Display details
    d.showDetails(u);

    return 0;
}
