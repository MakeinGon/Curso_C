#include <iostream>
#include <string>
using namespace std;
class Empleado
{
private:
    string puesto;
    float salario;

public:
    Empleado(string _puesto, float _salario = 0)
    {
        puesto = _puesto;
        salario = _salario;
    }
    // get and set
    void setDatosEmpleado(string _puesto, float _salario)
    {
        puesto = _puesto;
        salario = _salario;
    }
    string getDataEmpleado()
    {
        return "Puesto: " + puesto + ", Salario: " + to_string(salario);
    }
};
