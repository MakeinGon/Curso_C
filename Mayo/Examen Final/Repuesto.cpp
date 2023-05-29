#include <iostream>
#include <string>
using namespace std;
class Repuesto
{
private: // atributos
    string nombreRepuesto;
    string fechaRegistro;
    int cantidad;
    string categoria;
    int vendido;
    int precio;

public: // metodos y funciones
    Repuesto(string _nombreRepuesto = "", string _fechaRegistro = "", int _cantidad = 0, string _categoria = "", int _vendido = 0, int _precio = 0)
    {
        nombreRepuesto = _nombreRepuesto;
        fechaRegistro = _fechaRegistro;
        cantidad = _cantidad;
        categoria = _categoria;
        vendido = _vendido;
        precio = _precio;
    }
    // getter
    string getNombreRepuesto()
    {
        return nombreRepuesto;
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
    string InfoRepuesto()
    {
        string info = "Repuesto:" + getNombreRepuesto() + "\t" + "\tFecha de registro:" + getFechaRegistro() + "\t" + "\tCantidad:" + to_string(getCantidad()) + "\t" + "\tCategoria:" + getCategoria();
        return info;
    }
};