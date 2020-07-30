
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int numeros[100], n, mayor = 0;

    cout << "Digite el numero de elementos del arreglo:  ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Digite un numero: "; // 1. Digita un numero
        cin >> numeros[i];

        //1 2 4 10 5
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }

    cout << "\n El mayor elementos del vector es:  " << mayor << endl;

    getch();
    return 0;
}