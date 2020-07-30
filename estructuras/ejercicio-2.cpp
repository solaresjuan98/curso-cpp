
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct alumno
{
    char nombre[25];
    int edad;
    float promedio;
} alumno_1, alumno_2, alumno_3;

int main()
{

    //fflush(stdin);
    cout << "------ ALUMNO 1 ------\n";
    cout << "Escribe tu nombre: ";
    cin.getline(alumno_1.nombre, 25, '\n');
    cout << "Escribe tu edad: ";
    cin >> alumno_1.edad;
    cout << "Escribe tu promedio: ";
    cin >> alumno_1.promedio;
    fflush(stdin);
    cout << "\n------ ALUMNO 2 ------\n";
    cout << "Escribe tu nombre:  ";
    cin.getline(alumno_2.nombre, 25, '\n');
    cout << "Escribe tu edad: ";
    cin >> alumno_2.edad;
    cout << "Escribe tu promedio: ";
    cin >> alumno_2.promedio;
    fflush(stdin);
    cout << "\n------ ALUMNO 3 ------\n";
    cout << "Escribe tu nombre:  ";
    cin.getline(alumno_3.nombre, 25, '\n');
    cout << "Escribe tu edad: ";
    cin >> alumno_3.edad;
    cout << "Escribe tu promedio: ";
    cin >> alumno_3.promedio;

    cout << "\nAlumno con mayor promedio:\n ";

    //comparando promedios
    if (alumno_1.promedio > alumno_2.promedio && alumno_1.promedio > alumno_3.promedio)
    {
        cout << alumno_1.nombre << endl;
        cout << alumno_1.edad << endl;
        cout << alumno_1.promedio << endl;
    }
    else if (alumno_2.promedio > alumno_1.promedio && alumno_2.promedio > alumno_3.promedio)
    {
        cout << alumno_2.nombre << endl;
        cout << alumno_2.edad << endl;
        cout << alumno_2.promedio << endl;
    }
    else
    {
        cout << alumno_3.nombre << endl;
        cout << alumno_3.edad << endl;
        cout << alumno_3.promedio << endl;
    }


    getch();
    return 0;
}