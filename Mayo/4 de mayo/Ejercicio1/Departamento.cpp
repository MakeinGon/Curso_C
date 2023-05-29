#include <iostream>
#include <string>
#include "Empleado.cpp"
using namespace std;
class Departamento
{
private:
    string nombre_departamento;
    string siglas;
    Empleado empleados[10];
    int num_empleados;

public:
    Departamento(string _nombre_departamento, string _siglas)
    {
        nombre_departamento = _nombre_departamento;
        siglas = _siglas;
        num_empleados = 0;
    }
    string getNombre_departamento()
    {
        return nombre_departamento;
    }
    void setnombre_departamento(string _nombre_departamento)
    {
        nombre_departamento = _nombre_departamento;
    }
    string getSiglas()
    {
        return siglas;
    }
    void setSiglas(string _siglas)
    {
        siglas = _siglas;
    }
    string toStringDatosDepartamento()
    {
        string resumen2 = "Nombre del departamento: " + nombre_departamento + "---------->Siglas: " + siglas;
        return resumen2;
    }

    Empleado getEmpleado(int id)
    {
        return empleados[id];
    }

    void agregarEmpleados(Empleado empleado)
    {
        if (num_empleados < 10)
        {
            empleados[num_empleados] = empleado;
            num_empleados++;
        }
        else
        {
            cout << "El Departamento completo el numero de empleados";
            cout << "\n";
        }
    }
    void mostrarEmpleados()
    {
        cout << "-----------------------------------------------------";
        cout << "\n";
        cout << "Empleados del departamento: " << endl;
        if (sizeof(empleados) / sizeof(empleados[0]) != 0)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << empleados[i].toStringDatosEmpleado() << "\n";
                cout << empleados[i].toStringInfoEmpleado() << "\n";
            }
        }
    }
};