
#include <iostream>
#include <conio.h>

using namespace std;

int hallarMax(int *, int); // Prototipo de función

int main()
{
    const int nElementos = 5;
    int numeros[nElementos] = {3, 12, 2, 8, 1};

    cout << " El mayor elementos es: " << hallarMax(numeros, nElementos);

    getch();
    return 0;
}

int hallarMax(int *dirVec, int nElementos)
{
    int max = 0;

    for (int i = 0; i < nElementos; i++)
    {
        if (*(dirVec + i) > max)
        {
            max = *(dirVec + i);
        }
    }

    return max;
}