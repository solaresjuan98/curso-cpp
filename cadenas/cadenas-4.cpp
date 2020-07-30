
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

    char palabra1[] = "beccerro";
    char palabra2[] = "hola";

    if (strcmp(palabra1, palabra2) < 0) // palabra 1 es mayor a palabra 2
    {
        cout << palabra1 << " esta despues alfabeticamente";
    }

    getch();
    return 0;
}