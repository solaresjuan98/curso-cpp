//suma de factoriales
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int n, factorial = 1, suma = 0;

    cout << "Ingresa un numero:  ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        suma += factorial;
    }

    

    cout << "La suma de factoriales es: " << suma << endl;

    getch();
    return 0;
}