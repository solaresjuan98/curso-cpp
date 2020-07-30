#include <iostream>
#include <conio.h>

// Prototipo de función
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main()
{
    int num1 = -4;
    float num2 = -25.557;
    double num3 = -123.5678;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    getch();
    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero)
{

    if (numero < 0)
    {
        numero = numero * -1;
    }

    std::cout << "El valor absoluto del numero es: " << numero << std::endl;
}
