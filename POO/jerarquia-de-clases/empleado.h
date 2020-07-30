#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#pragma once

class Empleado : public Persona {
    private:
        float sueldo;
    
    public:
        Empleado(std::string, int, float);
        void mostrarEmpleado();
};

// Constructor de la clase empleado
Empleado::Empleado(std::string _nombre, int _edad, float _sueldo) : Persona(_nombre, _edad)
{
    sueldo = _sueldo;
}

void Empleado::mostrarEmpleado()
{
    mostrarPersona();
    std::cout << " Sueldo: "<<sueldo;

}