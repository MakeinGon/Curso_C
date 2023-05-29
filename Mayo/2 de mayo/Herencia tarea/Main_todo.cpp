#include <iostream>
#include <string>
#include "Herencia_multiple.cpp"
using namespace std;
int main()
{
    // Profesores
    Profesor prof1("Makein", "002014", "FIIS");
    Profesor prof2("Felix", "0020152451", "FIIA");
    Profesor prof3("Luis", "002009", "FZ");
    Profesor prof4("Miguel", "0020121245", "FACEA");
    Profesor prof5("Ruben", "0020115645", "FIME");

    // Investigadores
    Investigador inves1("0055", "Redes y conectividadad", "5");
    Investigador inves2("1452", "Sistemas agropecuarios", "10");
    Investigador inves3("4578", "Cultivos", "2");
    Investigador inves4("0145", "Tecnologias de informacion", "7");
    Investigador inves5("0014", "Ciencias exactas", "10");

    // Creamos una lista de profesores en un array
    Profesor profesores[5] = {prof1, prof2, prof3, prof4, prof5};
    // Hallamos el tamanio del arreglo de profesores
    int tamanio_profesores = sizeof(profesores) / sizeof(profesores[0]);

    // Creamos una lista de investigadores en un array
    Investigador investigadores[5] = {inves1, inves2, inves3, inves4, inves5};
    // Hallamos el tamanio del arreglo de investidadores
    int tamanio_investigadores = sizeof(investigadores) / sizeof(investigadores[0]);

    // imprimir datos profesores
    cout << "---------------------------" << endl;
    cout << "|        PROFESORES:      |" << endl;
    cout << "---------------------------" << endl;
    for (int i = 0; i < tamanio_profesores; i++)
    {
        profesores[i].imprimirProfesor();
    }

    // imprimir datos investigadores
    cout << "---------------------------" << endl;
    cout << "|      INVESTIGADORES     |" << endl;
    cout << "---------------------------" << endl;
    for (int i = 0; i < tamanio_investigadores; i++)
    {
        investigadores[i].imprimirInvestigador();
    }

    return 0;
}