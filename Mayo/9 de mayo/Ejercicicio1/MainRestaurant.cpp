#include <iostream>
#include <fstream>
#include "Restaurante.cpp"
#include "Plato.cpp"
using namespace std;
int main()
{
    // restaurante
    Restaurante res1("TOKIO", "AV. Las americas");

    Plato p1("Aji de gallina", 20);
    Plato p2("Pachamanca", 30);
    Plato p3("Seco de pollo  ", 25);
    Plato p4("Chaufa", 12);
    Plato p5("Juane", 40);

    Plato array_platos[5] = {p1, p2, p3, p4, p5};

    // declaramos
    ofstream archivo("cursos.txt");
    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    cout << "------------------------------------------" << endl;
    cout << "||Bienvenidos al restaurant||" << endl;
    cout << res1.toStringInfoRestaurant();
    cout << "------------------------------------------" << endl;

    cout << "MENU DEL DIA" << endl;
    cout << "Que desea llevar" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << array_platos[i].toStringPlato() << endl;
    }
    cout << "Elija el numero de plato" << endl;
    int num_plato = 0;
    
    for (int i = 0; i < 5; i++)
    {
        switch (num_plato)
        {
        case 1:
            cout << array_platos[i].getNombre_plato();
            break;
        case 2:
            cout << "";
            break;
        case 3:
            cout << "";
            break;
        case 4:
            cout << "";
            break;
        case 5:
            cout << "";
            break;
        default:
            cout << ;
            break;
        }
    }

    archivo.close();

    return 0;
}