#include <iostream>
#include <string>
using namespace std;
class Profesor
{
private: // atributos
    string nombre;
    string dni;
    string facultad;

public: // metodos y funciones
        // constructor
    Profesor(string _nombre, string _dni, string _facultad)
    {
        nombre = _nombre;
        dni = _dni;
        facultad = _facultad;
    }

    // get and set
    void setDatosProfesor(string _nombre, string _dni, string _facultad)
    {
        nombre = _nombre;
        dni = _dni;
        facultad = _facultad;
    }

    /*
    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    string getDni()
    {
        return dni;
    }
    void setDni(string _dni)
    {
        dni = _dni;
    }
    string getFacultad()
    {
        return facultad;
    }
    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }*/

    string getDataProfesor()
    {
        return "Nombre: " + nombre + ", DNI:" + dni + ", facultad: " + facultad;
    }
    void imprimirProfesor()
    {
        cout << endl;
        cout << "***********************************" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Dni: " << dni << endl;
        cout << "Facultad: " << facultad << endl;
    }
};