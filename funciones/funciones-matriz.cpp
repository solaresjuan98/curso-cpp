
#include <iostream>
#include <conio.h>

// elevar al cuadrado todos los elementos de una matriz

void mostrarMatriz(int m[][3], int, int);
void calcularCuadrado(int m[][3], int, int);
void mostrarMatrizElevada(int m[][3], int, int);

int main()
{

    const int NFILAS = 2;
    const int NCOLUMNAS = 3;

    int m[NFILAS][NCOLUMNAS]{{1, 2, 3}, {4, 5, 6}};

    mostrarMatriz(m, NFILAS, NCOLUMNAS);
    calcularCuadrado(m, NFILAS, NCOLUMNAS);
    mostrarMatriz(m, NFILAS, NCOLUMNAS);


    getch();
    return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncolumnas)
{

    std::cout << "Mostrando matriz original: \n";

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncolumnas; j++)
        {
            std::cout << m[i][j] << "  ";
        }

        std::cout << "\n";
    }
}

void calcularCuadrado(int m[][3], int nfilas, int ncol)
{
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            m[i][j] *= m[i][j];
        }
    }
}
