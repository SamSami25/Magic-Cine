#ifndef ASIENTOS_H
#define ASIENTOS_H

#include<cine.h>

class Asientos : public Cine
{
private:
    string nombre;
public:
    Asientos();
    Asientos(string nombre);
    char cine[6][6];
    int casos();
    int imprimir1();
    int imprimir2();
    int imprimir3();
    int imprimir4();
    int imprimir5();
};

#endif // SALA_H
