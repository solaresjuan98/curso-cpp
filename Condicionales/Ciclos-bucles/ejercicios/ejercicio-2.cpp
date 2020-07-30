#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int numero = 1, intentos = 0;

    do
    {
        cout << "Ingresa un numero ";
        cin >> numero;
        intentos++;
        if (numero < 0)
        {
            cout << "Numero de valores mayores de cero leidos: " << intentos - 1;
        }

    } while (numero > 0);

    getch();
    return 0;
}