#include <iostream>
#include <string>
#include <fstream>
#include "Departamento.cpp"
using namespace std;
int main()
{
    // Crear empleados
    Empleado Empleado1("Gerente", 7000, "10", "Juan", "Perez", "22997412", "30 de Mayo de 1990", 33);
    Empleado Empleado2("Analista", 950, "5", "Maria", "Lopez", "228874", "2 de Septiembre de 1980", 43);
    Empleado Empleado3("Investigador", 5000, "8", "Jose", "Benavides", "2244578", "5 de Octubre", 28);
    Empleado Empleado4("Contador", 5412, "4", "Pepito", "acharte", "254754", "25 de Enero de 1997", 26);
    Empleado Empleado5("Abogado", 4121, "8", "Jose", "Ugarte", "4545421", "20 de Agosto de 1985", 38);
    Empleado Empleado6("Secretaria", 4000, "2", "Jose", "Herrera", "2245785", "15 de Marzo de 1990", 33);
    Empleado Empleado7("Ingeniero", 3000, "3", "Angel", "Benitez", "2257845", "1 de Enero de 2000", 23);
    Empleado Empleado8("Minero", 5000, "5", "Dulce", "Coz", "452114", "4 de Diciembre de 1995", 28);
    Empleado Empleado9("Economista", 1000, "6", "Felipe", "Gonzales", "224785", "2 de Febrero de 1970", 53);
    Empleado Empleado10("Enfermera", 5500, "7", "Sofia", "hernandez", "214653", "6 de Junio de 1979", 44);

    // Crear departamentos
    Departamento departamento1("Departamento de profesionales del Peru", "DPP");

    // crear lista de empleados
    Empleado Empleados[10] = {Empleado1, Empleado2, Empleado3, Empleado4, Empleado5, Empleado6, Empleado7, Empleado8, Empleado9, Empleado10};
    // hallar el tamanho de empleados
    int tamanio_empleados = sizeof(Empleados) / sizeof(Empleados[0]);

    // declaramos
    ofstream archivo("Reporte departamento.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    //
    archivo << "---------------------------------------------------------------------------------------" << endl;
    archivo << departamento1.toStringDatosDepartamento() << endl;
    archivo << "---------------------------------------------------------------------------------------" << endl;
    archivo << "Datos de los empleados: \n ";
    // imprimimos los empleados
    for (int i = 0; i < tamanio_empleados; i++)
    {
        archivo << "----------------------------------------------------------------------------------------------------------------------------" << endl;
        archivo << "Empleado [" << i + 1 << "]: " << endl;
        archivo << Empleados[i].toStringInfoEmpleado() << endl;
        archivo << Empleados[i].toStringDatosEmpleado() << endl;
    }

    archivo.close();
    return 0;
}