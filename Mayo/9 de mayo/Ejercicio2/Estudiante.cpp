#include <iostream>
using namespace std;
class Estudiante
{
private: // atributos
    string codigo_investigacion;
    string nombre_investigacion;
    string facultad;
    string semestre;

public: // metodos y funciones
    // constructor
    Estudiante(string _codigo_investigacion = "", string _nombre_investigacion = "", string _facultad = "", string _semestre = "")
    {
        codigo_investigacion = _codigo_investigacion;
    }
    string getCodigo_investigacion()
    {
        return codigo_investigacion;
    }
    void setCodigo_investigacion(string _codigo_investigacion)
    {
        codigo_investigacion = _codigo_investigacion;
    }
    string getNombre_investigacion()
    {
        return nombre_investigacion;
    }
    void setNombre_investigacion(string _nombre_investigacion)
    {
        nombre_investigacion = _nombre_investigacion;
    }
    string getFacultad()
    {
        return facultad;
    }
    void setfacultad(string _facultad)
    {
        facultad = _facultad;
    }
};