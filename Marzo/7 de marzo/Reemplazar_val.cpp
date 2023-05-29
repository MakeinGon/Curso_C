//reemplazar el valor del ejercicio anterior con el valor de 53
#include <iostream>
using namespace std;
//funcion para el numero impar
void DeterminarParImpar(int num){
    if(num%2 ==0){
        cout<<"El numero es par"<<endl;
    }else{
        cout<<"El numero es impar"<<endl;
    }
}
//funcion para la direccion de memoria 
void ObtenerDireccion(int num){
    int *p;
    p = &num;
    cout<<"Su direccion de memoria es: "<<p<<endl;
}

int main (){
    int numero = 53;
    cout<<"Determinar si es numero par o impar"<<endl;
    DeterminarParImpar(numero);
    ObtenerDireccion(numero);
    return 0;
}


