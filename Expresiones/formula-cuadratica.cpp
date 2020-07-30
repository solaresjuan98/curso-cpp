#include<iostream>
#include<math.h>
using namespace std;


int main(){

    float a, b, c, x1, x2 = 0;

    cout<<"Ingrese el valor a: "; cin>> a;
    cout<<"Ingrese el valor b: "; cin>> b;
    cout<<"Ingrese el valor c: "; cin>> c;


    x1 =(-b+sqrt(pow(b, 2)-(4*a*c)))/(2*a);
    x2 =(-b-sqrt(pow(b, 2)-(4*a*c)))/(2*a);


    cout<<"\nEl valor de x1 es: "<<x1<<endl;
    cout<<"\nEl valor de x2 es: "<<x2<<endl;

    cin.ignore();
    cin.get();

    return 0;

}