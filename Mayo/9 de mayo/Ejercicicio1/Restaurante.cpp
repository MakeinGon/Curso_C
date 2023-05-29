#include <iostream>
using namespace std;
class Restaurante
{
private:
    string nombre;
    string direccion;

public:
    Restaurante(string _nombre, string _direccion)
    {
        nombre = _nombre;
        direccion = _direccion;
    }
    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    string getDireccion()
    {
        return direccion;
    }
    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }
    string toStringInfoRestaurant()
    {
        return "Nombre:" + getNombre() + "--------Direccion:" + getDireccion();
    }
};