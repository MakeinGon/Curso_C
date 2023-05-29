#include <iostream>
using namespace std;

//Funcion para ingresar los valores del arreglo por teclado
void IngresarValores(int Valor[] , int n){
	//ingresamos los valores por teclado
	for(int i=0; i<n; i++){
		cout<<"ingrese valor "<<i+1<<" : ";//Se solicita al usuario ingresar el valor del arreglo
		cin>>Valor[i];//Se almacena el valor ingresado por el usuario en el arreglo
	}
}
//Funcion para imprimir los elementos del arreglo
void ImprimirVector(int Valor[],int n){
	cout<<"Elementos del vector"<<endl;
	for(int i=0; i<n; i++){
		cout<<Valor[i]<<"/";
	}
}
void OrdenaMayor_Menor(int Valor[],int n){
	int aux;
	for(int i=0; i<9; i++){
		for(int j=i+1; j<10; j++){
			if(Valor[j]>Valor[i]){
				aux=Valor[i];
				Valor[i]=Valor[j];
				Valor[j]=aux;
			}
		}
	}
}
void OrdenaMenor_Mayor(int Valor[],int n){
	int aux;
	for(int i=0; i<9; i++){
		for(int j=i+1; j<10; j++){
			if(Valor[j]<Valor[i]){
				aux=Valor[i];
				Valor[i]=Valor[j];
				Valor[j]=aux;
			}
		}
	}
}
int main(){
	int Valores[10],N=10;
	IngresarValores(Valores,N);
	ImprimirVector(Valores,N);
	OrdenaMayor_Menor(Valores,N);
	cout<<"\nVector ordenado de mayor a menor"<<endl;
	ImprimirVector(Valores,N);
	OrdenaMenor_Mayor(Valores,N);
	cout<<"\nvector ordenado de menor a mayor"<<endl;
	ImprimirVector(Valores,N);
	return 0;
}