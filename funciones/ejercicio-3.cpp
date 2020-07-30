#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

//prototipo de función
void pedirDatos();
void funPot(int x, int y);

int numero, exponente;

int main()
{
    pedirDatos();
    funPot(numero, exponente);

    getch();
    return 0;
}

void pedirDatos()
{
    std::cout << " - Digita un numero: ";
    std::cin >> numero;
    std::cout << " - Digita el exponente de elevacion:  ";
    std::cin >> exponente;
}

void funPot(int x, int y)
{
    long resultado = 1;

    for (int i = 0; i < y; i++)
    {
        resultado *= x;
    }

    std::cout << " - El resultado es:  " << resultado << std::endl;
}