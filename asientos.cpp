#include "asientos.h"

Asientos::Asientos()
{
    this->nombre = "";
}

Asientos::Asientos(string nombre)
{
    this->nombre = nombre;
}

int Asientos::casos()
{


    cout << "\nIngrese el id de la Pelicula: ";
    int opcion = 0;
    cin >> opcion;

    switch(opcion)
    {
    case 1: cout << "\n1 - [10:30] El Rey Leon (90) * ESTRENO *";
        cout <<"\n - - - - ASIENTOS - - - - " << endl;
        imprimir1();
                break;
    case 2: cout << "\n2 - [11:00] El Exorcimos de Dios (157)";
        cout <<"\n - - - - ASIENTOS - - - - " << endl;
        imprimir2();
                break;
    case 3: cout << "\n3 - [09:15] Casa Fantasmas (124) * ESTRENO *";
        cout <<"\n - - - - ASIENTOS - - - - " << endl;
        imprimir3();
                break;
    case 4: cout << "\n4 - [12:15] Spiderman No Way Home (120) * ESTRENO *";
        cout <<"\n - - - - ASIENTOS - - - - " << endl;
        imprimir4();
                break;
    case 5: cout << "\n5 - [18:30] Chernobil (135)";
        cout <<"\n - - - - ASIENTOS - - - - " << endl;
        imprimir5();
        break;
    default: cout << "Usted ha ingresado una opción incorrecta";
    }

    return 0;

}


int Asientos::imprimir1()
{
    char cine[6][6];
    cout<<" 1  2  3  4  5 "<<endl;

    for (int a=1; a<6; a++){
        for (int b=1; b<6; b++){
            cine[a][b]='O';
            cout<<" "<<cine[a][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int Asientos::imprimir2()
{
    char cine[6][6];
    cout<<" 1  2  3  4  5 "<<endl;

    for (int a=1; a<6; a++){
        for (int b=1; b<6; b++){
            cine[a][b]='O';
            cout<<" "<<cine[a][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int Asientos::imprimir3()
{
    char cine[6][6];
    cout<<" 1  2  3  4  5 "<<endl;

    for (int a=1; a<6; a++){
        for (int b=1; b<6; b++){
            cine[a][b]='O';
            cout<<" "<<cine[a][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int Asientos::imprimir4()
{
    char cine[6][6];
    cout<<" 1  2  3  4  5 "<<endl;

    for (int a=1; a<6; a++){
        for (int b=1; b<6; b++){
            cine[a][b]='O';
            cout<<" "<<cine[a][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int Asientos::imprimir5()
{
    {
        char cine[6][6];
        cout<<" 1  2  3  4  5 "<<endl;

        for (int a=1; a<6; a++){
            for (int b=1; b<6; b++){
                cine[a][b]='O';
                cout<<" "<<cine[a][b]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
}





