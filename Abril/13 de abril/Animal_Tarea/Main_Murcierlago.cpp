#include <iostream>
#include <string>
#include <ctime>
#include "Murcielago.cpp"
using namespace std;

int main()
{
    Murcielago mur1("Mito", "mediano", "negro", "cueva", "2 orejas", "sin colas", "2 ojos", 4, true, "mir");
    Murcielago mur2("Pex", "Grande", "Marron", "Caverna", "2 orejas", "sin colas", "2 ojos", 4, true, "mir");
    Murcielago mur3("Tower", "Chico", "gris", "Antro", "2 orejas", "sin colas", "2 ojos", 4, true, "mir");
    //imprimimos los datos
    mur1.getDatos();
    mur2.getDatos();
    mur3.getDatos();

    return 0;
}