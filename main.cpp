#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <string>

#include "asientos.h"
#include "sala.h"
#include "pelicula.h"
#include "cine.h"
#include "facturacion.h"
#include "menu.h"
#include "boletos.h"

using namespace std;

int op;

Cine c("");
Sala salt("");
Asientos anc("");
int main (){

    cout<<"\n+ + MENU PRINCIPAL + +"<<endl;

    do {
        do {
            cout<<endl;
            system("color D");
            cout <<"\n = = = = = MI CINE = = = = = " << endl;
            cout << "1.  Mostrar Cartelera " << endl;
            cout << "2.  Mostrar Sala " << endl;
            cout << "3.  Comprar Boletos " << endl;
            cout << "4.  Salir " << endl;
            cout << "Ingrese una opcion: ";cin >> op;
            cout<<" "<<endl;

            if (op<1 || op>4){

                cout<<endl<<"Opcion incorrecta, intente otra vez."<<endl;
            }
        } while(op<1 || op>4);

        switch (op) {
        case 1:
            system("color b");
            c.mostrarCartelera();
            break;
        case 2:
            anc.casos();
            break;
        case 3:
            cout <<"\n - - - - BOLETOS - - - - " << endl;
            cout<<endl;
            salt.casos1();
            break;
            /*
        case 4:
            cout <<"\n - - - - DULCERIA - - - - " << endl;
            menu.dulceria();
            break;
        case 5:
            f.ingresarDatos();
            cout <<"\n - - - - FACTURACION - - - - " << endl;
            cout << f.factura();
            cout<<endl;
            break;
            */
        }


    } while(op!=4);

    cout<<endl;
    cout<<"Gracias por preferirnos!"<<endl;
    return 0;
}



