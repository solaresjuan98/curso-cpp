#pragma once
#include <iostream>
#include <stdlib.h>

class Persona
{
private:
    std::string nombre;
    int edad;

public:
    Persona(std::string, int);
    virtual void mostrar(); // Polimorfismo
};

Persona::Persona(std::string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrar()
{
    std::cout << " Nombre: " << nombre << std::endl;
    std::cout << " Edad: " << edad << std::endl;
}

