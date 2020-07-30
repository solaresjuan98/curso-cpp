/**/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float cat_opuesto, cat_adyacente, hipotenusa = 0;

    cout <<"Ingresa el cateto opuesto: "; cin>>cat_opuesto;
    cout <<"Ingresa el cateto adyacente: "; cin>>cat_adyacente;

    hipotenusa = sqrt(pow(cat_opuesto,2)+pow(cat_adyacente,2));

    cout <<"\nEl valor de la hipotenusa es: "<<hipotenusa;
    cout <<"\n";
    cout <<"---------------";

    cin.ignore();
    cin.get();
    return 0;
}