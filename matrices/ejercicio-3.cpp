#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int numeros[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2];

    //pasando el contenido de numeros hacia matriz2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz2[i][j] = numeros[i][j];
        }
    }

    //Mostrando matriz 2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << " " << matriz2[i][j] << " ";
        }

        cout << "\n";
    }

    getch();
    return 0;
}