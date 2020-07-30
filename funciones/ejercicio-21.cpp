
#include <iostream>
#include <conio.h>

// Prototipo de función
int potencia(int, int);

int x, y;
int main()
{
    int base, exponente;

    std::cout << " - Digite la base: ";
    std::cin >> base;
    std::cout << " - Digite el exponente: ";
    std::cin >> exponente;

    std::cout << "la potencia de " << base << " elevado a " << exponente << " es: " << potencia(base, exponente) << std::endl;
    getch();
    return 0;
}

int potencia(int x, int y)
{
    int pot;

    if (y == 1)
    { // caso base
        pot = x;
    }
    else // caso general
    {
        pot = x * potencia(x, y - 1);
    }

    return pot;
}