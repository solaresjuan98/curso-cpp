#include <iostream>
#include <conio.h>

//busqueda secuencial
//a[5] = {3, 4, 2, 1, 5}: dato = 4
using namespace std;

int main()
{

    int a[] = {3, 4, 2, 1, 5};
    int i, dato;
    char band = 'F';

    dato = 10;
    //Busqueda secuencial
    i = 0;
    while ((band == 'F') && (i < 5)) // si está en F, es xq no he encontrado el valor
    {
        if (a[i] == dato)
        {
            band = 'V';
        }

        i++;
    }

    if (band == 'F')
    {
        cout << "Dato no encontrado. \n";
    }
    else if (band == 'V')
    {
        cout << "El numero ha sido encontrado en la pos: " << i - 1;
    }

    getch();
    return 0;
}