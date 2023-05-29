#include <iostream>
#include <stack>//libreria para las pilas
#include <queue>//libreria para las colas

using namespace std;

void transferir(stack<int> pila, queue<int> cola)
{
    // Transferir elementos de la pila a la cola
    for (int i = 0; i < 5; i++)
    {
        cola.push(pila.top());
        pila.pop();
    }
}

void imprimir(queue<int> cola)
{
    // Imprimir elementos de la cola
    while (!cola.empty())
    {
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;
}

void ejemplo()
{
    // Crear pila de 5 elementos tipo <int>
    stack<int> pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);

    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();

    // Crear cola de 5 elementos tipo <int> vacíos
    queue<int> cola;
    for (int i = 0; i < 5; i++)
    {
        cola.push(0);
    }

    transferir(pila, cola);

    // accedemos al primer elemento y al ultimo
    cout << "\nPrimer elemento: " << cola.front() << endl;
    cout << "\nUltimo elemento: " << cola.back() << endl;

    imprimir(cola);
}

int main()
{
    ejemplo();
    return 0;
}