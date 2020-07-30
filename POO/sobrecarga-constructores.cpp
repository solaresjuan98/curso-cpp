
#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha
{
private: // Atributos
    int dia, mes, anio;

public:                   // Metodos
    Fecha(int, int, int); // Constructor1
    Fecha(long); // Constructor2
    void mostrarFecha();
};



//Constructor 1 (dia/mes/anio)
Fecha::Fecha(int _dia, int _mes, int _anio)
{
    anio = _anio;
    mes = _mes;
    dia = _dia;
}

//Constructor 
Fecha::Fecha(long fecha){
    anio = int(fecha/10000); // Extraer el anio
    mes = int((fecha-anio*10000)/100);// Extraer el mes
    dia = int(fecha-anio*10000-mes*100); // Extraer el dia
}

void Fecha::mostrarFecha()
{
    cout << " La fecha es: " << dia << "/" << mes << "/" << anio << endl;
}

int main()
{
    Fecha hoy(20, 7, 2020);
    hoy.mostrarFecha();

    cout << "\n";
    
    Fecha ayer(20200720);
    ayer.mostrarFecha();

    system("pause");
    return 0;
}