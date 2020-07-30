// programa que calcula el valor de: 2^1+2^2+2^3+....+2^4


#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){

    int suma = 0, elevacion = 0, n;


    cout<<"Digita el numero de elementos a sumar ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
       elevacion = pow(2,i);
       suma += elevacion;
    }
    

    cout<<"\nLa suma total es:  "<<suma<<endl;


    getch();
    return 0;
}