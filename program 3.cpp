#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> parking;

    parking.push(101);
    parking.push(102);
    parking.push(103);
    parking.push(104);

    cout << "Cars in parking garage:\n";

    stack<int> temp = parking;

    while (!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }

    cout << "\nCar leaving: " << parking.top() << endl;
    parking.pop();

    cout << "Car leaving: " << parking.top() << endl;
    parking.pop();

    cout << "\nRemaining cars:\n";

    while (!parking.empty())
    {
        cout << parking.top() << endl;
        parking.pop();
    }

    return 0;
}
