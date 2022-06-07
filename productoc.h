#ifndef PRODUCTOC_H
#define PRODUCTOC_H

#include <vector>
#include <string>
#include <iostream>

#include "productoa.h"

class ProductoC:public ProductoA
{
private:
    vector<ProductoA *> subproductos;
public:
    ProductoC(int id, string nombre, float precio, vector<ProductoA *> subproductos);
    virtual void mostrarInfo();
};

#endif // PRODUCTOC_H
