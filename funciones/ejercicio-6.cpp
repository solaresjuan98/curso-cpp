
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

// Plantilla de funcion
float maximo(float x, float y, float z);
void pedirDatos();

float num1, num2, num3, numero_maximo;

int main()
{
    pedirDatos();
    numero_maximo = maximo(num1, num2, num3);
    std:: cout << "  - El valor maximo es : "<<numero_maximo;
    getch();
    return 0;
}

void pedirDatos()
{
    std::cout << " - Ingresa el primer valor: ";
    std::cin >> num1;
    std::cout << " - Ingresa el segundo valor: ";
    std::cin >> num2;
    std::cout << " - Ingresa el tercer valor: ";
    std::cin >> num3;
}

float maximo(float x, float y, float z)
{
    float max = 0;

    if (x > y && x > z)
    {
        max = x;
    }
    else if (y > x && y > z)
    {
        max = y;
    }
    else if (z > x && z > y)
    {
        max = z;
    }

    return max;
}