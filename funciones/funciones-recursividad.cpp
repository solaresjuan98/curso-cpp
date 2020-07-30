

#include <iostream>
#include <conio.h>

int factorial(int);

int main()
{
    std::cout << "- Factorial de: " << factorial(5) << std::endl;

    getch();
    return 0;
}

int factorial(int n)
{
    if (n == 0) // Caso base
    {
        n = 1;
    }
    else
    { // Caso general
        n = n * factorial(n - 1);
    }

    return n;
}