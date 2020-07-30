
#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo
{
private: // Atributos
    float largo, ancho;

public:                       // Metodos de la clase
    Rectangulo(float, float); // Constructor de la clase
    void perimetro();
    void area();
};

Rectangulo::Rectangulo(float _largo, float _ancho)
{
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo::perimetro()
{
    float _perimetro;

    _perimetro = (2 * largo) + (2 * ancho);

    cout << " El perimetro es: " << _perimetro << " metros."<< endl;
}

void Rectangulo::area()
{
    float _area;

    _area = largo * ancho;

    cout << " El area es : " << _area << " metros." << endl;
}

int main()
{
    int largo, ancho;
    cout << " Ingresa el largo (en metros): ";
    cin >> largo;
    cout << " Ingresa el ancho (en metros): ";
    cin >> ancho;
    Rectangulo r1(largo, ancho);

    r1.perimetro();
    r1.area();

    system("pause");
    return 0;
}