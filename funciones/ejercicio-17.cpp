
#include <iostream>
#include <conio.h>

struct Complejo
{
    float real, imaginaria;
} z1, z2;

//Prototipo de función

void pedirDatos();
Complejo suma(Complejo, Complejo);
void muestra(Complejo);

int main()
{
    pedirDatos();
    Complejo x = suma(z1, z2);
    muestra(x);

    getch();
    return 0;
}

void pedirDatos()
{
    std::cout << " Digita los datos para el primer numero complejo: " << std::endl;
    std::cout << " Parte Real: ";
    std::cin >> z1.real;
    std::cout << " Parte imaginaria: ";
    std::cin >> z1.imaginaria;

    std::cout << "\nDigita los datos para el segundo numero complejo: " << std::endl;
    std::cout << " Parte Real: ";
    std::cin >> z2.real;
    std::cout << " Parte imaginaria: ";
    std::cin >> z2.imaginaria;
}

Complejo suma(Complejo z1, Complejo z2)
{
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria;

    return z1;
}

void muestra(Complejo x)
{
    std::cout << "\nEl resultado de la suma: " << x.real << " , " << x.imaginaria << std::endl;
}