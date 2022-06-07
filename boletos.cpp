#include "boletos.h"
#include "sala.h"

Sala s("");

Boletos::Boletos()
{
    this->nombre = "";
    this->sala = 0;
    this->horah = 0;
    this->horas = 0;
    this->asiento = "";
    this->pelicula = "";
}

Boletos::Boletos(string nombre)
{
    this->nombre = nombre;
}

void Boletos::boleto()
{
    cout << endl;
    cout << "Sala: 1"<<endl;
    cout << "Hora: 10:30"<<endl;
    cout << "Asiento: "<<endl;
    cout << "Pelicula: El Rey Leon"<<endl;
}

void Boletos::boleto2()
{
    cout << endl;
    cout << "Sala: 1"<<endl;
    cout << "Hora: 11:00"<<endl;
    cout << "Asiento: "<<endl;
    cout << "Pelicula: El Exorcimos de Dios"<<endl;
}

void Boletos::boleto3()
{
    cout << endl;
    cout << "Sala: 1"<<endl;
    cout << "Hora: 09:15"<<endl;
    cout << "Asiento: "<<endl;
    cout << "Pelicula: Casa Fantasmas"<<endl;
}

void Boletos::boleto4()
{
    cout << endl;
    cout << "Sala: 1"<<endl;
    cout << "Hora: 12:15"<<endl;
    cout << "Asiento: "<<endl;
    cout << "Pelicula: Spiderman No Way Home"<<endl;
}

void Boletos::boleto5()
{
    cout << endl;
    cout << "Sala: 1"<<endl;
    cout << "Hora: 18:30"<<endl;
    cout << "Asiento: "<<endl;
    cout << "Pelicula: Chernobil"<<endl;
}
