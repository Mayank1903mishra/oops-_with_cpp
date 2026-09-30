#include<iostream>
#include<string>
using namespace std;

class ServiceRecord {
private:
    string serviceName;
    double serviceCost;
public:
    void readService() {
        cout << "Enter service name: ";
        cin >> serviceName;
        cout << "Enter service cost: ";
        cin >> serviceCost;
    }
    void displayService() {
        cout << "Service: " << serviceName << ", Cost: " << serviceCost << endl;
    }
    double getCost() {
        return serviceCost;
    }
};

class Vehicle {
private:
    string vehicleNo;
    string ownerName;
    int serviceCount;
    ServiceRecord* services;
public:
    Vehicle(string vNo, string oName, int count) {
        vehicleNo = vNo;
        ownerName = oName;
        serviceCount = count;
        services = new ServiceRecord[serviceCount];
    }
    void readServices() {
        for (int i = 0; i < serviceCount; i++) {
            cout << "\nEnter details for Service " << i + 1 << endl;
            services[i].readService();
        }
    }
    void displayServices() {
        double total = 0;
        cout << "\nVehicle No: " << vehicleNo << ", Owner: " << ownerName << endl;
        for (int i = 0; i < serviceCount; i++) {
            services[i].displayService();
            total += services[i].getCost();
        }
        cout << "Total Service Bill: " << total << endl;
    }
    ~Vehicle() {
        delete[] services;
    }
};

int main() {
    string vNo, oName;
    int count;
    cout << "Enter vehicle number: ";
    cin >> vNo;
    cout << "Enter owner name: ";
    cin >> oName;
    cout << "Enter number of services: ";
    cin >> count;
    Vehicle* v = new Vehicle(vNo, oName, count);
    v->readServices();
    v->displayServices();
    delete v;
    return 0;
}
