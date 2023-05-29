#include <iostream>
#include <string>
#include "Repuesto.cpp"
#include "Moto.cpp"
#include "Empleado.cpp"
#include "Cliente.cpp"
using namespace std;
class Tienda
{
private: // atributos
    string nombre_tienda;
    string direccion;
    string numero;

public: // metodos y funciones
    Tienda(string _nombre_tienda = "", string _direccion = "", string _numero = "")
    {
        nombre_tienda = _nombre_tienda;
        direccion = _direccion;
        numero = _numero;
    }
    // getter
    string getNombre_tienda()
    {
        return nombre_tienda;
    }
    string getDireccion()
    {
        return direccion;
    }
    string getNumero()
    {
        return numero;
    }
    string infoTienda()
    {
        return "Moto repuestos " + getNombre_tienda() + "||" + getDireccion() + "||" + " Telef:" + getNumero();
    }
};