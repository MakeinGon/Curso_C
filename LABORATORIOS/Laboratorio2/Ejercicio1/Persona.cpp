#include <iostream>
using namespace std;
class Persona
{
protected: // atributos
    string nombres;
    string apellidos;
    string dni;
    string fecha_nacimiento;
    int edad;

public: // metodos y funcione
        // constructor
    Persona(string _nombres = "", string _apellidos = "", string _dni = "", string _fecha_nacimiento = "", int _edad = 0)
    {
        nombres = _nombres;
        apellidos = _apellidos;
        dni = _dni;
        fecha_nacimiento = _fecha_nacimiento;
        edad = _edad;
    }
    //getters and setters 
    string getNombre()
    {
        return nombres;
    }
    void setNombres(string _nombres)
    {
        nombres = _nombres;
    }
    string getApellidos()
    {
        return apellidos;
    }
    void setApellidos(string _apellidos)
    {
        apellidos = _apellidos;
    }
    string getDni()
    {
        return dni;
    }
    void setDni(string _dni)
    {
        dni = _dni;
    }
    string getFecha_nacimiento()
    {
        return fecha_nacimiento;
    }
    void setFecha_nacimiento(string _fecha_nacimiento)
    {
        fecha_nacimiento = _fecha_nacimiento;
    }
    int getEdad()
    {
        return edad;
    }
    void setEdad(int _edad)
    {
        edad = _edad;
    }
};