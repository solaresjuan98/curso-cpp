#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int numero;

    do
    {
        cout << "Ingresa un numero entre 1 y 10:  ";
        cin>>numero;
    } while ((numero < 1) || (numero > 10));


    for(int i = 1; i <= 20; i++){
        cout<<numero<<" * "<<i<< " = "<<numero*i<<endl;
    }
    
    getch();
    return 0;

}