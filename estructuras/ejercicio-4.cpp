
#include <iostream>
#include <conio.h>

using namespace std;

struct Atleta
{
    char nombre[25];
    char pais[20];
    int numero_medallas;
} atl[100];

int main()
{

    int num_atletas, pos_mayor = 0, atl_mas_medallas = 0;

    cout << "Ingresa la cantidad de atletas: ";
    cin >> num_atletas;
    cout << "\n";

    for (int i = 0; i < num_atletas; i++)
    {
        fflush(stdin);
        cout << "---- ATLETA#" << i + 1 << " ----\n";
        cout << " - Digita el nombre del atleta: ";
        cin.getline(atl[i].nombre, 25, '\n');
        cout << " - Medallas ganadas: ";
        cin >> atl[i].numero_medallas;
        cout << " - Pais de origen: ";
        cin >> atl[i].pais;

        //Determinando atleta con más medallas
        if (atl[i].numero_medallas > atl_mas_medallas)
        {
            atl_mas_medallas = atl[i].numero_medallas;
            pos_mayor = i;
        }

        cout << "\n";
    }

    cout << "\nDatos del atleta con mas medallas: \n";
    cout << "   - Nombre de atleta: " << atl[pos_mayor].nombre << endl;
    cout << "   - Numero de medallas: " << atl[pos_mayor].numero_medallas << endl;
    cout << "   - Pais de origen: " << atl[pos_mayor].pais << endl;

    getch();
    return 0;
}