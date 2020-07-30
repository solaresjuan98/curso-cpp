
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// Prototipo de función
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);
void busquedaBinaria(int *, int, int);

int nElementos, *elemento;
int inf, sup, mitad, dato;
bool band = false;

int main()
{
    pedirDatos();
    ordenarArreglo(elemento, nElementos);
    //mostrarArreglo(elemento, nElementos);
    cout << "Buscar un dato: ";
    cin >> dato;
    busquedaBinaria(elemento, nElementos, dato);
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

void busquedaBinaria(int *elemento, int nElementos, int dato)
{
    inf = 0;
    sup = nElementos;

    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;

        if (*(elemento + mitad) == dato)
        {
            band = true;
            break;
        }

        if (*(elemento + mitad) > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }

        if (*(elemento + mitad) < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    if (band == true)
    {
        cout << "El numero ha sido encontrado en la posicion: " << mitad << endl;
    }
    else
    {
        cout << "El numero no ha sido encontrado. ";
    }
}