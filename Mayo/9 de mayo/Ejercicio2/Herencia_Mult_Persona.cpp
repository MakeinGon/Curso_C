#include <iostream>
#include "Persona.cpp"
#include "Estudiante.cpp"
#include "Investigador.cpp"
using namespace std;
class HerenciaMultiple : public Persona, public Estudiante, public Investigador
{
private:
    string datos;

public:
    HerenciaMultiple(string _datos)
    {
        datos = _datos;
    }
};