#ifndef PRODUCTOB_H
#define PRODUCTOB_H

#include <vector>
#include <string>
#include <iostream>
#include "productoa.h"

class ProductoB: public ProductoA
{
public:
    ProductoB(int id, string nombre, float precio);
};

#endif // PRODUCTOB_H
