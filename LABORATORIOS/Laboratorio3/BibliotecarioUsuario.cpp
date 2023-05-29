#include <iostream>
#include "Prestado.cpp"
#include "ClassPersona.cpp"
using namespace std;
// Herencia 1
class Bibliotecario : Persona
{
private:
    string codigo_bibliotecario;

public:
    Bibliotecario(string _codigo_bibliotecario = "", string _dni = "", string _apellidos = "", string _nombres = "", string _correo = "", string _telefono = "", string _direccion = "") : Persona(_dni, _apellidos, _nombres, _correo, _telefono, _direccion)
    {
        codigo_bibliotecario = _codigo_bibliotecario;
    }
    // get and set
    string getCodigo_bibliotecario()
    {
        return codigo_bibliotecario;
    }
    void setCodigo_bibliotecario(string _codigo_bibliotecario)
    {
        codigo_bibliotecario = _codigo_bibliotecario;
    }
    string infoBibliotecario()
    {
        return "Codigo: " + getCodigo_bibliotecario() + "--------->DNI: " + getDni() + "------->Apellidos: " + getApellidos() + "------->Nombre: " + getNombres() + "------->Correo: " + getCorreo() + "-------->Telefono: " + getTelefono() + "--------->Direccion: " + getDireccion();
    }
};
// Herencia 2
class Usuario : Persona
{
private:
    string codigoUsuario;
    Libro libros[5];

public:
    Usuario(string _codigoUsuario = "", string _dni = "", string _apellidos = "", string _nombres = "", string _correo = "", string _telefono = "", string _direccion = "") : Persona(_dni, _apellidos, _nombres, _correo, _telefono, _direccion)
    {
        codigoUsuario = _codigoUsuario;
    }
    string getCodigoUsuario()
    {
        return codigoUsuario;
    }
    void setCodigoUsuario(string _codigoUsuario)
    {
        codigoUsuario = _codigoUsuario;
    }
    Libro getLibro(int id)
    {
        return libros[id];
    }
    string infoUsuario()
    {
        return "Codigo: " + getCodigoUsuario() + "--------->DNI: " + getDni() + "------->Apellidos: " + getApellidos() + "------->Nombre: " + getNombres() + "------->Correo: " + getCorreo() + "-------->Telefono: " + getTelefono() + "--------->Direccion: " + getDireccion();
    }
};