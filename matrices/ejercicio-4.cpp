#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    int matriz[100][100];
    int filas, columnas, valor = 0;

    cout << "- Digite el numero de filas que desea tener: ";
    cin >> filas;
    cout << "- Digite el numero de columnas que desea tener: ";
    cin >> columnas;

    //generando un numero aleatorio
    srand(time(NULL));

    for (int i = 0; i < filas; i++)
    {

        for (int j = 0; j < columnas; j++)
        {
            //numeros aleatorios entre 1 y 100
            valor = 1 + rand() % (100);
            matriz[i][j] = valor;
        }
    }

    //imprimiendo la matriz
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "  " << matriz[i][j] << "  ";
        }

        cout << "\n";
    }

    system("pause");
    return 0;
}