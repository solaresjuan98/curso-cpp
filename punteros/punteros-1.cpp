/* Punteros - Declaración de punteros

&n = la dirección de n
*n = la variable cuya dirección está almacenada en n

*/

#include <iostream>
#include <conio.h>

int main()
{
    int num, *dir_num;
    num = 20;
    dir_num = &num;

    std::cout << "Numero: " << *dir_num << std::endl;
    std::cout << "Direccion de memoria: " << dir_num << std::endl;

    getch();
    return 0;
}