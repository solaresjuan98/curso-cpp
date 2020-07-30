#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};

// Prototipos de función
void menu();
Nodo *crearNodo(int, Nodo *);            // Se indica el padre del nodo que se va a crear
void insertarNodo(Nodo *&, int, Nodo *); // Se indica el padre del nodo que vamos a insertar
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);  // orden: raiz-izq-der
void inOrden(Nodo *);   // orden: izq-raiz-der
void postOrden(Nodo *); // orden: izq-der-raiz
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *); // Nodo más izquierdo posible
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

Nodo *arbol = NULL;

int main()
{
    menu();
    getch();
    return 0;
}

//Función para crear un nuevo nodo
Nodo *crearNodo(int n, Nodo *padre)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;
}

// Función de menu
void menu()
{
    int dato, opcion, contador = 0;

    do
    {
        cout << "\t :: MENU :: \n";
        cout << " 1. Insertar un nuevo nodo" << endl;
        cout << " 2. Mostrar el arbol completo " << endl;
        cout << " 3. Buscar un elemento en el arbol " << endl;
        cout << " 4. Recorrer el arbol en PreOrden " << endl;
        cout << " 5. Recorrer el arbol en InOrden " << endl;
        cout << " 6. Recorrer el arbol en postOrden " << endl;
        cout << " 7. Eliminar un nodo del arbol " << endl;
        cout << " 8. Salir" << endl;
        cout << " Elige una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "\n Digita un numero: ";
            cin >> dato;
            insertarNodo(arbol, dato, NULL); // Insertarmos un nuevo nodo
            cout << "\n";
            system("pause");

            break;
        case 2:
            cout << "\n Mostrando el arbol completo: \n\n";
            mostrarArbol(arbol, contador);
            cout << "\n";
            system("pause");

            break;
        case 3:
            cout << " \nDigite el elemento a buscar: ";
            cin >> dato;

            if (busqueda(arbol, dato) == true)
            {
                cout << "\nElemento " << dato << " ha sido encontrado en el arbol. " << endl;
            }
            else
            {
                cout << "\nElemento no encontrado\n";
            }
            cout << "\n";
            system("pause");

            break;
        case 4:
            cout << "\nRecorrido en PreOrden: ";
            preOrden(arbol);
            cout << "\n\n";
            system("pause");
            break;
        case 5:
            cout << "\nRecorrido en InOrden: ";
            inOrden(arbol);
            cout << "\n\n";
            system("pause");
            break;
        case 6:
            cout << "\nRecorrido en PostOrden: ";
            postOrden(arbol);
            cout << "\n\n";
            system("pause");
            break;
        case 7:
            cout << "\nDigite el numero a eliminar: ";
            cin >> dato;
            eliminar(arbol, dato);
            cout << "\n";
            system("pause");
            break;
        }

        system("cls");
    } while (opcion != 8);
}

//Función para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n, Nodo *padre)
{
    if (arbol == NULL) // Si el arbol está vacio
    {
        Nodo *nuevo_nodo = crearNodo(n, padre);
        arbol = nuevo_nodo;
    }
    else // Si el arbol tiene un nodo o más de uno
    {
        int valorRaiz = arbol->dato; // Obtenemos el valor de la raiz

        if (n < valorRaiz) // Si el elemento es menor a la raiz, insertamos en la izquierda
        {
            insertarNodo(arbol->izq, n, arbol);
        }
        else // si el elemento es mayor a la raiz, insertamos en derecha
        {
            insertarNodo(arbol->der, n, arbol);
        }
    }
}

//Función para mostrar el arbol completo
void mostrarArbol(Nodo *arbol, int cont)
{
    if (arbol == NULL)
    { // si el arbol está vacío
        return;
    }
    else
    {
        mostrarArbol(arbol->der, cont + 1);
        for (int i = 0; i < cont; i++)
        {
            cout << "   ";
        }

        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, cont + 1);
    }
}

// Función para buscar un elemento en el arbol
bool busqueda(Nodo *arbol, int n)
{
    if (arbol == NULL) // Si el arbol está vacío
    {
        return false;
    }
    else if (arbol->dato == n) // si el nodo es igual al elemento
    {
        return true;
    }
    else if (n < arbol->dato)
    {
        return busqueda(arbol->izq, n);
    }
    else
    {
        return busqueda(arbol->der, n);
    }
}

// Funcion para recorrido en profundidad -> preOrden
void preOrden(Nodo *arbol)
{
    if (arbol == NULL) // si el arbol está vacio
    {
        return;
    }
    else
    {
        cout << arbol->dato << " - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

// Función para recorrido en profundidad -> inOrden
void inOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        inOrden(arbol->izq);
        cout << arbol->dato << " - ";
        inOrden(arbol->der);
    }
}

// Función para recorrido en profundidad -> postOrden
void postOrden(Nodo *arbol)
{
    if (arbol == NULL) // Si el arbol está vacio
    {
        return;
    }
    else
    {
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout << arbol->dato << " - ";
    }
}

// Función para determinar el nodo más izquierdo posible
Nodo *minimo(Nodo *arbol)
{
    if (arbol == NULL) // Si el arbol está vacio
    {
        return NULL; // Retorna nulo
    }
    if (arbol->izq) // Si tiene hijo izq
    {
        return minimo(arbol->izq); // buscamos la parte mas izq posible
    }
    else // si no tiene hijo izq
    {
        return arbol; // retornamos el mismo nodo
    }
}

// Eliminar un nodo del arbol
void eliminar(Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return; // No hace nada
    }
    else if (n < arbol->dato) // Si el valor es menor
    {
        eliminar(arbol->izq, n); // Busca por la izquierda
    }
    else if (n > arbol->dato) // Si el valor es mayor
    {
        eliminar(arbol->der, n); // Busca por la derecha
    }
    else // Si ya encontraste el valor
    {
        eliminarNodo(arbol);
    }
}

// Función para reemplazar dos nodos
void reemplazar(Nodo *arbol, Nodo *nuevoNodo)
{
    if (arbol->padre)
    {
        //arbol->padre hay que asignarle su nuevo hijo
        if (arbol->dato == arbol->padre->izq->dato)
        {
            arbol->padre->izq = nuevoNodo;
        }
        else if (arbol->dato == arbol->padre->der->dato)
        {
            arbol->padre->der = nuevoNodo;
        }
    }
    if (nuevoNodo)
    {
        //Procedemos a asignarle su nuevo padre
        nuevoNodo->padre = arbol->padre;
    }
}

// Función para destruir un nodo
void destruirNodo(Nodo *nodo)
{
    nodo->izq = NULL;
    nodo->der = NULL;

    delete nodo;
}

// Función para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoEliminar)
{
    if (nodoEliminar->izq && nodoEliminar->der) // Si el nodo tiene hijo izquierdo e hijo derecho
    {
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    else if (nodoEliminar->izq) // Si tiene hijo izquierdo
    {
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    }
    else if (nodoEliminar->der)
    {
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }
    else //No tiene hijos
    {
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}