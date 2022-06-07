#include "pelicula.h"
#include "cine.h"


Pelicula::Pelicula()
{
    this->nombre = "";
    this->id = 0;
    this->titulo = "";
    this->duracion = 0.0;
    this->estreno = false;
    this->hora = "";
}

Pelicula::Pelicula(string nombre)
{
    this->nombre = nombre;
}

Pelicula::Pelicula(int id, string titulo, int duracion, bool estreno, string hora):
    id(id), titulo(titulo), duracion(duracion), estreno(estreno), hora(hora)
{



}

void Pelicula::mostrarInfo()
{
         cout << this->id << " - [" << this->hora
         << "] " << this->titulo << " (" << duracion << ") "
         << (this->estreno ? "* ESTRENO *" : "" ) << endl;

}

string Pelicula::getTitulo()
{
    return this->titulo;
}

string Pelicula::getHora()
{
    return this->hora;
}

