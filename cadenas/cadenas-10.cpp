/* leer una cadena de caracteres de la entrada estandar y 
 que muestre en la salida cuantas ocurrencias de cada vocal existen en la cadena*/

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{

    char frase[30];
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

    cout << "Digita una frase:  ";
    cin.getline(frase, 30, '\n');

    for (int i = 0; i < 30; i++)
    {

        switch (frase[i])
        {      
        case 'a':
            vocal_a++;
            break;
        case 'e':
            vocal_e++;
            break;
        case 'i':
            vocal_i++;
            break;
        case 'o':
            vocal_o++;
            break;
        case 'u':
            vocal_u++;
            break;

        }
    }


    cout<<"Vocal a:  "<<vocal_a<<endl;
    cout<<"Vocal e:  "<<vocal_e<<endl;
    cout<<"Vocal i:  "<<vocal_i<<endl;
    cout<<"Vocal o:  "<<vocal_o<<endl;
    cout<<"Vocal u:  "<<vocal_u<<endl;

    getch();
    return 0;
}