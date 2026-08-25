#include <iostream>
using namespace std;

class ParameterPassing
{
public:

    // Call by Value
    void callByValue(int x)
    {
        x = x + 10;
        cout << "Inside Call by Value: " << x << endl;
    }

    // Call by Reference
    void callByReference(int &x)
    {
        x = x + 10;
        cout << "Inside Call by Reference: " << x << endl;
    }

    // Call by Address
    void callByAddress(int *x)
    {
        *x = *x + 10;
        cout << "Inside Call by Address: " << *x << endl;
    }
};

int main()
{
    ParameterPassing obj;

    int a = 10, b = 10, c = 10;

    cout << "Before Call by Value: " << a << endl;
    obj.callByValue(a);
    cout << "After Call by Value: " << a << endl;

    cout << "\nBefore Call by Reference: " << b << endl;
    obj.callByReference(b);
    cout << "After Call by Reference: " << b << endl;

    cout << "\nBefore Call by Address: " << c << endl;
    obj.callByAddress(&c);
    cout << "After Call by Address: " << c << endl;
    return 0;
}