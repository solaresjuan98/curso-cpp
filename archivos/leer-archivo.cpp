
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

void lectura();

int main()
{

    lectura();

    system("pause");
    return 0;
}

void lectura()
{
    ifstream archivo;
    string texto;

    archivo.open("programacion.txt", ios::in); // Abriendo el archivo en modo lectura

    if (archivo.fail())
    {
        cout << " No se pudo abrir el archivo";
        exit(1);
    }

    while (!archivo.eof()) // Mientras no sea final del archivo
    {
        //getline(archivo, texto);
        cout << texto << endl;
    }

    archivo.close(); // cerrar el archivo
}