
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    char dato;
    Nodo *siguiente;
};

//Prototipos de función
void agregarPila(Nodo *&, char);
void mostrarPila(Nodo *&, int &);
void mostrarMenu();

int opcion;
int main()
{
    Nodo *pila = NULL;
    int opcion;
    char dato;
    char respuesta;

    mostrarMenu();
    cin >> opcion;
    switch (opcion)
    {
    case 0:
        mostrarMenu();
        cin >> opcion;
        break;
    case 1:
        cout << " - Ingresando elemento a la pila: \n";
        do
        {
            cout << "Digita un caracter: ";
            cin >> dato;
            agregarPila(pila, dato);

            cout << "\n ¿Deseas agregar otro elemento a la pila(s/n)?: ";
            cin >> respuesta;
            cout << respuesta;


        } while ((respuesta == 'S') || (respuesta == 's'));

        break;
    case 2:
        cout << " - Mostrando elementos de la pila";

        while (pila != NULL)
        {
            if (pila != NULL)
            {
                cout << dato << " -> ";
            }
            else
            {
                cout << dato << " . ";
            }
        }

        break;
    case 3:
        cout << " - Salir...";

        break;
    }

    getch();
    return 0;
}

void mostrarMenu()
{
    cout << " ---------- MENU ---------- \n";
    cout << "      1- Insertar un caracter a la pila\n";
    cout << "      2- Mostrar todos los elementos de la pila \n";
    cout << "      3- Salir \n";
    cout << "   Elige una opcion: ";
}

void agregarPila(Nodo *&pila, char dato)
{
    Nodo *nuevo_nodo = new Nodo(); // 1. Crear el espacio en memoria para almacenar un nodo
    nuevo_nodo->dato = dato;       // 2. Cargar el valor dentro del nodo(dato)
    nuevo_nodo->siguiente = pila;  //3. Cargar el puntero pila dentro del nodo
    pila = nuevo_nodo;             // 4 asignar el nuevo nodo a pila

    cout << "\tEl Elemento " << dato << " ha sido agregado a la pila";
}
