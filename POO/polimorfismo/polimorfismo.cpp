
#include <iostream>
#include <stdlib.h>
#include "persona.h"
#include "alumno.h"
#include "profesor.h"
using namespace std;

int main()
{

    Persona *vector[3];

    vector[0] = new Alumno("Juan", 21, 99);
    vector[1] = new Profesor("Luis", 47, "Matematica");
    vector[2] = new Alumno("Claudia", 21, 45);
    vector[3] = new Alumno("Alejandra", 21, 45);

    
    for (int i = 0; i <= 3; i++)
    {
        vector[i]->mostrar();
        cout << "\n\n";
    }
    


    system("pause");
    return 0;
}