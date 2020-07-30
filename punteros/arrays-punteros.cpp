
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int *dir_numeros;

    dir_numeros = numeros; // direccion de memoria inicial del vector numeros[0]

    for (int i = 0; i < 5; i++)
    {
        //cout << " Elemento [" << i << "]: " << *dir_numeros++ ;
        cout << " Posicion: "<<i<<" "<<dir_numeros++<<endl;
    }

    getch();
    return 0;
}