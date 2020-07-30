#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n =1 , operacion, suma = 0;

    cout << "Ingresa un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        operacion = (2 * i - 1) - (2 * i);
        suma += operacion;
    }

    cout << "El resultado es:  " << suma;

    getch();
    return 0;
}