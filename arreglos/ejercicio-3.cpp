
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int numeros[100], n;

    cout << "Digita el numero de elementos que tendra el arreglo: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Digite un numero: ";
        cin >> numeros[i];
    }

    //ahora vamos a mostrar los elementos con sus indices asociados
    for (int i = 0; i < n; i++)
    {

        cout << i << " --> " << numeros[i] << endl
             << endl;
    }

    //ahora vamos a mostrar los elementos en orden inverso
    cout << "EN ORDEN INVERSO: \n";
    for (int i = n - 1; i >= 0; i--)
    {

        cout << i << " --> " << numeros[i] << endl
             << endl;
    }

    getch();
    return 0;
}