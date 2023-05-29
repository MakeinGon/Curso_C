//6. Escribir un programa que lea una lista de palabras y las ordene alfabéticamente
#include <iostream>
#include <string>
#include <stdlib.h>//libreria para realizar diversas tareas como asignacion, manejo de cadenas, conversion de datos,etc
#include <string.h>//la libreria string para guardar una cadena de caracteres 
using namespace std;

// Funcion para ingresar nombres en una matriz de caracteres de 2 dimensiones
void IngresarNombres(char datos[][50],int cantidad){
	// Iteramos a traves de cada nombre e ingresamos el nombre
	for(int i=0; i<cantidad; i++){
		// Limpiamos el bufer de entrada
		fflush(stdin);
		// Pedimos al usuario el nombre
		cout<<"nombre "<<i+1<<" : ";
		// Obtenemos el nombre del usuario usando gets(), que lee una linea de stdin
		gets(datos[i]);
	}
}

// Funcion para ordenar los nombres e imprimirlos en orden alfabetico
void Imprimir_Nombres(char datos[][50],int cantidad){
	// Imprimimos un mensaje indicando que los nombres se imprimiran en orden
    cout<<"los nombres en orden son : "<<endl;

    // Variable temporal para contener un nombre durante la clasificacion
    char temp[50];
    // Iteramos a traves de cada nombre y los comparamos con los demas para ordenarlos
	for(int i=0; i<cantidad; i++){
		for(int j=i; j<cantidad; j++){
			// Usamos strcmp() para comparar los dos nombres
			// Si el primer nombre es mayor que el segundo, los intercambiamos
			if(strcmp(datos[i],datos[j])>0){
				strcpy(temp,datos[i]);
				strcpy(datos[i],datos[j]);
				strcpy(datos[j],temp);
			}
		}
	}
	// Iteramos a traves de cada nombre e lo imprimimos en orden alfabetico
	for(int i=0; i<cantidad; i++){
		cout<<i+1<<". "<<datos[i]<<endl;
	}
}

int main() {
    // Variable para almacenar el numero de nombres a ingresar
    int Cant;
    
    // Preguntamos al usuario cuantos nombres desea ingresar
    cout<<"Cuantas palabras desea ingresar "<<endl;
    // Leemos el numero de nombres
    cin>>Cant;

	// Matriz de 2 dimensiones para almacenar los nombres, con la primera dimension siendo el numero de nombres
	// y la segunda dimension siendo la longitud maxima de un nombre (50 caracteres)
	char Nombres[Cant][50];
	
	// Llamamos a la funcion para ingresar los nombres
	IngresarNombres(Nombres,Cant);
	
	// Llamamos a la funcion para ordenar e imprimir los nombres
	Imprimir_Nombres(Nombres,Cant);
	
    return 0;
}