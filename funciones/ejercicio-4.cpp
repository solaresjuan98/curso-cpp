#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

//prototipo de función
void pedirDato();
void parteFraccionaria(float x);

float numero, parte_fraccionaria;

int main()
{
    pedirDato();
    parteFraccionaria(numero);
    getch();
    return 0;
}

void pedirDato()
{
    std::cout << " - Digita un numero: ";
    std::cin >> numero;
}

void parteFraccionaria(float x)
{
    int aux;
    aux = x / 1;
    parte_fraccionaria = x - aux;

    std::cout << "La parte fraccionaria es: "<< std::fixed << std::setprecision(3) << parte_fraccionaria << std::endl;
}