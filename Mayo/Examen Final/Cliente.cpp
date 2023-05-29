#include <iostream>
#include <string>
using namespace std;
class Cliente
{
private: // atributos
    string nombre;
    string apellido;
    string direccion;
    string telefono;
    int compras;
    string fecha_consumo;

public: // metodos y funciones
    Cliente(string _nombre = "", string _apellido = "", string _direccion = "", string _telefono = "", int _compras = 0, string _fecha_consumo = "")
    {
        nombre = _nombre;
        apellido = _apellido;
        direccion = _direccion;
        telefono = _telefono;
        compras = _compras;
        fecha_consumo = _fecha_consumo;
    }
    // getter
    string getNombre()
    {
        return nombre;
    }
    string getApellido()
    {
        return apellido;
    }
    string getDireccion()
    {
        return direccion;
    }
    string getTelefono()
    {
        return telefono;
    }
    int getCompras()
    {
        return compras;
    }
    string getFecha_consumo()
    {
        return fecha_consumo;
    }
    string InfoCliente()
    {
        return getNombre() + " " + getApellido() + "\t" + "\t Cantidad de compras: " + to_string(getCompras()) + "\t" + "\t Fecha de compra:" + getFecha_consumo();
    }
};