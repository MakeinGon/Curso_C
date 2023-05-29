//1. Escribir un programa que calcule la suma de los numeros pares e impares de un arreglo de enteros. 
#include <iostream>
using namespace std;
void IngresarValores(int Valor[], int n) {//declaracion de la funcion IngresarValores, que recibe un arreglo de enteros y su tamanio
    for (int i = 0; i < n; i++) {
        cout << "Ingrese valor " << i + 1 << " : ";
        cin >> Valor[i];
    }
}
void Suma_Par(int Valor[], int n) {//declaracion de la funcion Suma_Par, que recibe un arreglo de enteros y su tamanio
    int SumaPar = 0;//inicializa la variable SumaImpar en 0
    for (int i = 0; i < n; i++) {//un ciclo for que recorre el arreglo Valor desde el primer elemento hasta el ultimo
        if (Valor[i] % 2 == 0) {//condicion si el numero tiene residuo 0 entonces es par
            SumaPar += Valor[i];//hallamos la suma de los pares
        }
    }
    cout << "La suma de los valores pares del arreglo es : " << SumaPar << endl;
}

void Suma_Impar(int Valor[], int n) {//declaracion de la funcion Suma_Impar, que recibe un arreglo de enteros y su tamanio
    int SumaImpar = 0;
    for (int i = 0; i < n; i++) {//un ciclo for que recorre el arreglo Valor desde el primer elemento hasta el ultimo
        if (Valor[i] % 2 == 1) {//condicion si el numero tiene residuo 1 entonces es impar
            SumaImpar += Valor[i];//hallamos la suma de los impares
        }
    }
    cout << "La suma de los valores impares del arreglo es : " << SumaImpar << endl;
}

int main() {//Funcion principal 
    int Valores[10], N = 10;//declara un arreglo de enteros llamado Valores con tamanio 10, y la variable N con valor 10
    //Llamamos a las funciones
    IngresarValores(Valores, N);
    Suma_Par(Valores, N);
    Suma_Impar(Valores, N);
    return 0;
}