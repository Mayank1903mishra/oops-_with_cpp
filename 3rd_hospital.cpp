#include <iostream>
#include <string>
using namespace std;

class Patient {
    int id;
    string name;
    static int activeP;  

public:
   
    Patient(int i, string n) {
        id = i;
        name = n;
        activeP++;   
        cout << "Patient admitted: " << name << endl;
    }

    ~Patient() {
        activeP--;  
        cout << "Patient discharged: " << name << endl;
    }

    void display() const {
        cout << "Patient ID: " << id << ", Name: " << name << endl;
    }

  
    static void showActivePatients() {
        cout << "Currently Active Patients: " << activeP << endl;
    }
};


int Patient::activeP = 0;

int main() {
    Patient p1(101, "Vivek");
    Patient::showActivePatients();

    {
        Patient p2(102, "Vikas");
        Patient p3(103, "Rohan");
        Patient::showActivePatients();
      
    }

    Patient::showActivePatients();

    return 0;
}
