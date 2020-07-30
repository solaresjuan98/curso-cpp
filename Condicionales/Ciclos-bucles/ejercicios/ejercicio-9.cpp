//Factorial de un numero
//5! = 5*4*3*2*1
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numero, factorial = 1;

    cout<<"Digita un numero: ";
    cin>>numero;

    for(int i =1; i <=numero; i++){
        factorial *= i;
    }

    cout<<"El factorial es: "<<factorial;
    getch();
    return  0;
}