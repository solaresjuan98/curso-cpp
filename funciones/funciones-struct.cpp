
#include <iostream>
#include <conio.h>

struct Persona
{
    char nombre[30];
    int edad;
} p1;

//Prototipos
void pedirDatos();
void mostrarDatos(Persona);

int main()
{
    pedirDatos();
    mostrarDatos(p1);
    getch();
    return 0;
}

void pedirDatos()
{
    std::cout << "Digita tu nombre: ";
    std::cin.getline(p1.nombre, 30, '\n');
    std::cout << "Digita tu edad: ";
    std::cin >> p1.edad;
}

void mostrarDatos(Persona p)
{
    std::cout << "\n - Nombre: " << p.nombre << std::endl;
    std::cout << " - Edad: " << p.edad << std::endl;
}