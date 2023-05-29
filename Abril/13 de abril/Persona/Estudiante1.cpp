// clase hija
#include <iostream>
#include <string>
#include <ctime>
#include "persona.cpp"

using namespace std;

class Estudiante : Persona
{
private:
    string codigo_estudiante;
    string facultad;
    string correo;

public:
    // Automovil(int numRuedas, int numPuertas) : Vehiculo(numRuedas), numPuertas_(numPuertas) {}

    Estudiante(string _codigo, string _facultad, string _correo, string _apellidos, string _nombres, string _dni) : Persona(_apellidos, _nombres, _dni)
    {
        codigo_estudiante = _codigo;
        facultad = _facultad;
        correo = _correo;
    }
    // getter an setter
    string getCodigo()
    {
        return codigo_estudiante;
    }
    void setCodigo(string _codigo)
    {
        codigo_estudiante = _codigo;
    }
    string getFacultad()
    {
        return facultad;
    }
    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }
    string getCorreo()
    {
        return correo;
    }
    void setCorreo(string _correo)
    {
        correo = _correo;
    }
    void getDatos()
    {
        cout<<"\n";
        cout << "DATOS DEl ESTUDIANTE " << endl;
        cout << "Codigo de estudiante: " << getCodigo() << endl;
        cout << "Facultad: " << getFacultad() << endl;
        cout << "Correo: " << getCorreo() << endl;
        cout << "Nombre: " << getNombres() << endl;
        cout << "Apellido: " << getApellidos() << endl;
        cout << "DNI:" << getDNI() << endl;
    }
};