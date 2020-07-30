// Lista circular doble
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
    Nodo *atras;
} * primero, *ultimo;

// Prototipos de funcíon
void mostrarMenu();
void insertarNodo();
void buscarNodo();
void desplegarListaPU();
void desplegarListaUP();

int main()
{

    mostrarMenu();
    system("pause");
    return 0;
}

void mostrarMenu()
{
    int opcion_menu = 0;
    do
    {
        cout << "\n|-------------------------------------|";
        cout << "\n|      :: LISTA CIRCULAR DOBLE ::     |";
        cout << "\n|------------------|------------------|";
        cout << "\n| 1. Insertar      | 5. Desplegar P.U |";
        cout << "\n| 2. Buscar        | 6. Desplegar U.P |";
        cout << "\n| 3. Modificar     | 7. Salir         |";
        cout << "\n| 4. Eliminar      |                  |";
        cout << "\n|------------------|------------------|";
        cout << "\n\n Escoja una Opcion: ";
        cin >> opcion_menu;
        switch (opcion_menu)
        {
        case 1:
            cout << "\n\n INSERTA NODO EN LA LISTA \n\n";
            insertarNodo();
            break;
        case 2:
            cout << "\n\n BUSCAR UN NODO EN LA LISTA \n\n";
            buscarNodo();
            system("pause");
            break;
        case 3:
            cout << "\n\n MODIFICAR UN NODO DE LA LISTA \n\n";
            break;
        case 4:
            cout << "\n\n ELIMINAR UN NODO DE LA LISTA \n\n";
            break;
        case 5:
            cout << "\n\n DESPLEGAR LISTA DE NODOS DEL PRIMERO AL UTLIMO\n\n";
            desplegarListaPU();
            system("pause");
            break;
        case 6:
            cout << "\n\n DESPLEGAR LISTA DE NODOS DEL UTLIMO AL PRIMERO\n\n";
            desplegarListaUP();
            system("pause");
            break;
        case 7:
            cout << "\n\n Programa finalizado...";
            break;
        default:
            cout << "\n\n Opcion No Valida \n\n";
        }

        system("cls");
    } while (opcion_menu != 7);
}

/*
    primero = 67       ultimo = 12      nuevo = 12                     63, 23, 8, 12    actual = 12     67, 23, 8, 12

    Lista circular doble =         (12) <- 67 ->  <- 23 -> <- 8 -> <- 12 -> (67)

*/

void insertarNodo()
{
    Nodo *nuevo = new Nodo();
    cout << " Ingresa el dato que contendra el nuevo nodo: ";
    cin >> nuevo->dato;

    if (primero == NULL)
    {
        primero = nuevo;
        ultimo = nuevo;
        primero->siguiente = primero;
        primero->atras = ultimo;
    }
    else
    {
        ultimo->siguiente = nuevo;
        nuevo->atras = ultimo;
        nuevo->siguiente = primero;
        ultimo = nuevo;
        primero->atras = ultimo;
    }

    cout << " Nodo ingresado.\n\n";
}

void desplegarListaPU()
{
    Nodo *actual = new Nodo();
    actual = primero;

    if (primero != NULL)
    {
        do
        {

            cout << "\n"
                 << actual->dato;
            actual = actual->siguiente;

        } while (actual != primero);
    }
    else
    {
        cout << " \n La lista se encuentra vacia\n\n";
    }
    
}

void desplegarListaUP()
{
    Nodo *actual = new Nodo();
    actual = ultimo;

    if (primero != NULL)
    {
        do
        {

            cout << "\n"
                 << actual->dato;
            actual = actual->atras;

        } while (actual != ultimo);
    }
    else
    {
        cout << " \n La lista se encuentra vacia\n\n";
    }

}

void buscarNodo()
{
    Nodo *actual = new Nodo();
    actual = primero;
    bool encontrado = false;
    int nodoBuscado = 0;
    cout << " Ingresar el dato del nodo a buscar: ";
    cin >> nodoBuscado;

    if (primero != NULL)
    {
        do
        {
            if(actual->dato == nodoBuscado)
            {
                cout << "\n Nodo con el dato ["<<nodoBuscado<<"] encontrado\n\n";
                encontrado = true;

            }

            actual = actual->siguiente;

        } while (actual != primero && encontrado != true);

        if(!encontrado)
        {
            cout << "\n Nodo no encontrado ";
        }
    }
    else
    {
        cout << " \n La lista se encuentra vacia\n\n";
    }
}