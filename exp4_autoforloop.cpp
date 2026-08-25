#include <iostream>
#include <vector>
using namespace std;

class Collection
{
private:
    vector<int> numbers;

public:
    // Constructor
    Collection()
    {
        numbers = {10, 20, 30, 40, 50};
    }

    // Function to display elements
    void display()
    {
        cout << "Elements of the collection are:" << endl;

        // Range-based for loop with auto
        for (auto element : numbers)
        {
            cout << element << " ";
        }

        cout << endl;
    }
};

int main()
{
    Collection obj;

    obj.display();

    return 0;
}