#include <iostream>
#include <string>
#include <ctime>

#include "estudiante1.cpp"

using namespace std;

int main()
{

    Estudiante est1("0020220634", "FIIS", "makein.gonzales@unas.edu.pe", "Gonzales", "Makein", "24334");
    Estudiante est2("0020224521", "FIIA", "jose.rojas@unas.edu.pe", "rojas", "Jose", "24334");
    Estudiante est3("0020227836", "FACEA", "mia.gargate@unas.edu.pe", "gargate", "mia", "24334");
    // llamamos a las funciones

    est1.getDatos();
    cout << "\n";
    est2.getDatos();
    cout << "\n";
    est3.getDatos();

    return 0;
}