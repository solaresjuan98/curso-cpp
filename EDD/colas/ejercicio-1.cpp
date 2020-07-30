
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    char dato;
    Nodo *siguiente;
};

// Prototipos de las funciones
void menu();
void insertarCola(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, char &);

int main()
{
    menu();

    getch();
    return 0;
}

void menu()
{
    int opc;
    char dato;

    Nodo *frente = NULL;
    Nodo *fin = NULL;

    do
    {
        cout << "\t:: MENU :: \n";
        cout << " 1. Insertar un caracter en la cola " << endl;
        cout << " 2. Mostrar todos los elementos que hay en la cola " << endl;
        cout << " 3. Salir" << endl;
        cout << " Elige una opcion: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "\n Ingresa un caracter para agregar a la cola: ";
            cin >> dato;
            insertarCola(frente, fin, dato);
            break;
        case 2:
            cout << "\n Mostrando los elementos de la cola: \n";
            while (frente != NULL)
            {
                suprimirCola(frente, fin, dato);
                if (frente != NULL)
                {
                    cout << " "<<dato << endl;
                }
                else
                {
                    cout << " "<<dato << " .";
                }
            }
            cout << "\n";
            system("pause");
            break;
        case 3:

            break;
        }

        system("cls"); // limpia la pantalla 
    } while (opc != 3);
}

// Función para insertar elementos en la cola
void insertarCola(Nodo *&frente, Nodo *&fin, char n)
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
}

// Función para determinar si la cola está vacia
bool cola_vacia(Nodo *frente)
{
    return (frente == NULL) ? true : false;
}

// Función para eliminar elementos de la cola
void suprimirCola(Nodo *&frente, Nodo *&fin, char &n)
{
    n = frente->dato;
    Nodo *aux = frente;

    if (frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }
    else
    {
        frente = frente->siguiente;
    }

    delete aux;
}