#include <iostream>
#include <string>
#include "Profesor.cpp"
#include "Investigador.cpp"
using namespace std;
class Herencia_multiple : public Profesor, public Investigador
{
private:
    string datos;

public:
    Herencia_multiple(string _datos = "", string _nombre = "", string _dni = "", string _facultad = "", string _codigo = "", string _especialidad = "", string _libros_publicados = "") : Profesor(_nombre, _dni, _facultad), Investigador(_codigo, _especialidad, _libros_publicados)
    {
        datos = _datos;
    }
    
};