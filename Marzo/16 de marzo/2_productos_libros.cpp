// declarar un arreglo de 5 libros
// hacer un recorrido para que el usuario ingrese los libros
// imprimir el arreglo
#include <iostream>
using namespace std;
void ingresarProductos(string productos[], int tamanio)
{
    cout<<"Ingrese los libros"<<endl;
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Digite el producto:" << endl;
        cin >> productos[i];
    }
}

void imprimirProductos(string productos[], int tamanio)
{
    cout<<"Los libros ingresados fueron: "<<endl;
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Producto[" << i + 1 << "]:" << productos[i] << endl;
    }
}

int main()
{
    string libros[5];
    int tamanio = sizeof(libros) / sizeof(libros[0]);

    ingresarProductos(libros, tamanio);
    imprimirProductos(libros, tamanio);

    return 0;
}