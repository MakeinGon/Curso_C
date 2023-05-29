#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    string apellido;
    int edad;

public:
    Persona(string _nombre, string _apellido, int _edad)
    {
        nombre = _nombre;
        apellido = _apellido;
        edad = _edad;
    }
    // get and set
    void setDatosPersona(string _nombre, string _apellido, int _edad)
    {
        nombre = _nombre;
        apellido = _apellido;
        edad = _edad;
    }
    string getDataPersona()
    {
        return "Apellidos y nombres: " + apellido + ", " + nombre + ",  edad: " + to_string(edad);
    }

};