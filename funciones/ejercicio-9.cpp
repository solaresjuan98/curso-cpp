
#include <iostream>
#include <conio.h>

void tiempo(int, int &, int &, int &);

int main()
{

    int totalSeg, horas, min, seg;

    std::cout << "Digita el numero total de segundos: ";
    std::cin >> totalSeg;

    tiempo(totalSeg, horas, min, seg);

    std::cout << "\nTiempo equivalente a la cantidad de segundos digitados: " << std::endl;
    std::cout << "Horas: " << horas << std::endl;
    std::cout << "Minutos: " << min << std::endl;
    std::cout << "Segundos: " << seg << std::endl;
    getch();
    return 0;
}

void tiempo(int totalSeg, int &horas, int &min, int &seg)
{
    horas = totalSeg / 3600;
    totalSeg %= 3600;
    min = totalSeg / 60;
    seg = totalSeg % 60;
}