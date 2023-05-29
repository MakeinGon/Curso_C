#include <iostream>
#include <string>

#include "EstudianteEmpleado.cpp"

using namespace std;

int main()
{
    EstudianteEmpleado e;

    e.setDatosPersona("Jose", "rodriguez", 25);
    EstudianteEmpleado Est1("1221", "Felipe", "Gonzales", 18, "002020634", "Ingenieria en informatica y sistemas", "Salon", 2500);
    cout << "-----------------------" << endl;
    cout << "|Datos del estudiante|" << endl;
    cout << "-----------------------" << endl;
    cout << Est1.getDataPersona() << endl;
    cout << Est1.getDataEstudiante() << endl;
    cout << "-----------------------" << endl;
    cout << "|       EMPLEADO       |" << endl;
    cout << "-----------------------" << endl;
    cout << Est1.getDataEmpleado() << endl;

    // cout << e.getDataPersona();
    return 0;
}