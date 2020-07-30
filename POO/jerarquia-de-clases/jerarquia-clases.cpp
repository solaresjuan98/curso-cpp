
#include <iostream>
#include <stdlib.h>
#include "persona.h"
#include "empleado.h"
#include "estudiante.h"
#include "universitario.h"
using namespace std;

int main()
{

    Empleado empleado1("Carlos", 35, 1300);
    cout << " \t ::Empleado::" << endl;
    empleado1.mostrarEmpleado();
    cout << " \n\n";

    Estudiante estudiante1("Juan", 21, 85.10);
    cout << " \t ::Estudiante::" << endl;
    estudiante1.mostrarEstudiante();
    cout << " \n\n";

    Universitario universitario1("Claudia", 19, 15.6, "Ciencias y Sistemas");
    cout << " \t ::Universitario(a)::" << endl;
    universitario1.mostrarUniversitario();
    cout << " \n\n";

    system("pause");
    return 0;
}