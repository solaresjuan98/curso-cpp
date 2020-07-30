#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){

    int i;

    i = 10;

    while (i>=1)
    {
        cout<<i<<endl;
        i--;

    }
    

    cout<<"\t ---- BUCLE DO WHILE ----";

    int iterator;
    iterator = 10;

    do{
        cout<<iterator<<endl;
        iterator--;
    }while (iterator >= 1);
    
    system("pause");
    //getch();
    //cin.ignore();
    //cin.get();
    return 0;
}