// Declarar un arreglo de 5 productos
// reemplazar el producto de la posicion 2 por computadora
// imprimir el arreglo
#include <iostream>
using namespace std;
int main()
{
	// declaramos el arreglo de 5 pruductos
	string productos[5] = {"Tablet", "Celular", "Laptop", "Mouse", "Audifonos"};
	// cambiamos el valor de la posicion 1 por "Computadora"
	productos[1] = "computadora";
	// Imprimimos el arreglo de productos con el ciclo for
	for (int i = 0; i < 5; i++)
	{
		cout << "Producto[" << i << "]:" << productos[i] << endl;
	}
	return 0;
}