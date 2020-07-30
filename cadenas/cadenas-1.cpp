
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

    char palabra[] = "Juan";
    char palabra2[] = {'J', 'u', 'a', 'n'};
    char nombre[20];

    cout << "Digita tu nombre:  ";
    cin.getline(nombre, 20, '\n');

    cout << nombre << endl;

    getch();
    return 0;
}