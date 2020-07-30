
/*

    1 2 3       1   -> 2 3 
    4 5 6       4   -> 5 6 
    7 8 9       7   -> 8 9 

*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz, nFilas, nCol;

int main()
{
    pedirDatos();
    mostrarMatriz(puntero_matriz, nFilas, nCol);

    // Liberar la memoria que hemos utilizado en la matriz
    for (int i = 0; i < nFilas; i++)
    {
        delete[] puntero_matriz[i];
    }

    delete[] puntero_matriz;

    getch();
    return 0;
}

void pedirDatos()
{
    cout << "Digita el numero de filas: ";
    cin >> nFilas;
    cout << "Digita el numero de columnas: ";
    cin >> nCol;

    // Reservar memoria para la matriz dinamica
    puntero_matriz = new int *[nFilas]; //Reservado memoria para las filas
    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas
    }

    cout << "\nDigitando elementos de la matriz:\n ";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << "Digita un numero[" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz + i) + j); //puntero_matriz[i][j]
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol)
{
    cout << "\n\nImprimiendo matriz\n";

    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << *(*(puntero_matriz + i) + j) << "  "; //puntero_matriz[i][j]
        }

        cout << "\n";
    }
}
