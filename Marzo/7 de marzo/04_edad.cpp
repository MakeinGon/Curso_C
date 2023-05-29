#include <iostream>
using namespace std;
int edad(int year);
int edad(int year){//funcion entera 
    int edad=0;
    edad=2023-year;
    return edad;//retorna un valor
}
//funcion principal
int main (){
    //declaramos varibles
    int anio;
    int resultado;
    cout<<"Hallar tu edad con tu anio de nacimiento"<<endl;
    cout<<"Digite su anio de nacimiento"<<endl;
    cin>>anio;
    resultado=edad(anio);
    cout<<"tu edad es: "<<resultado<<endl;

	if(resultado<=17){
        cout<<"Eres menor de edad"<<endl;
    } else {
        cout<<"Eres mayor de edad"<<endl;
    }
    return 0;
}