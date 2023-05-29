#include <iostream>
#include <string>
#include <fstream>
#include "Tienda.cpp"
using namespace std;
int main()
{
    // Crear tiendas
    Tienda T1("TOKIO");
    // Crear movilidades
    Automovil auto1("Rojo", "Toyota", "1000", 4, 4, 4, "Activa");
    Automovil auto2("Azul", "Chevrolet", "850", 4, 4, 4, "En proceso");
    Automovil auto3("Negro", "Hyundai", "2500", 4, 4, 4, "Activa");
    Automovil auto4("Amarillo", "Honda", "1100", 4, 4, 4, "Activa");
    Automovil auto5("Verde", "Tesla", "1900", 4, 4, 4, "Tramite");
    Automovil auto6("Gris", "Nissan", "1500", 4, 4, 4, "Activa");
    Automovil auto7("Morado", "BMW", "2800", 4, 4, 4, "Activa");
    Automovil auto8("Naranja", "Mercedez-Benz", "4500", 4, 4, 4, "Activa");
    Automovil auto9("Plomo", "Audi", "900", 4, 4, 4, "Activa");
    Automovil auto10("Plateado", "Subaru", "1800", 4, 4, 4, "Activa");

    // Crear Motocicletas
    Motocicleta moto1("Azul", "Honda", "400", 2, 2, 0, "En tramite");
    Motocicleta moto2("Negro", "Yamaha", "150", 2, 2, 0, "Activa");
    Motocicleta moto3("Motado", "Velorex", "120", 2, 2, 0, "En proceso");
    Motocicleta moto4("Plateado", "Quinqui", "500", 2, 2, 0, "En tramite");
    Motocicleta moto5("Rojo", "Nissan", "700", 2, 2, 0, "En tramite");

    // arreglos
    Automovil array_Automoviles[10] = {auto1, auto2, auto3, auto4, auto5, auto6, auto7, auto8, auto9, auto10};
    // hallar el tamanio de array_Automoviles
    int tamanioAutomoviles = sizeof(array_Automoviles) / sizeof(array_Automoviles[0]);

    Motocicleta array_Motocicletas[5] = {moto1, moto2, moto3, moto4, moto5};
    // hallar el tamanio de array_Motocicletas
    int tamanioMotocicletas = sizeof(array_Motocicletas) / sizeof(array_Motocicletas[0]);

    // declaramos
    ofstream archivo("Reporte_Movilidades.txt");
    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    // imprimir nombre de la tienda
    archivo << "-----------------------" << endl;
    archivo << "Tienda:" << T1.getNombre_tienda() << endl;
    archivo << "-----------------------" << endl;
    archivo << "MOVILIDADES DE LA TIENDA:" << endl;
    archivo << "-------------------" << endl;
    archivo << "|  AUTOMOVILES    |" << endl;
    archivo << "-------------------" << endl;
    // imprimir datos de los automoviles
    for (int i = 0; i < tamanioAutomoviles; i++)
    {
        archivo << "---------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        archivo << "Automovil[" << i + 1 << "]: " << endl;
        archivo << array_Automoviles[i].toStringAutomoviles() << endl;
        archivo << array_Automoviles[i].toStringInfoAutomoviles() << endl;
    }

    archivo << endl;

    archivo << "-------------------" << endl;
    archivo << "|  MOTOCICLETAS   |" << endl;
    archivo << "-------------------" << endl;
    // imprimir datos de las motocicletas
    for (int i = 0; i < tamanioMotocicletas; i++)
    {
        archivo << "---------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        archivo << "Motocicleta[" << i + 1 << "]: " << endl;
        archivo << array_Motocicletas[i].toStringMotocicletas() << endl;
        archivo << array_Motocicletas[i].toStringInfoMotocicletas() << endl;
    }

    archivo.close();
    return 0;
}