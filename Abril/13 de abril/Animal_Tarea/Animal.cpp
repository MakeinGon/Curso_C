// clase padre
#include <iostream>
using namespace std;
class Animal
{
protected: // atributos
    string orejas;
    string colas;
    string ojos;
    int nro_patas;
    bool dientes;
    string familia;

public: // metodos y funciones
    Animal(string _orejas, string _colas, string _ojos, int _nro_patas, bool _dientes, string _familia)
    {
        orejas = _orejas;
        colas = _colas;
        ojos = _ojos;
        nro_patas = _nro_patas;
        dientes = _dientes;
        familia = _familia;
    }
    // get and setter
    string getOrejas()
    {
        return orejas;
    }
    void setOrejas(string _orejas)
    {
        orejas = _orejas;
    }
    string getColas()
    {
        return colas;
    }
    void setColas(string _colas)
    {
        colas = _colas;
    }
    string getOjos()
    {
        return ojos;
    }
    void setOjos(string _ojos)
    {
        ojos = _ojos;
    }
    int getNro_patas()
    {
        return nro_patas;
    }
    void setNro_patas(int _nro_patas)
    {
        nro_patas = _nro_patas;
    }
    bool getDientes()
    {
        return dientes;
    }
    void setDientes(bool _dientes)
    {
        dientes = _dientes;
    }
    string getFamilia()
    {
        return familia;
    }
    void setFamilia(string _familia)
    {
        familia = _familia;
    }
};