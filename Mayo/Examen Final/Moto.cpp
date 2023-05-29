#include <iostream>
#include <string>
using namespace std;
class Moto
{
private: // atributos
    string marca;
    string fechaRegistro;
    int cantidad;
    string categoria;
    int vendido;
    int precio;

public:
    // metodos y funciones
    Moto(string _marca = "", string _fechaRegistro = "", int _cantidad = 0, string _categoria = "", int _vendido = 0, int _precio = 0)
    {
        marca = _marca;
        fechaRegistro = _fechaRegistro;
        cantidad = _cantidad;
        categoria = _categoria;
        vendido = _vendido;
        precio = _precio;
    }
    // getter
    string getMarca()
    {
        return marca;
    }
    string getFechaRegistro()
    {
        return fechaRegistro;
    }
    int getCantidad()
    {
        return cantidad;
    }
    string getCategoria()
    {
        return categoria;
    }
    int getVendido()
    {
        return vendido;
    }

    int getPrecio()
    {
        return precio;
    }
    string InfoMoto()
    {
        return "Moto:" + getMarca() + "\t" + "\tFecha de registro:" + getFechaRegistro() + "\t" + "\tCantidad: " + to_string(getCantidad()) + "\t" + "\tCategoria: " + getCategoria();
    }
};