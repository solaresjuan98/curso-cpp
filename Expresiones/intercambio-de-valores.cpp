#include<iostream>
using namespace std;

int main(){

    int x, y, aux;

    cout<<"Digite el valor de x "; cin>>x;
    cout<<"Digite el valor de y "; cin>>y;

    /*
        x = 10
        y = 5
    */

   aux = x;
   x = y;
   y = aux;
    /*
        aux = valor de x
        x = valor de y
        y = valor de aux
    */

   cout<<"\n El nuevo valor de x es:  "<<x<<endl;
   cout<<"\n El nuevo valor de y es:  "<<y<<endl;

    cin.ignore();
    cin.get();

    return 0;
}