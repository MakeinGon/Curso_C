#include <iostream>
using namespace std;
class Plato
{
private:
    string nombre_plato;
    float costo_plato;
    float precio_plato;
    int Ventas_delivery[100];
    int Ventas_mesa[100];

public:
    Plato(string _nombre_plato = "", float _costo_plato = 0)
    {
        nombre_plato = _nombre_plato;
        costo_plato = _costo_plato;
    }
    string getNombre_plato()
    {
        return nombre_plato;
    }
    void setNombre_plato(string _nombre_plato)
    {
        nombre_plato = _nombre_plato;
    }
    float getCosto_plato()
    {
        return costo_plato;
    }
    void setCosto_plato(float _costo_plato)
    {
        costo_plato = _costo_plato;
    }
    string toStringPlato()
    {
        return "-" + getNombre_plato() + "\t Costo:" + to_string(getCosto_plato());
    }
    void PlatosToday()
    {
        int ventas;
        for (int i = 0; i < 10; i++)
        {
            cout<<"";
        }
    }
};