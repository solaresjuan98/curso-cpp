
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

    char nombre[] = "Juan";
    char nombre2[20];

    strcpy(nombre2, nombre); // strcpy(cadena vacia, cadena a copiar)
    cout << nombre2 << endl;

    getch();
    return 0;
}