#include "productoa.h"

ProductoA::ProductoA()
{
    this->id = 0;
    this->nombre = "";
    this->precio = 0;

}

ProductoA::ProductoA(int id, string nombre, float precio)
{
    this->id = id;
    this->nombre = nombre;
    this->precio = precio;
}

float ProductoA::getPrecio()
{
    return this->precio;
}

void ProductoA::mostrarInfo()
{
    cout << this->id << ". " << this->nombre << " [$ " << this->precio << "]" << endl;

}

string ProductoA::getNombre()
{
    return this->nombre;
}
