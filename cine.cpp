#include "cine.h"

Cine::Cine()
{
    this->nombre = "";
    this->generarDatos();
}

Cine::Cine(string nombre)
{
    this->nombre = nombre;
    this->generarDatos();
}

void Cine::generarDatos()
{
    system("color b");
    this->cartelera.push_back(Pelicula(1, "El Rey Leon", 90,   true,   "10:30"));
    this->cartelera.push_back(Pelicula(2, "El Exorcimos de Dios",157,  false,  "11:00"));
    this->cartelera.push_back(Pelicula(3, "Casa Fantasmas", 124,  true,   "09:15"));
    this->cartelera.push_back(Pelicula(4, "Spiderman No Way Home", 120,  true,   "12:15"));
    this->cartelera.push_back(Pelicula(5, "Chernobil", 135,  false,   "18:30"));

}

void Cine::mostrarCartelera()
{
    cout <<"\n - - - - CARTELERA - - - -\n " << endl;
    cout <<"\n*APARTADO PUBLICITARIO* (disponible)\n " << endl;
    for (size_t i = 0; i < this->cartelera.size(); i++)
        this->cartelera[i].mostrarInfo();

}
