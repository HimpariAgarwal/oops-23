#include <iostream>
using namespace std;

class Vehicle
{
    string name;
    string type;
    int wheels;
    int price;

public:

    void getDetails()
    {
        cout << "Enter vehicle name: ";
        cin >> name;

        cout << "Enter vehicle type: ";
        cin >> type;

        cout << "Enter number of wheels: ";
        cin >> wheels;

        cout << "Enter price: ";
        cin >> price;
    }

    void displayDetails()
    {
        cout << "\n--- Vehicle Details ---" << endl;
        cout << "Vehicle Name: " << name << endl;
        cout << "Vehicle Type: " << type << endl;
        cout << "Number of Wheels: " << wheels << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Vehicle v1, v2;

    cout << "Enter details of Vehicle 1:" << endl;
    v1.getDetails();

    cout << "\nEnter details of Vehicle 2:" << endl;
    v2.getDetails();

    cout << "\nVehicle 1:" << endl;
    v1.displayDetails();

    cout << "\nVehicle 2:" << endl;
    v2.displayDetails();

    return 0;
}