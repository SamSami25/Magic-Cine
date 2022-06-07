#ifndef PRODUCTOA_H
#define PRODUCTOA_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class ProductoA
{
protected:
    int id;
    string nombre;
    float precio;

public:
    ProductoA();
    ProductoA(int id, string nombre, float precio);
        float getPrecio();
        virtual void mostrarInfo();
        string getNombre();
};

#endif // PRODUCTOA_H
