

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// Prototipo de función
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

int nElementos, *elemento;

int main()
{
    pedirDatos();
    ordenarArreglo(elemento, nElementos);
    mostrarArreglo(elemento, nElementos);
    delete[] elemento; //liberar la memoria utilizada para el arreglo dinamico

    getch();
    return 0;
}

void pedirDatos()
{
    cout << " Digite el numero de elementos del arreglos: ";
    cin >> nElementos;

    elemento = new int[nElementos];

    for (int i = 0; i < nElementos; i++)
    {
        cout << "Digita un numero [" << i << "]: ";
        cin >> *(elemento + i); // elemento[i]
    }
}

void ordenarArreglo(int *elemento, int nElementos)
{
    int aux;

    // Ordenar el arreglo con el metodo burbuja
    for (int i = 0; i < nElementos; i++)
    {
        for (int j = 0; j < nElementos - 1; j++)
        {
            if (*(elemento + j) > *(elemento + j + 1)) // elemento[j] > elemento[j+1]
            {
                aux = *(elemento + j);
                *(elemento + j) = *(elemento + j + 1);
                *(elemento + j + 1) = aux;
            }
        }
    }
}

void mostrarArreglo(int *elemento, int nElementos)
{
    cout<< "\n\nMostrando arreglo ordenado: ";

    for(int i = 0; i < nElementos;i++)
    {
        cout<<*(elemento+i)<<endl;
    }
}