#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "estudiante.h"
#pragma once

class Universitario : public Estudiante
{
private:
    std::string carrera;

public:
    Universitario(std::string, int, float, std::string);
    void mostrarUniversitario();
};

// Constructor de la clase universitario (Clase hija)
Universitario::Universitario(std::string _nombre, int _edad, float _notaFinal, std::string _carrera) : Estudiante(_nombre, _edad, _notaFinal)
{
    carrera = _carrera;
}

void Universitario::mostrarUniversitario()
{
    mostrarEstudiante();
    std::cout << " Carrera: " << carrera << std::endl;
}