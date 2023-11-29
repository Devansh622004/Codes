#include <iostream>
using namespace std;

class Average
{
public:
    int x; // To store the number of elements

    void Display()
    {
        cout << "Enter the number of elements to calculate the average::\n";
        cin >> x;
    }

    // It will print the final output
    friend void Calculate(Average AR);
};

void Calculate(Average AR)
{
    float avg = 0, y;
    // avg - To store the total average value
    // y - To store the total input numbers

    cout << "\nEnter " << AR.x << " elements one by one\n";
    for (int i = 0; i < AR.x; i++)
    {
        cin >> y;
        avg += y;
    }

    avg /= AR.x;
    cout << "\nThe average of the entered input numbers is = " << avg << endl;
}

// It's the driver function
int main()
{

    // To create the instance of `Average` class
    Average AR;
    AR.Display();

    // It will print the final output
    Calculate(AR);

    return 0;
}