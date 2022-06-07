#ifndef PELICULA_H
#define PELICULA_H

#include <string>
#include<vector>
#include <iostream>

using namespace std;

class Pelicula
{
private:
    string nombre;
    int id;
    string titulo;
    int duracion;
    bool estreno;
    string hora;

public:
    Pelicula();
    Pelicula(string nombre);
    Pelicula(int id, string titulo, int duracion, bool estreno, string hora);
    string getTitulo();
    string getHora();
    void mostrarInfo();
};

#endif
