
#include <iostream>
#include <stdlib.h>
using namespace std;

class Tiempo
{
private:
    int horas, minutos, segundos;

public:
    Tiempo(int, int, int); // Constructor 1
    Tiempo(int);           // Constructor 2
    void mostrarTiempo();
};

// Constructor 1
Tiempo::Tiempo(int _horas, int _minutos, int _segundos)
{
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}

// Constructor 2
Tiempo::Tiempo(int tiempoSeg)
{
    horas = tiempoSeg / 3600; // Extraer las horas
    tiempoSeg %= 3600;
    minutos = tiempoSeg / 60;  // Extraer los minutos
    segundos = tiempoSeg % 60; // Extraer los segundos
}

void Tiempo::mostrarTiempo()
{
    cout << " La hora es: " << horas << ":" << minutos << ":" << segundos << endl;

}

int main()
{
    Tiempo horaActual(17, 59, 30);
    Tiempo horaPasada(15600);

    horaActual.mostrarTiempo();
    cout << "\nHace una hora: \n";
    horaPasada.mostrarTiempo();
    system("pause");
    return 0;
}