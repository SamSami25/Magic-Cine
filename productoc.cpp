#include "productoc.h"

ProductoC::ProductoC(int id, string nombre, float precio, vector<ProductoA *> subproductos) : ProductoA(id, nombre, precio)
{
    this->subproductos = subproductos;
}

void ProductoC::mostrarInfo()
{
    ProductoA::mostrarInfo();


    cout << "Contiene:" << endl;
    for (size_t i = 0; i < this->subproductos.size(); i++)
    {
        cout << "\t" << this->subproductos[i]->getNombre() << endl;
    }
}
