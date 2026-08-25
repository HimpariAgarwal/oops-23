#include <iostream>
using namespace std;

class Arithmetic
{
public:
    // 1. Inline function
    inline int square(int n)
    {
        return n * n;
    }

    // 2. Function with default argument
    int add(int a, int b = 10)
    {
        return a + b;
    }

    // 3. Function overloading
    int multiply(int a, int b)
    {
        return a * b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }
};

int main()
{
    Arithmetic obj;

    // Inline function
    cout << "Square of 5 = " << obj.square(5) << endl;

    // Default argument
    cout << "Addition of 20 and 10 = " << obj.add(20) << endl;
    cout << "Addition of 20 and 30 = " << obj.add(20, 30) << endl;

    // Function overloading
    cout << "Multiplication of integers = " 
         << obj.multiply(5, 4) << endl;

    cout << "Multiplication of decimal numbers = "
         << obj.multiply(2.5, 4.0) << endl;

 
         << obj.multiply(2.5, 4.0) << endl;

    return 0;
}