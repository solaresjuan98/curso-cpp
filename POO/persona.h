#include <iostream>
#include <stdlib.h>
#include <string.h>

class Persona
{

private: // Atributos de la persona
    int edad;
    std::string nombre;

public:                   // Metodos
    Persona(int, std::string); // Constructor de la clase
    void leer();
    void correr();
};

// Constructor, sirve para inicializar los atributos
Persona::Persona(int _edad, std::string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    std::cout << " Soy " << nombre << " y estoy leyendo un libro." << std::endl;
}

void Persona::correr()
{
    std::cout << " Soy " << nombre << " y estoy corriendo una maraton. Tengo "<<edad<<" anios." << std::endl;
}