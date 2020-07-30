#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

// Prototipos de función
void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo*&, int &);

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;

    cout << " Digita un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);

    cout << " Digita un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);

    cout << " Digita un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);


    // Eliminiar elementos de la cola
    cout << "\n Quitando los nodos de la cola: \n";
    while (frente != NULL)
    {
        suprimirCola(frente, fin, dato);

        if(frente != NULL){
            cout << dato << endl;
        }else{
            cout << dato << " ."<<endl;
        }
    }
    

    getch();
    return 0;
}

// Función para insertar elementos en una cola
void insertarCola(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (cola_vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;

    cout << " \tElemento " << n << " insertado a cola correctamente.\n";
}

// Función para determinar si la cola está vacía o no
bool cola_vacia(Nodo *frente)
{
    return (frente == NULL) ? true : false;
}

// Función para eliminar nodo de la cola 
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n)
{
    n = frente->dato;
    Nodo *aux = new Nodo();

    if(frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }else
    {
        frente = frente -> siguiente;
    }


    delete aux;
}