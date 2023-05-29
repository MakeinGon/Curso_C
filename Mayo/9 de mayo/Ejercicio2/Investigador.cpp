#include <iostream>
using namespace std;
class Investigador
{
private: // atributos
    string codigo_investigacion;
    string nombre_investigacion;

public: // metodos y funciones
    // constructor
    Investigador(string _codigo_investigacion = "", string _nombre_investigacion = "")
    {
        nombre_investigacion = _nombre_investigacion;
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
    string toString()
    {
        return "Codigo:" + getCodigo_investigacion() + "Nombre: " + getNombre_investigacion();
    }
};