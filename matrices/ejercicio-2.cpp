#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int matriz[3][3];

    //insertando elementos en la matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " - Digita un numero: [" << i << "] [" << j << "] :  ";
            cin >> matriz[i][j];
        }
    }

    //mostrando los elementos de la matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "  " << matriz[i][j] << "  ";
        }

        cout << "\n";
    }

    cout << "Diagonal Principal de la matriz:  " << endl;
    cout << " " << matriz[0][0] << " ";
    cout << " " << matriz[1][1] << " ";
    cout << " " << matriz[2][2] << " ";

    getch();
    return 0;
}