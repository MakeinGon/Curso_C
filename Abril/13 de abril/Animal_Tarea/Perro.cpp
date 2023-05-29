#include <iostream>
#include <string>
#include <ctime>
#include "Animal.cpp"
using namespace std;
class Perro : Animal
{
private: // atributos
    string nombre;
    bool ladra;
    bool is_domesticado;
    string genero;

public: // metodos y funciones
    Perro(string _nombre, bool _ladra, bool _is_domesticado, string _genero, string _orejas, string _cola, string _ojos, int _n_patas, bool _dientes, string _familia) : Animal(_orejas, _cola, _ojos, _n_patas, _dientes, _familia)
    {
        nombre = _nombre;
        ladra = _ladra;
        is_domesticado = _is_domesticado;
        genero = _genero;
    }
    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    bool getLadra()
    {
        return ladra;
    }
    void setLadra(bool _ladra)
    {
        ladra = _ladra;
    }

    string getGenero()
    {
        return genero;
    }
    void setGenero(string _genero)
    {
        genero = _genero;
    }
    void Getdatos()
    {
        cout << "\n";
        cout << "------------------------------------";
        cout << "\n";
        cout << "DATOS DEL ANIMAL" << endl;
        cout << "Nombre: " << getNombre() << endl;
        cout << "Genero: " << getGenero() << endl;
        cout << "Nro de Oreja: " << getOrejas() << endl;
        cout << "Nro de Colas: " << getColas() << endl;
        cout << "Nro de Ojos: " << getOjos() << endl;
        cout << "Familia: " << getFamilia() << endl;
        cout << "------------------------------------";
    }
};