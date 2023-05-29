//10. Escriba un programa que simule el juego de adivinar un número. El programa deberá generar  un  número  aleatorio  entre  1  y  100 ypedirleal  usuario  que  adivine  cuál  es.  Si  el usuario ingresa un número incorrecto, el programa deberá indicarle si el número a adivinar es  mayor  o  menor  al  que  ingresó.  El  juego  termina  cuando  el  usuario  adivina  el  número correcto.
#include <iostream>
#include <time.h>// libreria necesaria para utilizar la funcion time()
using namespace std;

// funcion para imprimir el mensaje solicitando el numero al usuario
void imprimirMensaje() {
    cout << "Ingrese un numero entre [1-100]: " << endl;
}

// funcion para imprimir el resultado de la partida
void imprimirResultado(int intentos) {
    cout << "FELICIDADES HAZ GANADO" << endl;
    cout << "Numero de intentos: " << intentos << endl;
}

// funcion para ejecutar el juego completo
void jugar() {
    int Aleatorio, Numero, intentos = 0;//declaracion de variables
    srand(time(NULL));// semilla para generar el numero aleatorio
    Aleatorio = 1 + rand() % 100;//funcion para generar numeros aleatorios del 1 al 100
    
    cout << Aleatorio << endl;
    do {
        imprimirMensaje(); // llama a la funcion para imprimir el mensaje solicitando el numero
        cin >> Numero;
        while (Numero < 1 || Numero > 100) { // verifica que el numero este en el rango correcto
            imprimirMensaje(); // si no esta en el rango, muestra el mensaje de nuevo
            cin >> Numero;
        }
		//preguntamos si el numero es menor que el aleatorio generado
        if (Numero < Aleatorio) {
            cout << "Ingrese un numero mayor" << endl;
        }
        else if (Numero > Aleatorio) {
            cout << "Ingrese un numero menor" << endl;
        }
        intentos++; // incrementa el numero de intentos
    } while (Numero != Aleatorio); // continua hasta que el usuario adivine el numero
    
    imprimirResultado(intentos); // llama a la funcion para imprimir el resultado
}

int main() {
    jugar(); // llama a la funcion para ejecutar el juego
    return 0;
}