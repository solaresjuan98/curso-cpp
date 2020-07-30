
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numeros[100], n, *dir_numeros, numero_menor = 99999;
    cout << "- Digita la cantidad de numeros del arreglo: ";
    cin >> n;

    dir_numeros = numeros; // posicion de memoria donde comienza el arreglo numeros[]

    cout << " - Digita un numero: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> numeros[i];
    }

    //encontrando el numero menor
    for (int i = 0; i < n; i++)
    {
        if (*dir_numeros < numero_menor)
        {
            numero_menor = *dir_numeros;
        }

        dir_numeros++;
    }

    cout << " - El  numero menor es: " << numero_menor << endl;

    getch();
    return 0;
}