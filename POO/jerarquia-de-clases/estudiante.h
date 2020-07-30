#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#pragma once

class Estudiante : public Persona
{

private:
    float notaFinal;

public:
    Estudiante(std::string, int, float);
    void mostrarEstudiante();
};

// Constructor de la clase Estudiante (Clase Hija-Padre)
Estudiante::Estudiante(std::string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad)
{
    notaFinal = _notaFinal;
}

void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    std::cout << " Nota Final: " <<notaFinal<< std::endl;
}