//9. Escriba un programa que solicite al usuario ingresar un número entero positivo y luego imprima la secuencia de números desde 1 hasta el número ingresado, pero reemplazando los múltiplos de 3 por la palabra "Fizz" y los múltiplos de 5 por la palabra "Buzz".Si el número es múltiplo tanto de 3 como de 5, imprimir "FizzBuzz".
#include <iostream>
using namespace std;

void ImprimirSecuencia(int N){
	for(int i=1; i<=N; i ++){
		
		if(i%3==0){// Si el numero es divisible por 3
			//entran los multiplos de 3
			if(i%5==0){
				//entran solo los ultipols de 3 y 5
				cout<<"FizzBuzz"<<endl;
			}else{
				//entran los multiplos unicamente de 3
				cout<<"Fizz"<<endl;
			}
		}else if(i%5==0){// Si el numero es divisible por 5
			//entran solo los multiplos de 5
			if(i%3==0){
				//entran solo los ultipols de 5 y 3
				cout<<"FizzBuzz"<<endl;
			}else{
				//entran los multiplos unicamente de 5
				cout<<"Buzz"<<endl;
			}
		}else{// Si el numero no es divisible ni por 3 ni por 5
			cout<<i<<endl;// Imprime el numero
		}
	}
}


int main(){
	int numero;
	//controlamos el ingreso del numero,para que sea solo positivos
	do{
		cout<<"ingrese el un numero entero positivo "<<endl;
		cin>>numero;	
	}while(numero<0);
	ImprimirSecuencia(numero);
	return 0;
}