//suma de matrices

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int matriz1[3][3], matriz2[3][3], matriz_suma[3][3];
    int suma = 0;

    cout << " - Ingresando datos a la matriz 1\n";

    //ingresando datos a la matriz1
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << " - Digite un numero: [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "\n - Ingresando datos a la matriz 1: \n";
    //ingresando datos a la matriz2
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << " - Digite un numero: [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    cout<<"\n - MATRIZ 1 \n";
    //mostrando datos de la matriz 1
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "  " << matriz1[i][j] << "  ";
        }

        cout << "\n";
    }

    cout<<"\n - MATRIZ 2\n";
    
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "  " << matriz2[i][j] << "  ";
        }

        cout << "\n";
    }

    cout<<"\n - SUMA DE MATRICES\n";
    //sumando matrices
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            suma = matriz1[i][j] + matriz2[i][j];
            matriz_suma[i][j] = suma;
        }
    }


    cout<<"\n - SUMA DE MATRICES\n";
    
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "  " << matriz_suma[i][j] << "  ";
        }

        cout << "\n";
    }



    getch();
    return 0;
}