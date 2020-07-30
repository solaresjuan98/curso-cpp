
#include <iostream>
#include <conio.h>

using namespace std;

void esPrimo(int);

int main()
{

    int numero, *pos_numero;
    int num_divisores = 0;
    cout << " - Digita un numero: ";
    cin >> numero;
    pos_numero = &numero;
    esPrimo(numero);


    getch();
    return 0;
}

void esPrimo(int numero)
{
    int num_divisores = 0;

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            //cout << i << endl;
            num_divisores++;
        }
    }

    if (num_divisores > 2)
    {
        cout << " - El numero " << numero << " no es primo" << endl;
        cout << " - Posicion " << &numero;
    }
    else{
        cout << " - El numero " << numero << " si es primo" << endl;
        cout << " - Posicion " << &numero;
    }
}