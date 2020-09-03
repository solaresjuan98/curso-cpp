
#include <iostream>
#include <conio.h>
#include <string.h>
#include "persona.h"
using namespace std;

int main()
{
    
    Persona persona = Persona();
    persona.setData(12, "Juan");
    cout << " Nombre: "<<persona.getName()<<endl;
    cout << " ID: "<<persona.getID()<<endl;
    persona.getLocation();
    cout << " \n";

    Persona persona2 = Persona();
    persona2.setData(13, "Ana");
    cout << " Nombre: "<<persona2.getName()<<endl;
    cout << " ID: "<<persona2.getID()<<endl;
    persona2.getLocation();
    cout << " \n";

    Persona persona3 = Persona();
    persona3.setData(14, "Maria");
    cout << " Nombre: "<<persona3.getName()<<endl;
    cout << " ID: "<<persona3.getID()<<endl;
    persona3.getLocation();
    cout << " \n";

    Persona persona4 = Persona();
    persona4.setData(15, "Julio");
    cout << " Nombre: "<<persona4.getName()<<endl;
    cout << " ID: "<<persona4.getID()<<endl;
    persona4.getLocation();
    cout << " \n";

    
    
    getch();
    return 0;
}