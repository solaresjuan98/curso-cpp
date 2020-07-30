#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int suma, n = 0;

    cout << "Ingresa un numero: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        suma = (2 * i) - 1;
    }

    cout << "La suma es: " << suma << endl;

    getch();
    return 0;
}