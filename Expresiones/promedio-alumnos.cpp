#include<iostream>

using namespace std;

int main(){

    //PROGRAMA QUE CALCULA LA NOTA FINAL DE CUATRO ALUMNOS
    float nota1, nota2, nota3, nota4, media = 0;

    cout<<"Ingrese la nota del primer alumno: "; cin>>nota1;
    cout<<"Ingrese la nota del segundo alumno: "; cin>>nota2;
    cout<<"Ingrese la nota del tercer almuno: "; cin>>nota3;
    cout<<"Ingrese la nota del cuarto alumno: "; cin>>nota4;

    media = (nota1+nota2+nota3+nota4)/4;

    cout<<"\nLa nota final media de los alumnos es: "<<media<<endl;

    cin.ignore();
    cin.get();
    return 0;
}