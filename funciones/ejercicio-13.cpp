
#include <iostream>
#include <conio.h>

void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVector(int vec[], int);

int vec[100], tam;

int main()
{

    pedirDatos();
    cambiarSigno(vec, tam);
    mostrarVector(vec, tam);

    getch();
    return 0;
}

void pedirDatos()
{

    std::cout << "Digite el tamanio del vector: ";
    std::cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        std::cout << i + 1 << ". Digite un numero: ";
        std::cin >> vec[i];
    }
}

void cambiarSigno(int vec[], int tam)
{

    for (int i = 0; i < tam; i++)
    {
        vec[i] *= -1;
    }
}

void mostrarVector(int vec[], int tam)
{
    std::cout << "\nMostrando los elementos del vector con signo cambiado: \n";

    for (int i = 0; i < tam; i++)
    {
        std::cout << " - " << vec[i] << std::endl;
    }
}