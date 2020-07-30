
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Empleado
{
    char nombre[20];
    float salario;
} emp[100];

int main()
{

    int n_empleados, pos_mayor = 0, pos_menor = 0;
    float mayor = 0, menor = 99999;

    cout << "Digite el numero de empleados: ";
    cin >> n_empleados;
    cout << "\n";
    for (int i = 0; i < n_empleados; i++)
    {
        fflush(stdin);
        cout << "---- Datos de Empleado #" << i + 1 << " ----\n";
        cout << "Digite su nombre: ";
        cin.getline(emp[i].nombre, 20, '\n');
        cout << "Digite su salario: ";
        cin >> emp[i].salario;

        //determinando empleado de mayor salario
        if (emp[i].salario > mayor)
        {
            mayor = emp[i].salario;
            pos_mayor = i;
        }

        //empleado con menor salario
        if (emp[i].salario < menor)
        {
            menor = emp[i].salario;
            pos_menor = i;
        }

        cout << "\n";
    }

    cout << "\nDatos del empleado con mayor salario: \n";
    cout << "   - Nombre: " << emp[pos_mayor].nombre << endl;
    cout << "   - Nombre: " << emp[pos_mayor].salario << endl;

    cout << "\nDatos del empleado con menor salario: \n";
    cout << "   - Nombre: " << emp[pos_menor].nombre << endl;
    cout << "   - Nombre: " << emp[pos_menor].salario << endl;


    getch();
    return 0;
}