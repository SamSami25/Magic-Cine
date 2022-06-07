#include "facturacion.h"
#include "menu.h"

Menu m;

Facturacion::Facturacion()
{
    this->cantidadBoletos = 0;
    this->IVA = 0;
    this->nombre = " ";
    this->numeroCedula = 0;
    this->telefono = 0;
    this->direccion = " ";
    this->correoElectronico = " ";
    this->precio = 0;
    this->totalIVA = 0;
    this->subtotal = 0;
    this->total = 0;
}

Facturacion::Facturacion(int cantidadBoletos, string nombre, int numeroCedula, int telefono, string direccion, string correoElectronico) :
    cantidadBoletos(cantidadBoletos), nombre(nombre), numeroCedula(numeroCedula), telefono(telefono), direccion(direccion), correoElectronico(correoElectronico)
{

    this->cantidadBoletos = 0;
    this->IVA = 0;
    this->nombre = " ";
    this->numeroCedula = 0;
    this->telefono = 0;
    this->direccion = " ";
    this->correoElectronico = " ";
    this->precio = 0;
    this->totalIVA = 0;
    this->subtotal = 0;
    this->total = 0;

}

void Facturacion::ingresarDatos()
{
    cout << "Ingrese su nombre: " << endl;
    getline(cin >> ws, nombre);
    cout << "Ingrese su numero de cedula: " << endl;
    cin >> numeroCedula;
    cout << "Ingrese su numero de telefono: " << endl;
    cin >> telefono;
    cout << "Ingrese su direccion: " << endl;
    getline(cin >> ws, direccion);
    cout << "Ingrese su correo electronico: " << endl;
    getline(cin >> ws, correoElectronico);
    cout << "Ingrese la cantidad de boletos: " << endl;
    cin >> cantidadBoletos;

    Facturacion f(int cantidadBoletos, string nombre, int numeroCedula, int telefono, string direccion, string correoElectronico);

    subtotal = (cantidadBoletos * 3.15);
    IVA = subtotal * 0.5;
    total = IVA + subtotal;
}

string Facturacion::factura()
{
    string str = " Cliente: " + this->nombre + "\n" +
            " Cedula/Ruc: " + to_string(this->numeroCedula) + "\n" +
            " Telefono: " + to_string(this -> telefono) + "\n" +
            " Direccion: " + this->direccion + "\n" +
            " Correo Electonico: " + this->correoElectronico + "\n" +
            ///" Snacks: " + this->m.totalCompra() + "\n" +
            " Boletos: " + to_string(this->cantidadBoletos) + "\n" +
            " Subtotal: " + to_string(this->subtotal) + "\n" +
            " IVA: " + to_string(this->IVA) + "\n" +
            " Total de la Compra: " + to_string(this->total) + "\n\n";
            system("color a");
    return str;
}


