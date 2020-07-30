
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void imprimirOriginal(int **, int, int);
void imprimirTranspuesta(int **, int, int);

int **puntero_matriz, nFilas, nCol;

int main()
{
    pedirDatos();
    imprimirOriginal(puntero_matriz, nFilas, nCol);
    imprimirTranspuesta(puntero_matriz, nFilas, nCol);

    //liberar espacio en memoria
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
    cout << " Digite el numero de filas: ";
    cin >> nFilas;
    cout << " Digite el numero de columnas: ";
    cin >> nCol;

    // Reservando memoria para la matriz
    puntero_matriz = new int *[nFilas];
    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz[i] = new int[nCol];
    }

    cout << " Digite los elementos de la matriz: \n ";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << " Elemento de la matriz: [" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz + i) + j);
        }
    }
}

void imprimirOriginal(int **puntero_matriz, int nFilas, int nCol)
{
    cout << "\n ---- MOSTRANDO LA MATRIZ TRANSPUESTA ---- \n";

    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << *(*(puntero_matriz + i) + j) << "  ";
        }

        cout << "\n";
    }
}


void imprimirTranspuesta(int **puntero_matriz, int nFilas, int nCol)
{
    cout << "\n ---- MOSTRANDO LA MATRIZ TRANSPUESTA ---- \n";

    for (int i = 0; i < nCol; i++)
    {
        for (int j = 0; j < nFilas; j++)
        {
            cout << *(*(puntero_matriz + j) + i) << "  ";
        }

        cout << "\n";
    }
}
