#include <iostream>
#include <string>
#include "Movilidades.cpp"
using namespace std;
class Tienda 
{
private:
    string nombre_tienda;
    Automovil Automoviles[10];
    Motocicleta Motocicletas[5];

public:
    Tienda(string _nombre_tienda)
    {
        nombre_tienda = _nombre_tienda;
    }
    // getter and setter
    string getNombre_tienda()
    {
        return nombre_tienda;
    }
    void setNombre_tienda(string _nombre_tienda)
    {
        nombre_tienda = _nombre_tienda;
    }
};