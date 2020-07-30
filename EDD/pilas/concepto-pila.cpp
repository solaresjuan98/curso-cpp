
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
} * primero;

void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void desplegarPila();

int main()
{
    int opcion = 0;
    do
    {
        cout << endl
             << "|-------------------------------------|";
        cout << endl
             << "|              * PILA *               |";
        cout << endl
             << "|------------------|------------------|";
        cout << endl
             << "| 1. Insertar      | 4. Eliminar      |";
        cout << endl
             << "| 2. Buscar        | 5. Desplegar     |";
        cout << endl
             << "| 3. Modificar     | 6. Salir         |";
        cout << endl
             << "|------------------|------------------|";
        cout << endl
             << endl
             << " Escoja una Opcion: ";

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            insertarNodo();
            break;
        case 2:
            buscarNodo();
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            desplegarPila();
            break;
        case 6:

            break;
        default:
            break;
        }
    } while (opcion != 6);

    getch();
    return 0;
}

void insertarNodo()
{
    Nodo *nuevo = new Nodo();
    cout << "Ingresa el valor que tendra el nuevo nodo: ";
    cin >> nuevo->dato;
    nuevo->siguiente = primero;
    primero = nuevo;
    cout << "Nodo ingresado con valor: " << nuevo->dato << endl
         << endl;
}

void buscarNodo()
{
    Nodo *actual = new Nodo();
    actual = primero;
    int nodoBuscado = 0;
    bool encontrado = false;

    cout << " - Ingresa el nodo a buscar: ";
    cin >> nodoBuscado;

    if (primero != NULL)
    {
        while (actual != NULL && encontrado != 'F')
        {
            if (actual->dato == nodoBuscado)
            {
                cout << " - El nodo con el dato [" << actual->dato << "] ha sido encontrado.\n";
                encontrado = true;
            }

            actual = actual->siguiente;
        }
        cout << encontrado << endl;
        if (encontrado == 'F')
        {
            cout << endl
                 << " Nodo no encontrado. " << endl;
        }
    }
    else
    {
        cout << " La pila se encuentra vacia. " << endl;
    }
}

void desplegarPila()
{
    Nodo *actual = new Nodo();
    actual = primero;

    cout << "\n ---- MOSTRANDO LA PILA ---- \n";
    if (primero != NULL)
    {
        while (actual != NULL)
        {
            cout << endl
                 << " " << actual->dato;
            actual = actual->siguiente;
        }
    }
    else
    {
        cout << " La pila esta vacia. \n";
    }
}