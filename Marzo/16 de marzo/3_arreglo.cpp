// Hacer un arreglo de capacidad 5
// el usuario ingresa los valores por teclado
// encontrar el numero mayor y menor
// encontrar el numero que se repite
// cuantas veces se repite
// encontrar la suma de los items del arreglo
// ordenar de mayor a menor y de menor a mayor
// hallar el promedio y mediana
// reemplazar la posicion medio del arreglo por el valor 25
#include <iostream>
using namespace std;
// funcion para ingresar los valores
void IngresarValores(int Valor[], int tamanio)
{
    // ingresamos los valores por teclado
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> Valor[i];
    }
}

// Función para imprimir los elementos del arreglo
void ImprimirArreglo(int Valor[], int tamanio)
{
    cout << "Elementos del arreglo" << endl;
    for (int i = 0; i < tamanio; i++)
    {
        cout << Valor[i] << "/";
    }
    cout << endl;
}
// Funcion que encuentra el numero mayor en el vector
void Obtener_Numero_Mayor(int valor[], int tamanio)
{
    int mayor = valor[0]; //declaramos al numero mayor a la posicion 0 del arreglo
    for (int i = 1; i < tamanio; i++)
    {
        if (valor[i] > mayor)// usamos una condicion para que el valor a[1] si es "menor" que a[0]
        {                     
            mayor = valor[i]; // si cumple esta condicion se convierte en el numero mayor
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
}
// Funcion que encuentra el numero menor en el arreglo
void Obtener_Numero_Menor(int valor[], int tamanio)
{
    int menor = valor[0];//declaramos al numero menor desde la posicion 0 del arreglo
    for (int i = 1; i < tamanio; i++)
    {
        if (valor[i] < menor)// usamos una condicion para que el valor a[1] si es "menor" que a[0]
        {
            menor = valor[i];// si cumple esta condicion se convierte en el numero menor
        }
    }
    cout << "El numero menor es: " << menor << endl;
}
// Funcion que encuentra cualquier numero que se repite en el arreglo
void ObtenerRepiten(int valor[], int tamanio)
{
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (valor[i] == valor[j])
            {
                cout << "los numeros que se repiten en el arreglo son: " << valor[i] << endl;
                break; // este break termina el ciclo interno cuando se encuentra el primer numero repetido
            }
        }
    }
}
// Funcion que calcula el promedio del arreglo
void ObtenerSuma_Promedio(int valor[], int tamanio)
{
    int suma = 0;
    int promedio = 0;
    for (int i = 0; i < tamanio; i++)
    {
        suma += valor[i];
    }
    promedio = suma / tamanio;
    cout << "La suma de los elementos del arreglo es: " << suma << endl;
    cout << "El promedio del arreglo es: " << promedio << endl;
}
// Funcion que encuentra la mediana del arreglo
void ObtenerMediana(int Valor[], int tamanio)
{
    int mediana;
    mediana = (tamanio - 1) / 2;
    cout << "La mediana es: " << Valor[mediana] << endl;
}
// funcion para ordenar de mayor a menor
void OrdenaMayor_Menor(int Valor[], int tamanio)
{
    int aux;
    cout << "Ordenado de mayor a menor" << endl;
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (Valor[j] > Valor[i])
            {
                aux = Valor[i];
                Valor[i] = Valor[j];
                Valor[j] = aux;
            }
        }
    }
}
// funcion para ordenar de menor a mayor

void OrdenaMenor_Mayor(int Valor[], int tamanio)
{
    int aux;
    cout << "Ordenado de menor a mayor " << endl;
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (Valor[j] < Valor[i])
            {
                aux = Valor[i];
                Valor[i] = Valor[j];
                Valor[j] = aux;
            }
        }
    }
}
//funcion principal
int main()
{
    int Valores[5];
    int tamanio = sizeof(Valores) / sizeof(Valores[0]);//calcula el tamanio del del arreglo
    // Llamamos a las funciones
    IngresarValores(Valores, tamanio);
    Obtener_Numero_Mayor(Valores, tamanio);
    Obtener_Numero_Menor(Valores, tamanio);
    ObtenerRepiten(Valores, tamanio);
    ObtenerSuma_Promedio(Valores, tamanio);
    ObtenerMediana(Valores, tamanio);
    OrdenaMayor_Menor(Valores, tamanio);
    ImprimirArreglo(Valores, tamanio);
    OrdenaMenor_Mayor(Valores, tamanio);
    ImprimirArreglo(Valores, tamanio);
    return 0;
}