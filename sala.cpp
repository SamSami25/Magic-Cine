#include "sala.h"
#include "boletos.h"
#include "facturacion.h"
#include "menu.h"


#include <iostream>
#include <stdlib.h>
#include <math.h>

#include <iostream>

Menu menu;
Facturacion f;

using namespace std;


Boletos b("");

Sala::Sala()
{
    this->nombre = "";
}

Sala::Sala(string nombre)
{
    this->nombre = nombre;
}


int Sala::imprimir1()
{
    cout<<"<< Seleccione los asientos >>"<<endl;
    cout<<" 1  2  3  4  5 "<<endl;
    for (int a=1; a<6; a++){
        for (int b=1; b<6; b++){
            cout<<" "<<cine[a][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


int Sala::imprimir()
{
    cout<<"<< Seleccione los asientos >>"<<endl;
    cout<<" 1  2  3  4  5 "<<endl;
    for (int a=1; a<6; a++){
        for (int b=1; b<6; b++){
            cout<<" "<<cine[a][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


int Sala::mattriz()
{
    for (int a=1; a<6; a++){
        for (int b=1; b<6; b++){
            cine[a][b]='O';
        }
    }
    imprimir1();
    cout<<endl;
    do {
        cout<<"Digite el numero de boletos a reservar: "; cin>>boletos;
        if (boletos<1 || boletos>10){
            cout<<"No es posible agregar este numero de asientos, intente otra vez."<<endl;
        }
    } while(boletos<1 || boletos>10);

    for (int c=1; c<=boletos; c++){
        do {
            cout<<endl;

            cout<<"Digite el asiento en el rango(A1 - A5 hasta E1 - E5): "; cin >> silla;

            string f1 = silla.substr(0, 1);
            string c1 = silla.substr(1, 2);
            if (f1 == "A")
            {
                f1 = "1";
            }
            else if (f1 == "B")
            {
                f1 = "2";
            }
            else if (f1 == "C")
            {
                f1 = "3";
            }
            else if (f1 == "D")
            {
                f1 = "4";
            }
            else if (f1 == "E")
            {
                f1 = "5";
            }
            else
            {
                f1 =  "6" ;
            }
            fila = stoi(f1);
            col = stoi(c1);

            if (fila<1 || col<1 || fila>5 || col>5){
                cout<<"Las coordenadas de su asiento son incorrectas."<<endl;
            }
            if (cine[fila][col]=='X'){
                cout<<"Este asiento ya esta ocupado, intente otra vez."<<endl;
            }

        } while(fila<1 || col<1 || fila>5 || col>5 || cine[fila][col]=='X');

        cine[fila][col]='X';
        cout<<endl;
        imprimir();
    }
    cout<<endl;
    cout<<"Asientos agregados satisfactoriamente!"<<endl;

    return 0;
}

int Sala::casos1()
{

    cout << "Ingrese el id de la Pelicula: ";
    int opcion = 0;
    cin >> opcion;

    switch(opcion)
    {
    case 1: cout << "\n1 - [10:30] El Rey Leon (90) * ESTRENO *";
        for (int a=1; a<6; a++){
            for (int b=1; b<6; b++){
                cine[a][b]='O';
            }
        }
        imprimir1();
        cout<<endl;
        do {
            cout<<"\nDigite el numero de boletos a reservar: "; cin>>boletos;
            if (boletos<1 || boletos>10){
                cout<<"No es posible agregar este numero de asientos, intente otra vez."<<endl;
            }
        } while(boletos<1 || boletos>10);

        for (int c=1; c<=boletos; c++){
            do {
                cout<<endl;

                cout<<"Digite el asiento en el rango(A1 - A5 hasta E1 - E5): "; cin >> silla;

                string f1 = silla.substr(0, 1);
                string c1 = silla.substr(1, 2);
                if (f1 == "A")
                {
                    f1 = "1";
                }
                else if (f1 == "B")
                {
                    f1 = "2";
                }
                else if (f1 == "C")
                {
                    f1 = "3";
                }
                else if (f1 == "D")
                {
                    f1 = "4";
                }
                else if (f1 == "E")
                {
                    f1 = "5";
                }
                else
                {
                    f1 =  "6" ;
                }
                fila = stoi(f1);
                col = stoi(c1);

                if (fila<1 || col<1 || fila>5 || col>5){
                    cout<<"Las coordenadas de su asiento son incorrectas."<<endl;
                }
                if (cine[fila][col]=='X'){
                    cout<<"Este asiento ya esta ocupado, intente otra vez."<<endl;
                }

            } while(fila<1 || col<1 || fila>5 || col>5 || cine[fila][col]=='X');

            cine[fila][col]='X';
            cout<<endl;
            imprimir1();
        }
        cout<<endl;
        cout<< boletos <<" asientos reservados"<<endl;
        b.boleto();
        cout <<"\n - - - - DULCERIA - - - - " << endl;
        menu.dulceria();

        return 0;
    case 2: cout << "\n2 - [11:00] El Exorcimos de Dios (157)";
        for (int a=1; a<6; a++){
            for (int b=1; b<6; b++){
                cine[a][b]='O';
            }
        }
        imprimir1();
        cout<<endl;
        do {
            cout<<"\nDigite el numero de boletos a reservar: "; cin>>boletos;
            if (boletos<1 || boletos>10){
                cout<<"No es posible agregar este numero de asientos, intente otra vez."<<endl;
            }
        } while(boletos<1 || boletos>10);

        for (int c=1; c<=boletos; c++){
            do {
                cout<<endl;

                cout<<"Digite el asiento en el rango(A1 - A5 hasta E1 - E5): "; cin >> silla;

                string f1 = silla.substr(0, 1);
                string c1 = silla.substr(1, 2);
                if (f1 == "A")
                {
                    f1 = "1";
                }
                else if (f1 == "B")
                {
                    f1 = "2";
                }
                else if (f1 == "C")
                {
                    f1 = "3";
                }
                else if (f1 == "D")
                {
                    f1 = "4";
                }
                else if (f1 == "E")
                {
                    f1 = "5";
                }
                else
                {
                    f1 =  "6" ;
                }
                fila = stoi(f1);
                col = stoi(c1);

                if (fila<1 || col<1 || fila>5 || col>5){
                    cout<<"Las coordenadas de su asiento son incorrectas."<<endl;
                }
                if (cine[fila][col]=='X'){
                    cout<<"Este asiento ya esta ocupado, intente otra vez."<<endl;
                }

            } while(fila<1 || col<1 || fila>5 || col>5 || cine[fila][col]=='X');

            cine[fila][col]='X';
            cout<<endl;
            imprimir();
        }
        cout<<endl;
        cout<< boletos <<" asientos reservados"<<endl;
        b.boleto2();
        cout <<"\n - - - - DULCERIA - - - - " << endl;
        menu.dulceria();
        break;
    case 3: cout << "\n3 - [09:15] Casa Fantasmas (124) * ESTRENO *";
        for (int a=1; a<6; a++){
            for (int b=1; b<6; b++){
                cine[a][b]='O';
            }
        }
        imprimir1();
        cout<<endl;
        do {
            cout<<"\nDigite el numero de boletos a reservar: "; cin>>boletos;
            if (boletos<1 || boletos>10){
                cout<<"No es posible agregar este numero de asientos, intente otra vez."<<endl;
            }
        } while(boletos<1 || boletos>10);

        for (int c=1; c<=boletos; c++){
            do {
                cout<<endl;

                cout<<"Digite el asiento en el rango(A1 - A5 hasta E1 - E5): "; cin >> silla;

                string f1 = silla.substr(0, 1);
                string c1 = silla.substr(1, 2);
                if (f1 == "A")
                {
                    f1 = "1";
                }
                else if (f1 == "B")
                {
                    f1 = "2";
                }
                else if (f1 == "C")
                {
                    f1 = "3";
                }
                else if (f1 == "D")
                {
                    f1 = "4";
                }
                else if (f1 == "E")
                {
                    f1 = "5";
                }
                else
                {
                    f1 =  "6" ;
                }
                fila = stoi(f1);
                col = stoi(c1);

                if (fila<1 || col<1 || fila>5 || col>5){
                    cout<<"Las coordenadas de su asiento son incorrectas."<<endl;
                }
                if (cine[fila][col]=='X'){
                    cout<<"Este asiento ya esta ocupado, intente otra vez."<<endl;
                }

            } while(fila<1 || col<1 || fila>5 || col>5 || cine[fila][col]=='X');

            cine[fila][col]='X';
            cout<<endl;
            imprimir();
        }
        cout<<endl;
        cout<< boletos <<" asientos reservados"<<endl;
        b.boleto3();
        cout <<"\n - - - - DULCERIA - - - - " << endl;
        menu.dulceria();
        break;
    case 4: cout << "\n4 - [12:15] Spiderman No Way Home (120) * ESTRENO *";
        for (int a=1; a<6; a++){
            for (int b=1; b<6; b++){
                cine[a][b]='O';
            }
        }
        imprimir1();
        cout<<endl;
        do {
            cout<<"\nDigite el numero de boletos a reservar: "; cin>>boletos;
            if (boletos<1 || boletos>10){
                cout<<"No es posible agregar este numero de asientos, intente otra vez."<<endl;
            }
        } while(boletos<1 || boletos>10);

        for (int c=1; c<=boletos; c++){
            do {
                cout<<endl;

                cout<<"Digite el asiento en el rango(A1 - A5 hasta E1 - E5): "; cin >> silla;

                string f1 = silla.substr(0, 1);
                string c1 = silla.substr(1, 2);
                if (f1 == "A")
                {
                    f1 = "1";
                }
                else if (f1 == "B")
                {
                    f1 = "2";
                }
                else if (f1 == "C")
                {
                    f1 = "3";
                }
                else if (f1 == "D")
                {
                    f1 = "4";
                }
                else if (f1 == "E")
                {
                    f1 = "5";
                }
                else
                {
                    f1 =  "6" ;
                }
                fila = stoi(f1);
                col = stoi(c1);

                if (fila<1 || col<1 || fila>5 || col>5){
                    cout<<"Las coordenadas de su asiento son incorrectas."<<endl;
                }
                if (cine[fila][col]=='X'){
                    cout<<"Este asiento ya esta ocupado, intente otra vez."<<endl;
                }

            } while(fila<1 || col<1 || fila>5 || col>5 || cine[fila][col]=='X');

            cine[fila][col]='X';
            cout<<endl;
            imprimir();
        }
        cout<<endl;
        cout<< boletos <<" asientos reservados"<<endl;
        b.boleto4();
        cout <<"\n - - - - DULCERIA - - - - " << endl;
        menu.dulceria();
        break;
    case 5: cout << "\n5 - [18:30] Chernobil (135)";
        for (int a=1; a<6; a++){
            for (int b=1; b<6; b++){
                cine[a][b]='O';
            }
        }
        imprimir1();
        cout<<endl;
        do {
            cout<<"\nDigite el numero de boletos a reservar: "; cin>>boletos;
            if (boletos<1 || boletos>10){
                cout<<"No es posible agregar este numero de asientos, intente otra vez."<<endl;
            }
        } while(boletos<1 || boletos>10);

        for (int c=1; c<=boletos; c++){
            do {
                cout<<endl;

                cout<<"Digite el asiento en el rango(A1 - A5 hasta E1 - E5): "; cin >> silla;

                string f1 = silla.substr(0, 1);
                string c1 = silla.substr(1, 2);
                if (f1 == "A")
                {
                    f1 = "1";
                }
                else if (f1 == "B")
                {
                    f1 = "2";
                }
                else if (f1 == "C")
                {
                    f1 = "3";
                }
                else if (f1 == "D")
                {
                    f1 = "4";
                }
                else if (f1 == "E")
                {
                    f1 = "5";
                }
                else
                {
                    f1 =  "6" ;
                }
                fila = stoi(f1);
                col = stoi(c1);

                if (fila<1 || col<1 || fila>5 || col>5){
                    cout<<"Las coordenadas de su asiento son incorrectas."<<endl;
                }
                if (cine[fila][col]=='X'){
                    cout<<"Este asiento ya esta ocupado, intente otra vez."<<endl;
                }

            } while(fila<1 || col<1 || fila>5 || col>5 || cine[fila][col]=='X');

            cine[fila][col]='X';
            cout<<endl;
            imprimir();
        }
        cout<<endl;
        cout<< boletos <<" asientos reservados"<<endl;
        b.boleto5();
        cout <<"\n - - - - DULCERIA - - - - " << endl;
        menu.dulceria();
        break;
    default: cout << "Usted ha ingresado una opción incorrecta";
    }
    // system("PAUSE");

    return 0;

}
