/*
    Asignación dinámica de arreglos

    new: Reserva el numero de bytes solicitado por la declaracion
    delete: libera un bloque de bytes reservado con anterioridad

*/

#include <iostream>
#include <conio.h>
#include <stdlib.h> // Funciona new y delete

using namespace std;

//Prototipo de función
void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main()
{
    pedirNotas();
    mostrarNotas();

    delete[] calif; // liberando el espacio en bytes utilizados anteriormente

    getch();
    return 0;
}

void pedirNotas()
{
    cout << "Digita el numero de calificaciones: ";
    cin >> numCalif;

    calif = new int[numCalif]; // Crear el arreglo

    for (int i = 0; i < numCalif; i++)
    {
        cout << "Ingresa una nota: ";
        cin >> calif[i];
    }
}

void mostrarNotas()
{
    cout << "\n\nMostranto notas del usuario: \n";

    for (int i = 0; i < numCalif; i++)
    {
        cout << calif[i] << endl;
    }
}