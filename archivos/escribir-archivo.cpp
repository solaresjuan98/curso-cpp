
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream> // funciones para manipulación de archivos
using namespace std;

void escribir();

int main()
{

    escribir();

    system("pause");
    return 0;
}

void escribir()
{
    ofstream archivo;
    string nombreArchivo, frase;

    cout << " Escribe el nombre de tu archivo (con extension incluida): ";
    
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out); // Abriendo el archivo

    if (archivo.fail())
    {
        cout << " No se pudo abrir el archivo\n";
        exit(1); // Salir del programa
    }

    cout << " \nDigita el texto del archivo: ";
    getline(cin, frase);

    archivo << frase;
    archivo.close();
}