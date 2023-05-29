//Determinar si un numero es par o impar, imprimir la direccion de memoria 
#include <iostream>
using namespace std;
void DeterminarParImpar(int num){
    if(num%2 ==0){
        cout<<"El numero es par"<<endl;
    }else{
        cout<<"El numero es impar"<<endl;
    }
}
void ObtenerDireccion(int num){
    int *p;
    int num = 53; 
    p = &num; 
    cout<<"Su direccion de memoria es: "<<p<<endl;
}
int main (){
    int numero;
    cout<<"Determinar si es numero par o impar"<<endl;
    cin>>numero;
    DeterminarParImpar(numero);
    ObtenerDireccion(numero);
    return 0;
}