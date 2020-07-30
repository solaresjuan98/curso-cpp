//paso de parametros por referencia

#include <iostream>
#include <conio.h>

//prototipo de función
void valNuevo(int &, int &);

int main()
{
    int num1, num2;
    std::cout << "Digite 2 numeros: ";
    std::cin >> num1 >> num2;

    valNuevo(num1, num2);

    std::cout << "El nuevo valor del primer numero es: " << num1 << std::endl;
    std::cout << "El nuevo valor del segundo numero es: " << num2 << std::endl;

    getch();
    return 0;
}

void valNuevo(int &xnum, int &ynum)
{
    std::cout << "El valor del primer numero es: " << xnum << std::endl;
    std::cout << "El valor del segundo numero es: " << ynum << std::endl;

    xnum = 89;
    ynum = 39;
}
