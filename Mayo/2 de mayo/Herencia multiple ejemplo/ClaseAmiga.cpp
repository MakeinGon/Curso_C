#include <iostream>
#include "Clase.cpp"
using namespace std;
class ClaseAmiga
{
private:
    string valor;

public:
    ClaseAmiga(string _valor="")
    {
        valor = _valor;
    }
    void imprimir(int numero)
    {
        Clase c;
        c.setValor(10);
        c.imprimir();
    }
};