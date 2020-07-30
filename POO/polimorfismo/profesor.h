
#pragma once
#include <iostream>
#include <stdlib.h>
#include "persona.h"

class Profesor : public Persona
{
private:
    std::string materia;

public:
    Profesor(std::string, int, std::string);
    void mostrar();
};

Profesor::Profesor(std::string _nombre, int _edad, std::string _materia) : Persona(_nombre, _edad)
{
    materia = _materia;
}

void Profesor::mostrar()
{
    Persona::mostrar();
    std::cout << " Materia: " << materia << std::endl;
}