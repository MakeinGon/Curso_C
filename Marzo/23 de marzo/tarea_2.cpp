#include <iostream>
#include <stack>//libreria para las pilas
#include <queue>//libreria para las colas

using namespace std;

int main()
{
    stack<int> mi_pila;
    queue<int> mi_cola;
    int elementos_pila[5] = {1, 2, 3, 4, 5};// Se crea un arreglo de enteros con 5 elementos.

    // Insertar elementos en la pila
    for (int i = 0; i < 5; i++)
    {
        mi_pila.push(elementos_pila[i]);// Se agrega cada elemento del arreglo a la pila "mi_pila" mediante el metodo "push".
    }

    // Transferir elementos de la pila a la cola
    while (!mi_pila.empty())// EL SIGNO ! ESTA NEGAANDO EL DATO ----> QUE JECUTE MIENTRAS SEA FALSO
    {
        mi_cola.push(mi_pila.top());
        mi_pila.pop(); // Se elimina el elemento superior de la pila "mi_pila" mediante el metodo "pop".
    }

    // Imprimir elementos de la cola
    while (!mi_cola.empty())// EL SIGNO ! ESTA NEGAANDO EL DATO ----> QUE JECUTE MIENTRAS SEA FALSO
    {
        cout << mi_cola.front() << " ";
        mi_cola.pop();
    }

    return 0;
}