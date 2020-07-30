#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[] = {1, 2, 3, 4, 5, 6, 7};
    int multiplicacion = 1;


    for (int i = 0; i < 7; i++)
    {
        multiplicacion *= numeros[i];
    }

    cout<<"La multiplicacion de los elementos es de: "<<multiplicacion<<endl;


    

    getch();
    return 0;
}