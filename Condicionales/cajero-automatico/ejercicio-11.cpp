#include <iostream>
using namespace std;

int main()
{
    int saldo_inicial = 1000, opc;
    float extra, saldo = 0, retiro;

    cout << "\t----- Bienvenido a su cajero automatico virtual -----" << endl;

    cout << "1. Ingresar dinero en cuenta:"<<endl;
    cout << "2. Retirar dinero de la cuenta:"<<endl;
    cout << "3. Salir"<<endl;
    cout << "Elige una opción..."<<endl;

    cin >> opc;

    switch (opc)
    {
    case 1:
        cout<<"Digite la cantidad de dinero a ingresar: ";
        cin>>extra;

        saldo = saldo_inicial + extra;
        cout<<"Dinero en cuenta:  "<<saldo<<endl;
        break;
    case 2:
        cout <<"Digite la cantidad de dinero que va a retirar: ";
        cin>>retiro;

        if(retiro > saldo_inicial){
            cout<<"Lo que desea retirar es mayor a su saldo actual.";
        }else{
            saldo = saldo_inicial-retiro;
            cout<<"Su dinero en cuenta es:  "<<saldo<<endl;
        }
        
        break;
    case 3:

        break;
    }

    cin.ignore();
    cin.get();
    return 0;
}