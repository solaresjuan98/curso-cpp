
#include <iostream>
#include <conio.h>

using namespace std;

struct Promedio
{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;
} alumno1;

int main()
{

    float promedio_alumno;

    cout << " - Digita tu nombre: ";
    cin.getline(alumno1.nombre, 20, '\n');
    cout << " - Digita tu sexo: ";
    cin.getline(alumno1.sexo, 10, '\n');
    cout << " - Digita tu edad: ";
    cin >> alumno1.edad;

    cout << "\n:::: Notas del alumnos :::: \n";
    cout << " - Nota 1: ";
    cin >> alumno1.prom.nota1;
    cout << " - Nota 2: ";
    cin >> alumno1.prom.nota2;
    cout << " - Nota 3: ";
    cin >> alumno1.prom.nota3;

    promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;

    cout << "\nDatos del Alumnos\n";
    cout << "   - Nombre: " << alumno1.nombre << endl;
    cout << "   - Sexo: " << alumno1.sexo << endl;
    cout << "   - Edad: " << alumno1.edad << endl;
    cout << "   - Promedio: " << promedio_alumno << endl;

    getch();
    return 0;
}