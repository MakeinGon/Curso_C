//5. Escriba un programa que simule una calculadora con funciones básicas de suma, resta, divisióny multiplicación,  el usuario deberáescoger que operación va a realizar
#include <iostream>
using namespace std;
// pongo un int para retornar el valor de Suma, EN OTRO CASI SE PONDRIA VOID
int suma(int num1,int num2){//funcion int para retornar un valor
    int suma=0;
    suma=num1+num2;//calculamos la suma
    return suma;//retornamos la suma
}
//pongo un int para retornar el valor de resta, EN OTRO CASI SE PONDRIA VOID
int resta(int num1,int num2){//funcion para la resta
    int resta=0;//damos un valor inicial a la suma
    resta=num1-num2;//calculamos la resta
    return resta;//retornamos resta
}
//pongo un int para retornar el valor de la division, EN OTRO CASI SE PONDRIA VOID
int division(int numerador, int denominador){
    int division=0;
    if(denominador==0){// Si el denominador es 0, imprime un mensaje y no hace nada mas.
        cout<<"no se puede calcular la divison entre 0"<<endl;
    }else{// De lo contrario, calcula la division y la asigna a la variable local division.
        division=numerador/denominador; 
    }
    return division;//retornamos la division
}
//pongo un int para retornar el valor de la multiplicacion, EN OTRO CASI SE PONDRIA VOID
int multiplicacion(int num1,int num2){//funcion multiplicacion
    int multiplicacion=0;
    multiplicacion=num1*num2;//calculamos la multiplicacion
    return multiplicacion;//retornamos la mutiplicacion
}

//Funcion principal
int main (){
    //declaramos las variales de tipo entero
    int numero1;
    int numero2;
    int operador;//Operador para para la calculadora
    cout<<"ingrese dos numeros"<<endl;
    cin>>numero1;
    cin>>numero2;
    cout<<"///////MENU/////////"<<endl;
    cout<<"1.Suma"<<endl;
    cout<<"2.resta"<<endl;
    cout<<"3.Multiplicacion"<<endl;
    cout<<"4.Division"<<endl;
	do{
    cout<<"Ingrese el numero de operador"<<endl;
    cin>>operador;
	}while(operador<0 || operador >4);//condicion que este en rango de [1-4]
    //Utilizamos el condicional multiplo para el opeador
    switch (operador){
        //llamamos a las funciones  de acuerdo al operador
        case 1:
        cout<<"La suma es:"<<suma(numero1,numero2);
        break;
        case 2:
        cout<<"La resta es:"<<resta(numero1,numero2);
        break;
        case 3:
        cout<<"La multiplicacion es:"<<multiplicacion(numero1,numero2);
        break;
        case 4:
        cout<<"La divion es: "<<division(numero1,numero2);
        break;
    }
    return 0;
}