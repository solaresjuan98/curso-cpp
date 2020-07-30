
#include <iostream>
#include <conio.h>

using namespace std;

struct Etapa
{
    int horas;
    int minutos;
    int segundos;
} et[100];

int main()
{

    int num_etapas, horasT = 0, minutosT = 0, segundosT = 0;
    cout << "Digita el numero de etapas: ";
    cin >> num_etapas;

    for (int i = 0; i < num_etapas; i++)
    {
        //pidiendo los datos al usuario
        cout << "\n :::: ETAPA" << i + 1 << " :::: \n";
        cout << " - Horas: ";
        cin >> et[i].horas;
        cout << " - Minutos: ";
        cin >> et[i].minutos;
        cout << " - Segundos: ";
        cin >> et[i].segundos;

        horasT += et[i].horas;
        minutosT += et[i].minutos;

        if (minutosT >= 60)
        {
            minutosT -= 60;
            horasT++;
        }

        segundosT += et[i].segundos;

        if (segundosT >= 60)
        {
            segundosT -= 60;
            minutosT++;
        }

        cout << "\n";
    }

    cout << "\n ---- TIEMPO TOTAL EMPLEADO EN LA CARRERA ---- \n";
    cout << "   - Horas: " << horasT << endl;
    cout << "   - Minutos: " << minutosT << endl;
    cout << "   - Segundos: " << segundosT << endl;
    
    getch();
    return 0;
}