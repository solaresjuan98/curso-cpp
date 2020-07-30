
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

//Prototipo de función
void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main()
{
    Nodo *pila = NULL;
    int dato;
    char rpt;

    do
    {
        cout << "Digite un numero: ";
        cin >> dato;
        agregarPila(pila, dato);
        
        cout << "\nDeseas agregar otro elemento a PILA(s/n): ";
        cin >> rpt;
    } while ((rpt == 's') || (rpt == 'S'));

    cout << "\nSacando todos los elementos de PILA:  ";
    while (pila != NULL) // mientras no sea el final de la pila
    {
        sacarPila(pila, dato);
        if (pila != NULL)
        {
            cout << dato << " , ";
        }else{
            cout << dato << " . ";
        }
    }

    getch();
    return 0;
}

void agregarPila(Nodo *&pila, int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout << "\tEl elemento " << n << " ha sido agregado a PILA correctamente";
}

void sacarPila(Nodo *&pila, int &n)
{
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
