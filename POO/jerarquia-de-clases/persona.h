#include <iostream>
#include <stdlib.h>
#include <string.h>
#pragma once

class Persona
{
private: // Atributos
    std::string nombre;
    int edad;

public: // Metodos
    Persona(std::string, int);
    void mostrarPersona();
};

// Constructor de la clase Persona(Clase Padre)
Persona::Persona(std::string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrarPersona()
{
    std::cout << " Nombre: " << nombre << std::endl;
    std::cout << " Edad: " << edad << std::endl;
}