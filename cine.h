#ifndef CINE_H
#define CINE_H

#include <vector>
#include <string>
#include <iostream>

#include "pelicula.h"

using namespace std;

class Cine : public Pelicula
{
private:
    string nombre;
    vector<Pelicula> cartelera;

public:
    Cine();
    Cine(string nombre);
    void generarDatos();
    void mostrarCartelera();

};

#endif
