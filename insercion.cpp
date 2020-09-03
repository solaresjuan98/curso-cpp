
#include <iostream>
#include <string.h>
using namespace std;

int convertirASCII(string c);
void ordIncersion(string[], int tam);

int main()
{
    string arreglo[5] = {"Juan", "julio", "Pablo", "Maria", "Claudia"};


    ordIncersion(arreglo, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << "Nombre: " << arreglo[i] << endl;
        cout << "Valor ascii: " << convertirASCII(arreglo[i]) << endl;
        cout << "  " << endl;
    }


    cin.get();
    return 0;
}

int convertirASCII(string s)
{
    int valor = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s.at(i);
        valor += int(c);
        //cout << c <<endl;
    }

    return valor;
}

void ordIncersion(string arr[], int tam)
{
    int i, valor, indice;
    string aux;

    for (int i = 0; i < tam; i++)
    {
        aux = arr[i];
        valor = convertirASCII(arr[i]);
        indice = i;

        while (indice > 0 && convertirASCII(arr[indice - 1]) > valor)
        {
            arr[indice] = arr[indice - 1];
            indice = indice - 1;
        }

        arr[indice] = aux;
    }
}

