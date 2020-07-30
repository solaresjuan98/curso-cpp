
#include <iostream>
#include <conio.h>

// Prototipos de función
void pedirDatos();
void mult(float x, float y);

float num1, num2;

int main()
{

    pedirDatos();
    mult(num1, num2);
    getch();
    return 0;
}

void pedirDatos()
{
    std::cout << "Digite 2 numeros: ";
    std::cin >> num1 >> num2;
}

void mult(float x, float y)
{
    float multiplicacion = x * y;

    std::cout << "La multiplicación es:  " << multiplicacion << std::endl;
}