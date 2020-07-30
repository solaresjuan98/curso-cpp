#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int arreglo1[] = {1, 3, 4, 5, 6};
    int arreglo2[5];

    //copiando los elementos del arreglo1 multiplicados por 2 al arreglo 2
    for(int i = 0; i < 5; i++)
    {
        arreglo2[i] = arreglo1[i]*2;
    }

    //imprimiendo el arreglo2
    for(int i = 0; i <5; i++){
        cout<<" -> "<<arreglo2[i]<<endl;
    }


    getch();
    return 0;
}