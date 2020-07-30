#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    float temp1, temp2, temp3, temp4, temp5, temp6, temp_mayor, temp_menor, media = 0;

    cout << "Ingresa la primera temperatura: ";
    cin >> temp1;
    temp_mayor = temp1;
    temp_menor = temp1;

    cout << "Ingresa la segunda temperatura: ";
    cin >> temp2;

    if (temp2 > temp_mayor)
    {
        temp_mayor = temp2;
        temp_menor = temp1;
    }
    else if (temp2 < temp1)
    {
        temp_menor = temp2;
    }

    cout << "Ingresa la tercera temperatura: ";
    cin >> temp3;

    if (temp3 > temp_mayor)
    {
        temp_mayor = temp3;
    }
    else if (temp3 < temp2 && temp3 < temp1)
    {
        temp_menor = temp3;
    }

    cout << "Ingresa la cuarta temperatura: ";
    cin >> temp4;

    if (temp4 > temp_mayor)
    {
        temp_mayor = temp4;
    }
    else if (temp4 < temp3 && temp4 < temp2 && temp4 < temp1)
    {
        temp_menor = temp4;
    }

    cout << "Ingresa la quinta temperatura: ";
    cin >> temp5;

    if (temp5 > temp_mayor)
    {
        temp_mayor = temp5;
    }
    else if (temp5 < temp4 && temp5 < temp3 && temp5 < temp2 && temp5 < temp1)
    {
        temp_menor = temp5;
    }

    cout << "Ingresa la sexta temperatura: ";
    cin >> temp6;

    if (temp6 > temp_mayor)
    {
        temp_mayor = temp6;
    }
    else if (temp6 < temp5 && temp6 < temp4 && temp6 < temp3 && temp6 < temp2 && temp6 < temp1)
    {
        temp_menor = temp6;
    }

    media = (temp1 + temp2 + temp3 + temp4 + temp5 + temp6) / 6;

    cout << "La temperatura media del dia es: " << media << endl;
    cout << "La temperatura mas alta del dia es de:  " << temp_mayor << endl;
    cout << "La temperatura mas baja del dia es de:  " << temp_menor << endl;

    getch();
    return 0;
}