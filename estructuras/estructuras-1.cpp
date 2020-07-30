
#include <iostream>
#include <conio.h>

using namespace std;

struct persona
{
    char nombre[20];
    int edad;
} persona1;

int main()
{

    cout << "Ingresa tu nombre: ";
    cin.get(persona1.nombre, 20, '\n');
    cout << "Ingresa tu edad: ";
    cin >> persona1.edad;

    cout << "Nombre1: " << persona1.nombre << endl;
    cout << "Edad1: " << persona1.edad << endl;

    getch();
    return 0;
}