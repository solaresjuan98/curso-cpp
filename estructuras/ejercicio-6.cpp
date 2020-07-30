
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
    float promedio_total;
} alumnos[100];

int main()
{

    int numero_alumnos, mejor_pos = 0;
    float mejor_prom = 0;
    cout << " - Ingresar la cantidad de alumnos: ";
    cin >> numero_alumnos;

    for (int i = 0; i < numero_alumnos; i++)
    {
        fflush(stdin);
        cout << "\n :::: ALUMNO" << i + 1 << " ::::\n";
        cout << " - Nombre: ";
        cin.getline(alumnos[i].nombre, 20, '\n');
        cout << " - Sexo: ";
        cin.getline(alumnos[i].sexo, 20, '\n');
        cout << " - Edad: ";
        cin >> alumnos[i].edad;

        cout << "\n:::: Notas del alumno :::: \n";
        cout << " - Nota 1: ";
        cin >> alumnos[i].prom.nota1;
        cout << " - Nota 2: ";
        cin >> alumnos[i].prom.nota2;
        cout << " - Nota 3: ";
        cin >> alumnos[i].prom.nota3;

        alumnos[i].promedio_total = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;
    }

    //Determinar el alumno con el mejor promedio de todos
    for (int i = 0; i < numero_alumnos; i++)
    {
        if(alumnos[i].promedio_total > mejor_prom){
            mejor_prom = alumnos[i].promedio_total;
            mejor_pos = i;
        }

    }

    //Imprimiendo los datos del alumno con mejor promedio

    cout << "\n ----- ALUMNO CON MEJOR PROMEDIO ----- \n";
    cout << "    - Nombre: "<<alumnos[mejor_pos].nombre<<endl;
    cout << "    - Edad: "<<alumnos[mejor_pos].edad <<endl;
    cout << "    - Sexo: "<<alumnos[mejor_pos].sexo<<endl;
    cout << "    - Promedio total: "<<alumnos[mejor_pos].promedio_total<<endl;

    getch();
    return 0;
}
