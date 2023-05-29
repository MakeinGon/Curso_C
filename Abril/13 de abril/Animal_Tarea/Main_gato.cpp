#include <iostream>
#include <string>
#include "Gato.cpp"
using namespace std;
int main()
{
    // Gato gat("Kitty",4,"Femenino");
    Gato gat1("Kitty ", 6, true, true, " Hembra ", "2 orejas ", "1 cola ", "ojos azules ", 4, true, "Felinos ");
    Gato gat2("Simba", 5, true, true, "Macho", "2 orejas", "2 colas", "marrones", 4, true, "Mamiferos");
    Gato gat3("Radix", 2, true, true, "Hembra", "2 orejas", "1 cola", "2 ojos azules", 4, true, "Mamieferos");

    // imprimimos datos llamando a las funciones de gato.cpp
    /*gat1.getDatos();
    gat2.getDatos();
    gat3.getDatos();*/
    // otro metodo para imprimir con arreglos

    Gato Gatos[3] = {gat1, gat2, gat3};
    for (int i = 0; i < 3; i++)
    {
        Gatos[i].getDatos();
    }

    return 0;
}