#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }

    Number add(Number n)
    {
        return Number(value + n.value);
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n1(15), n2(25);

    Number n3 = n1.add(n2);

    cout << "Sum: ";
    n3.display();

    return 0;
}