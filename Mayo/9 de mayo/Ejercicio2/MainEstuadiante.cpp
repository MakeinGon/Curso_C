#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    Estudiante p1();

    // declaramos
    ofstream archivo("cursos.txt");
    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    archivo.close();

    return 0;
}