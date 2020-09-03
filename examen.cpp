#include <iostream>
#include <conio.h>
using namespace std;

// CLASE NODO
class Nodo
{

public:
    int n, x, y;
    Nodo *siguiente;

    Nodo(int n, int x, int y);

    ~Nodo();
};

Nodo::Nodo(int _n, int _x, int _y)
{
    this->n = _n;
    this->x = _x;
    this->y = _y;
    this->siguiente = NULL;
}

Nodo::~Nodo()
{
}

//CLASE LISTA
class ListaEnlazada
{

public:
    Nodo *inicio;

    ListaEnlazada();
    ListaEnlazada(Nodo *n);
    void addNodo(Nodo *nuevo);
    void Borrar(int n);
    void print();
    ~ListaEnlazada();
};

ListaEnlazada::ListaEnlazada()
{
    inicio = NULL;
}

ListaEnlazada::ListaEnlazada(Nodo *n)
{
    inicio = n;
}

void ListaEnlazada::addNodo(Nodo *nuevo)
{
    if (inicio == NULL)
    {
        inicio = nuevo;
        cout << " Nodo agregado al inicio" << endl;
    }
    else
    {
        Nodo *actual = inicio;

        while (actual->siguiente != NULL)
        {
            actual = actual->siguiente;
        }

        actual->siguiente = nuevo;

        cout << " Nodo agregado" << endl;
    }
}

void ListaEnlazada::Borrar(int n)
{
    if (inicio == NULL)
    {
    }
    else if (inicio != NULL)
    {
        if (inicio->n == n)
        {
            Nodo *aux = inicio;
            inicio = inicio->siguiente;

            delete aux;
        }
        else
        {
            //Nodo *aux;
            Nodo *temp = NULL;
            Nodo *prevptr = inicio;
            Nodo *actual = inicio->siguiente;

            while (actual != NULL)
            {
                if (actual->n == n)
                {
                    temp = actual;
                    actual = NULL;
                    delete actual;
                }
                else
                {
                    prevptr = prevptr->siguiente;
                    actual = actual->siguiente;
                }
            }
            if (temp != NULL)
            {
                prevptr->siguiente = temp->siguiente;
            }
            else
            {
            }
        }
    }
}

void ListaEnlazada::print()
{

    if (inicio == NULL)
    {
    }
    else
    {
        Nodo *temp = inicio;

        while (temp != NULL)
        {
            std::cout << " num: " << temp->n << std::endl;
            std::cout << " x, y: " << temp->x << temp->y << std::endl;
            temp = temp->siguiente;
        }
    }
}

ListaEnlazada::~ListaEnlazada()
{
}

int main()
{

    ListaEnlazada *lista = new ListaEnlazada();

    int num = 1;
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = num;
            // AGREGANDO A LISTA
            lista->addNodo(new Nodo(num, i, j));
            num++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << "   ";
        }
        cout << "\n";
    }

    lista->Borrar(1);
    lista->Borrar(3);
    lista->Borrar(4);

    lista->print();
    getch();
    return 0;
}