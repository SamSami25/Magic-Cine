#ifndef SALA_H
#define SALA_H
#include <iostream>
using namespace std;
class Sala
{
private:
    string nombre;
    int op;
    int boletos;
    int fila;
    int col;
    string silla;
public:
    Sala();
    Sala(string nombre);
    char cine[6][6];
    int imprimir();
    int imprimir1();
    int casos1();
    int mattriz();
    void setSilla(const string &newSilla);
};

#endif // SALA_H
