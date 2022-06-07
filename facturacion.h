#ifndef FACTURACION_H
#define FACTURACION_H

#include <iostream>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Facturacion{

private:
    int cantidadBoletos;
    float IVA;
    string nombre;
    int numeroCedula;
    int telefono;
    string direccion;
    string correoElectronico;

    float precio;
    float totalIVA;
    float subtotal;
    float total;

public:
    Facturacion();
    Facturacion(int cantidadBoletos, string nombre, int numeroCedula, int telefono, string direccion, string correoElectronico);
    float CalcularIva();
    string factura();
    void ingresarDatos();

};

#endif // FACTURACION_H
