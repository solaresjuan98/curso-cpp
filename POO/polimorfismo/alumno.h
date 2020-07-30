
#pragma once
#include <iostream>
#include <stdlib.h>
#include "persona.h"

class Alumno : public Persona
{

private:
    float notaFinal;

public:
    Alumno(std::string, int, float);
    void mostrar();
};

Alumno::Alumno(std::string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad)
{
    notaFinal = _notaFinal;
}

void Alumno::mostrar()
{
    Persona::mostrar();
    std::cout << " Nota Final: " << notaFinal << std::endl;
}
