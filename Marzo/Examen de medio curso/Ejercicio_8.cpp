#include <iostream>
using namespace std;
void IngresarValores(float Notas[]){
	for(int i=0; i<3; i++){
		do{
			cout<<"ingrese Nota "<<i+1<<" : ";
			cin>>Notas[i];
		}while(Notas[i]<0 || Notas[i]>20);
	}
}
void CalcularPromedio(float Notas[]){
	float Suma=0,Promedio;
	for(int i=0; i<3; i++){
		Suma = Suma + Notas[i];
	}
	Promedio = Suma/3;
	cout<<"El promedio del alumno es : "<<Promedio;
}
int main(){
	float notas[3];
	IngresarValores(notas);
	CalcularPromedio(notas);
	return 0;
}