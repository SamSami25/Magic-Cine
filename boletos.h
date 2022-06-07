#ifndef BOLETOS_H
#define BOLETOS_H

#include <iostream>

using namespace std;

class Boletos
{
private:
    string nombre;
    int sala;
    int horah;
    int horas;
    string asiento;
    string pelicula;
public:
    Boletos();
    Boletos(string nombre);
    void boleto();
    void boleto2();
    void boleto3();
    void boleto4();
    void boleto5();
};

#endif // BOLETOS_H
