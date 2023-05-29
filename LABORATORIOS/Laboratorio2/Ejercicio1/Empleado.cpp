#include <iostream>
#include "Persona.cpp"
using namespace std;
class Empleado : Persona
{
private: // atributos
    string puesto;
    float sueldo;
    string antiguedad;

public:
    Empleado(string _puesto = "", float _sueldo = 0, string _antiguedad = "", string _nombres = "", string _apellidos = "", string _dni = "", string _fecha_nacimiento = "", int _edad = 0) : Persona(_nombres, _apellidos, _dni, _fecha_nacimiento, _edad)
    {
        puesto = _puesto;
        sueldo = _sueldo;
        antiguedad = _antiguedad;
    }
    string getPuesto()
    {
        return puesto;
    }
    void setPuesto(string _puesto)
    {
        puesto = _puesto;
    }
    float getSueldo()
    {
        return sueldo;
    }
    void setSueldo(float _sueldo)
    {
        sueldo = _sueldo;
    }
    string getAntiguedad()
    {
        return antiguedad;
    }
    void setAntiguedad(string _antiguedad)
    {
        antiguedad = _antiguedad;
    }
    string toStringDatosEmpleado()
    {
        string resumen = "Puesto: " + puesto + "----->Sueldo:" + to_string(sueldo) + "------->Años trabajando: " + antiguedad;
        return resumen;
    }

    string toStringInfoEmpleado()
    {
        string info = "Nombre: " + nombres +"------->Apellido:" + apellidos + "------->Dni: " + dni + "------->Fecha de nacimiento:" + fecha_nacimiento + "------->Edad: " +to_string(edad);
        return info;
    }
};