
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo";
    char cad3[30];

    strcpy(cad3, cad1); //cad3 = "Esto es una cadena"
    strcat(cad3, cad2); //cad3 = "Esto es una cadena de ejemplo"

    cout << cad3 << endl;

    cout << "\n Ejercicio:  \n";
    //variables para el ejercicio
    char cadena[] = "Hola que tal ";
    char nombreUsuario[40];
    char cadena_concatenada[100];

    cout << "Ingresa tu nombre:  ";
    cin.getline(nombreUsuario, 40, '\n');
    strcpy(cadena_concatenada, cadena);        // cadena_concatenada = "Hola que tal"
    strcat(cadena_concatenada, nombreUsuario); // cadena_concatenada = "Hola que tal (nombreUsuario)"

    cout << cadena_concatenada << endl;

    //cout << "  Ejercicio - 4 \n";

    getch();
    return 0;
}