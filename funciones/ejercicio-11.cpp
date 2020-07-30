

#include <iostream>
#include <conio.h>

void pedirDatos();
int calcularSuma(int vec[], int tam);

int vec[100], tam;

int main()
{

    pedirDatos();

    std::cout << "\nLa suma de los elementos del vector es: " << calcularSuma(vec, tam) << std::endl;

    getch();
    return 0;
}

void pedirDatos()
{

    std::cout << "Digite el numero de elementos del vector: ";
    std::cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        std::cout << i + 1 << ". Digite un numero: ";
        std::cin >> vec[i];
    }
}

int calcularSuma(int vec[], int tam)
{
    int suma  = 0;

    for (int i = 0; i < tam; i++)
    {
        suma += vec[i];
    }

    return suma;
}