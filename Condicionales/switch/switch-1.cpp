#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "-- Type a number betweeen 1-5:\n";
    cin>>number;

    switch (number)
    {
    case 1:
        cout << "You've typed number 1";
        break;
    case 2:
        cout << "You've typed number 2";
        break;
    case 3:
        cout << "You've typed number 3";
        break;
    case 4:
        cout << "You've typed number 4";
        break;
    case 5:
        cout << "You've typed number 5";
        break;

    default:
        cout<<"You've typed a number out of the interval";
        break;
    }

    cin.ignore();
    cin.get();

    return 0;
}