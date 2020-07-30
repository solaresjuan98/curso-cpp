#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
    char palabra[] = "PROGRAMACION ABC";

    strlwr(palabra);

    cout << palabra << endl;

    getch();
    return 0;
}