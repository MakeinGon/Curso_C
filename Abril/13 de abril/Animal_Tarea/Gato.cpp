// clase hija que implementa el padre animal
#include <iostream>
using namespace std;
#include "Animal.cpp"
class Gato : Animal
{
private: // atributos
    string nombre;
    int vidas;
    bool maulla;
    bool is_domesticado;
    string genero;

public:
    Gato(string _nombre, int _vidas, bool _maulla, bool _is_domesticado, string _genero, string _orejas, string _colas, string _ojos, int _n_patas, bool _dientes, string _familia) : Animal(_orejas, _colas, _ojos, _n_patas, _dientes, _familia)
    {
        nombre = _nombre;
        vidas = _vidas;
        maulla = _maulla;
        is_domesticado = _is_domesticado;
        genero = _genero;
    }
    // get and setter
    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    int getVidas()
    {
        return vidas;
    }
    void setVidas(int _vidas)
    {
        vidas = _vidas;
    }

    bool getMaulla()
    {
        return maulla;
    }
    void setMaulla(bool _maulla)
    {
        maulla = _maulla;
    }

    string getGenero()
    {
        return genero;
    }
    void setGenero(string _genero)
    {
        genero = _genero;
    }

    void getDatos()
    {
        cout << "\n";
        cout << "-------------------------------------";
        cout << "\n";
        cout << "DATOS DEL ANIMAL" << endl;
        cout << "Nombre: " << getNombre() << endl;
        cout << "Vidas: " << getVidas() << endl;
        cout << "Genero: " << getGenero() << endl;
        cout << "Numero de orejas: " << getOrejas() << endl;
        cout << "Numero de colas: " << getColas() << endl;
        cout << "-------------------------------------";
        // getOrejas() << "," << getCola() << "," << getPelaje() << "," << getOjos() << "," << getN_patas() << "," << getDientes() << "," << getFamilia();
    }
};