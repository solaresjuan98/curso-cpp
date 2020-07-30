// Destructor

#include <iostream>
#include <stdlib.h>
using namespace std;

class Perro
{
private:
    string nombre, raza;

public:
    Perro(string, string); // Constructor
    ~Perro();              // Constructor
    void mostrarDatos();
    void jugar();
};

// Constructor
Perro::Perro(string _nombre, string _raza)
{
    nombre = _nombre;
    raza = _raza;
}

// Destructor
Perro::~Perro()
{
}

void Perro::mostrarDatos()
{
    cout << " Nombre: " << nombre << endl;
    cout << " Raza: " << raza << endl;
}

void Perro::jugar()
{
    cout << nombre << " esta jugando..." << endl;
}

int main()
{
    Perro perro1("Negrita", "ni idea bro");

    perro1.mostrarDatos();
    cout << "\n";
    perro1.jugar();
    perro1.~Perro(); // Destruyendo el objeto
    
    system("pause");
    return 0;
}