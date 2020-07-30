#include<iostream>
using namespace std;

int main(){

    float practica, teorica, participacion, nota_final = 0;

    cout <<"Digite la nota de practica: "; cin>>practica;
    cout <<"Digite la nota teórica: "; cin>>teorica;
    cout <<"Digite la nota de participación: "; cin>>participacion;

    practica *= 0.3;//es lo mismo que practica = practica * 0.30
    teorica *= 0.6;
    participacion *=0.1;

    nota_final = practica + teorica + participacion;

    cout <<"\n\n***La nota final es:"<<nota_final<<endl;


    cin.ignore();
    cin.get();
    return 0;
}