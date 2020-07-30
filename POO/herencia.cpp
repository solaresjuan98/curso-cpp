
#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona
{
private: // Atributos
    string nombre;
    int edad;

public:                   // Métodos
    Persona(string, int); // Constructor
    void mostrarPersona();
};

// Herencia
class Alumno : public Persona
{
private: // Atributos
    string codigoAlumno;
    float notaFinal;

public:                                 // Métodos
    Alumno(string, int, string, float); // Constructor de la clase alumno
    void mostrarAlumno();
};

// Constructor de la clase Persona (Clase padre)
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad)
{
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

void Persona::mostrarPersona()
{
    cout << " Nombre: " << nombre << endl;
    cout << " Edad: " << edad << endl;
}

void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout << " Codigo Alumno: " << codigoAlumno << endl;
    cout << " Nota Final: " << notaFinal << endl;
}

int main()
{
    Alumno alumno1("Juan ", 20, "201800496", 98);
    alumno1.mostrarAlumno();

    system("pause");
    return 0;
}