
// Clases en c++

#include <iostream>
#include <stdlib.h>
#include "persona.h"

using namespace std;

/*
class Persona
{

private: // Atributos de la persona
    int edad;
    string nombre;

public:                   // Metodos
    Persona(int, string); // Constructor de la clase
    void leer();
    void correr();
};

// Constructor, sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    cout << " Soy " << nombre << " y estoy leyendo un libro." << endl;
}

void Persona::correr()
{
    cout << " Soy " << nombre << " y estoy corriendo una maraton. Tengo "<<edad<<" anios." << endl;
}

*/

int main()
{
    Persona persona = Persona(21, "Juan");
    persona.leer();
    persona.correr();

    cout << "\n";

    Persona persona2(19, "Antonio");// Otra forma de iniciar el objeto
    persona2.leer();
    persona2.correr();

    cout << "\n";
    
    Persona persona3(29, "Maria");
    persona3.leer();
    persona3.correr();

    cout << "\n\n";
    system("pause");
    return 0;
}