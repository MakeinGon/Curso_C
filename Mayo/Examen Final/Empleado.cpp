#include <iostream>
#include <string>
using namespace std;
class Empleado
{
private: // atributos
    string nombre;
    string apellido;
    string cargo;
    string tiempo;

public: // metodos y funciones
    Empleado(string _nombre = "", string _apellido = "", string _cargo = "", string _tiempo = "")
    {
        nombre = _nombre;
        apellido = _apellido;
        cargo = _cargo;
        tiempo = _tiempo;
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
    string getCargo()
    {
        return cargo;
    }
    string getTiempo()
    {
        return tiempo;
    }
    string InfoEmpleado()
    {
        return getNombre() + " " + getApellido() + "\t" + "\tCargo:" + getCargo() + "\t" + "\tTiempo:" + getTiempo();
    }
};