#include <iostream>
#include "Class_suma.cpp"
using namespace std;
class Amiga_suma
{
private:
    string valor;

public:
    Amiga_suma(string _valor = "")
    {
        valor = _valor;
    }
    void imprimir(int numero)
    {
        Class_suma s;
        s.setA(5);
        s.setB(10);
        s.imprimir();
    }
};