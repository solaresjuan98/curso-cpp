#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    int x, y, pot = 1;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    for (int i = 1; i <= y; i++)
    {
        pot *= x;
    }
    cout << "La potencia es:" << pot;

    system("pause");
    return 0;
}