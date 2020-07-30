#include <iostream>
using namespace std;

int main()
{

    char letter;

    cout << "Type a character: ";
    cin >> letter;

    switch (letter)
    {
    case 'a':
        break;
    case 'e':
        break;
    case 'i':
        break;
    case 'o':
        break;
    case 'u':
        cout << "It's a lowercase vocal";
        break;
    default:
        break;
    }

    cin.ignore();
    cin.get();
    return 0;
}