#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

//prototipo de función
void pedirDato();
float elevarAlCuadrado(float num);

float n1, num_al_cuadrado;
int main()
{
    pedirDato();
    num_al_cuadrado = elevarAlCuadrado(n1);

    std::cout << " - El resultado es:  " << std::fixed << std::setprecision(4) << num_al_cuadrado;
    getch();
    return 0;
}

void pedirDato()
{
    std::cout << " -Digita un numero: ";
    std::cin >> n1;
}

float elevarAlCuadrado(float num)
{

    float numero_cuadrado;

    numero_cuadrado = pow(num, 2);

    return numero_cuadrado;
}