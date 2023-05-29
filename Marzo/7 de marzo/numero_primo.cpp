//Determinar si un numero es primo, imprimir direccion de memoria
#include <iostream>
using namespace std;
//funcion para hallar el numero primo 
bool Es_Primo(int num)
{
    bool primo=true;
    for(int i=2; i<num; i++){
    	if(num%i==0)
    	primo=false;
	}
	if(primo==true){
		cout<<"el numero es primo"<<endl;
	}else{
		cout<<"el numero no es primo"<<endl;
	}
    return primo;
}
//funcion para obtener el promedio
void ObtenerDireccion(int num)
{
    int *p;
    p=&num; // puntero a la direccion de memoria de num
    cout<< "La direccion de memoria es: " <<p<<endl;
}

int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    Es_Primo(numero);
    ObtenerDireccion(numero);
    return 0;
}