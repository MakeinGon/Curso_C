//4. Escribir un programa que encuentre el número mayor, el númeromenor, el promedio, la media , la mediana , cual es el númeroque se repite másveces de un arreglo de enteros de 10 ítems
#include <iostream>
using namespace std;

// Funcion que muestra los elementos del vector
void elementosDelVector (int arreglo[],int tamanio){
    cout << "Elementos del vector: ";
    for (int i = 0; i < tamanio; i++) {
        cout << arreglo[i] << "/";
    }
    cout<<endl;
}

// Funcion que encuentra el numero mayor en el vector
void obtenerNumeroMayor(int arreglo[], int tamanio) {
    int mayor = arreglo[0];//declaramos al numero mayor a la posicion 0 del arreglo
    for (int i = 1; i < tamanio; i++) {
        if (arreglo[i] > mayor) {// usamos una condicion para que el arreglo a[1] si es "menor" que a[0]
            mayor = arreglo[i];// si cumple esta condicion se convierte en el numero mayor
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
}

// Funcion que encuentra el numero menor en el arreglo
void obtenerNumeroMenor(int arreglo[], int tamanio) {
    int menor = arreglo[0];//declaramos al numero menor desde la posicion 0 del arreglo
    for (int i = 1; i < tamanio; i++) {
        if (arreglo[i] < menor) {// usamos una condicion para que el arreglo a[1] si es "menor" que a[0] 
            menor = arreglo[i];// si cumple esta condicion se convierte en el nuevo numero menor
        }
    }
    cout << "El numero menor es: " << menor << endl;
}

// Funcion que calcula el promedio del arreglo
void obtenerPromedio(int arreglo[], int tamanio) {
    float suma = 0;
    for (int i = 0; i < tamanio; i++) {
        suma += arreglo[i];
    }
    float promedio = suma / tamanio;
    cout << "El promedio del arreglo es: " << promedio << endl;
    cout<<"La media es: "<<promedio<<endl; // la media y el promedio son lo mismo pero lo imprimiremos :)
}

// Funcion que encuentra la mediana del arreglo
void obtenerMediana(int arreglo[], int tamanio) {
    int mediana;
    mediana = (tamanio - 1) / 2;
    cout << "La mediana es: " << arreglo[mediana] << endl;
}

// Funcion que encuentra cualquier numero que se repite en el arreglo
void obtenerRepiten(int arreglo[],int tamanio){
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (arreglo[i] == arreglo[j])
            {
                cout << "los numeros que se repiten en el arreglo son: " << arreglo[i]<<endl;
                break; // este break termina el ciclo interno cuando se encuentra el primer numero repetido
            }
        }
    }
}

int main() {
    int arreglo[10];
    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]);//calcula el tamanio del del arreglo

    // Solicita al usuario ingresar los valores del vector
    for (int i = 0; i < tamanio; i++) {
        cout << "Ingrese valor " << i + 1 << endl;
        cin >> arreglo[i];
    }

    // Llama a cada una de las funciones para procesar el arreglo y mostrar resultados
    elementosDelVector(arreglo,tamanio);
    obtenerNumeroMayor(arreglo, tamanio);
    obtenerNumeroMenor(arreglo, tamanio);
    obtenerPromedio(arreglo, tamanio);
    obtenerMediana(arreglo, tamanio);
    obtenerRepiten(arreglo,tamanio);

    return 0;
}