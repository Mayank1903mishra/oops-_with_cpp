#include <iostream>
using namespace std;

class Product {
private:
    int id;
    string name;
    int price;

public:

    Product(int I, string n, int P) {
        id = I;
        name = n;
        price = P;
    }

    const Product& comparePrice(const Product& other) const {
        if (price >= other.price)
            return *this;
        else
            return other;
    }


    void display() const {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << price << endl;
    }
};

int main() {

    Product p1(101, "Mobile", 11000);
    Product p2(102, "Laptop", 55000);

    // Compare prices
    const Product& expensive = p1.comparePrice(p2);

    cout << "Product with higher price:" << endl;
    expensive.display();

    return 0;
}
