//6.
/*Escribir un programa que implemente una pila y una cola utilizando una lista enlazada y
 reliace algunas operaciones basicas con ella.

 a. cual es la estrategia de una pila
 la estrategia de la pila es LIFO ya que es, el primero en entrar es el ultimo en salir

 b. cual  es la estrategia de la cola
 la estrategia de la pila es FIFO ya que es, el primero en entrar es el primero en salir

c. cree una pila con valores ingresados por el usuario, el tamaño de la pila debe ser como minimo 10
d. desmostrar el contenido de la pila
e. cree una cola, con los valores de la pila
f. mostrar el nuevo contenido de la pila y cola
 */
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// Declaracion de la pila y la cola
stack<int> pila;
queue<int> cola;

// Funcion para llenar la pila con valores introducidos por el usuario
void llenarPila()
{
    int x = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Introduzca el valor de la pila " << i << endl;
        cin >> x;
        pila.push(x);
    }
}

// Funcion para mostrar el contenido de la pila al usuario
void mostrarPila()
{
    int temp;

    cout << "El contenido de la pila es: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        temp = pila.top();
        cout << pila.top() << endl;
        pila.pop();
        cola.push(temp);
    }
}

// Funcion para mostrar el contenido de la cola al usuario
void mostrarCola()
{
    cout << "El contenido de la cola es: ";
    while (!cola.empty())// EL SIGNO ! ESTA NEGAANDO EL DATO ----> QUE JECUTE MIENTRAS SEA FALSO
    {
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;
}

int main()
{

    // Llamada a la funcion para llenar la pila
    llenarPila();

    // Llamada a la funcion para mostrar el contenido de la pila
    mostrarPila();

    // Llamada a la funcion para mostrar el contenido de la cola
    mostrarCola();
    return 0;
}
