#include "menu.h"
#include "facturacion.h"

Facturacion t;

void Menu::generarDatos()
{
    ProductoA *canguil = new ProductoB(1, "Canguil", (float)3.5);
    ProductoA *nachos = new ProductoB(2, "Nachos", (float)4);
    ProductoA *gaseosa = new ProductoB(3, "Gaseosa", (float)2.75);

    this->productos.push_back(canguil);
    this->productos.push_back(nachos);
    this->productos.push_back(gaseosa);

    ProductoA *comboIndividual = new ProductoC(4, "Combo individual", float(8), {canguil, gaseosa, nachos});
    ProductoA *comboEconomico = new ProductoC(5, "Combo economico", float(6), {canguil, gaseosa});

    this->productos.push_back(comboIndividual);
    this->productos.push_back(comboEconomico);
}

Menu::Menu()
{
    this->generarDatos();
}

int Menu::activarMenu()
{
    int op;
    cout<<endl;
    cout<< "1. Mostrar Menu" <<endl;
    cout<< "2. Comprar productos" <<endl;
    cout << "3. Salir" <<endl ;
    cout<<endl;
    do
    {
        cout << "Seleccione una opcion:" << endl;
        cin >> op;
        cout << "\n";
        if (op < 1 || op > 3)
            cout << "Opcion invalida, intente de nuevo" << endl;

    } while (op < 1 || op > 3);
    return op;

}

void Menu::comprarProductos()
{

    int op;
    char salir;
    float totalCompra = 0;
    vector<ProductoA *> carrito;

    do
    {
        do
        {
            cout << "Ingrese el id del producto: " << endl;
            cin >> op;

            if (op < 1 || op > int(this->productos.size()))
                cout << "Seleccion invalida, intente de nuevo" << endl
                     << endl;
        } while (op < 1 || op > int(this->productos.size()));

        totalCompra += this->productos[op - 1]->getPrecio();
        carrito.push_back(this->productos[op - 1]);
        cout << "Producto agregado al carrito con exito" << endl;
        cout << "Presione 's' para comprar otro producto o cualquier otra tecla para salir: " << endl;
        cin >> salir;

    } while (salir == 's' || salir == 'S');

    cout << "RESUMEN DE COMPRA" << endl;

    for (size_t i = 0; i < carrito.size(); i++)
    {
        carrito[i]->mostrarInfo();
    }

    cout << "Total: $ " << totalCompra << endl;
}

void Menu::mostrarMenu()
{
    cout << "=== SNAKS==" << endl;
    cout<<endl;
    for (size_t i = 0; i < productos.size(); i++)
    {
        this->productos[i]->mostrarInfo();
    }


}

void Menu::dulceria()
{

    int op;
    do
    {
        op = this->activarMenu();
        switch (op)
        {
        case 1:
            this->mostrarMenu();
            break;

        case 2:
            this->comprarProductos();
            break;
        case 3:
            t.ingresarDatos();
            cout <<"\n - - - - FACTURACION - - - - " << endl;
            cout << t.factura();
            cout<<endl;
            break;
        default:
            cout << "Error, ingrese una opcion.";
        }
    } while (op != 4);

}
