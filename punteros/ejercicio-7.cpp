
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

//Prototipo de función
void pedirDatos();
int contarVocales(char *);

char nombreUsuario[30];

int main()
{
    pedirDatos();
    cout << "\nEl numero de vocales del nombre es: "<<contarVocales(nombreUsuario)<<endl;
    //nombreUsuario =&nombreUsuario[0] --- ¡ES LO MISMO!
    getch();
    return 0;
}

void pedirDatos()
{
    cout << "Digita tu nombre: ";
    cin.getline(nombreUsuario, 30, '\n');

    strupr(nombreUsuario); //transformando a mayusucula el nombre
}

int contarVocales(char *nombre)
{
    int cont = 0;

    while (*nombre) //mientras nombre no sea nulo
    {
     
        switch (*nombre)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cont++;
            break;
        }
        nombre++;
    }

    return cont;
}