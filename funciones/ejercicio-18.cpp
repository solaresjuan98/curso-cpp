
#include <iostream>
#include <conio.h>

struct Fecha
{
    int dia;
    int mes;
    int anio;
} fecha1, fecha2;

//Prototipos de funcion
void pedirDatos();
Fecha mayor(Fecha, Fecha);
void mostrarMayor(Fecha);

int main()
{
    pedirDatos();
    Fecha fechaMayor = mayor(fecha1, fecha2);
    mostrarMayor(fechaMayor);
    getch();
    return 0;
}

void pedirDatos()
{
    std::cout << "---- Fecha 1 ----\n";
    std::cout << " - Ingresa el dia: ";
    std::cin >> fecha1.dia;
    std::cout << " - Ingresa el mes: ";
    std::cin >> fecha1.mes;
    std::cout << " - Ingresa el anio: ";
    std::cin >> fecha1.anio;

    std::cout << "\n---- Fecha 2 ----\n";
    std::cout << " - Ingresa el dia: ";
    std::cin >> fecha2.dia;
    std::cout << " - Ingresa el mes: ";
    std::cin >> fecha2.mes;
    std::cout << " - Ingresa el anio: ";
    std::cin >> fecha2.anio;

}

Fecha mayor(Fecha fecha1, Fecha fecha2)
{
    Fecha fecha_mayor;

    if (fecha1.anio > fecha2.anio)
    {
        fecha_mayor = fecha1;
    }
    else if (fecha1.anio == fecha2.anio)
    {
        if (fecha1.mes > fecha2.mes)
        {
            fecha_mayor = fecha1;
        }
        else if (fecha1.mes == fecha1.mes)
        {
            if (fecha1.dia > fecha2.dia)
            {
                fecha_mayor = fecha1;
            }
            else
            {
                fecha_mayor = fecha2;
            }
        }
        else
        {
            fecha_mayor = fecha2;
        }
    }
    else
    {
        fecha_mayor = fecha2;
    }

    return fecha_mayor;
}

void mostrarMayor(Fecha fechaMayor)
{
    std::cout << "\nMostrando fecha mas reciente: \n";
    std::cout << fechaMayor.dia << "/" << fechaMayor.mes << "/" << fechaMayor.anio << std::endl;
    
}