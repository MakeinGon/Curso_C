#include <iostream>
using namespace std;
class Clase
{
private: // atributos
    int valor;

public: // metodos y funciones
    // constructor
    Clase(int _valor=0)
    {
        valor = _valor;
    }
    int getValor()
    {
        return valor;
    }
    void setValor(int _valor)
    {
        valor = _valor;
    }
    void imprimir()
    {
        cout << "El valor es : " << to_string(valor);
    }
};