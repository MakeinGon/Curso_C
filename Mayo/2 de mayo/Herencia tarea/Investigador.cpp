#include <iostream>
using namespace std;
class Investigador
{
private: // atributos
    string codigo;
    string especialidad;
    string libros_publicados;

public: // metodos y funciones
        // constructor
    Investigador(string _codigo, string _especilidad, string _libros_publicados)
    {
        codigo = _codigo;
        especialidad = _especilidad;
        libros_publicados = _libros_publicados;
    }
    // get and set

    void setDatosInvestigador(string _codigo, string _especilidad, string _libros_publicados)
    {
        codigo = _codigo;
        especialidad = _especilidad;
        libros_publicados = _libros_publicados;
    }
    string getDataInvestigador()
    {
        return "Codigo: " + codigo + ",    Especialidad:" + especialidad + ",       Libros publicados: " + libros_publicados;
    }
    void imprimirInvestigador()
    {
        cout << endl;
        cout << "***********************************" << endl;
        cout << "Codigo: " << codigo << endl;
        cout << "Especialidad: " << especialidad << endl;
        cout << "Libros publicados: " << libros_publicados << endl;
    }
};