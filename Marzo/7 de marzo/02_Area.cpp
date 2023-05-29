#include <iostream>//entrada y salida de datos
using namespace std;
int area(int a,int b);//declaro las variables 
int area(int a,int b){//funcion para el area del triangulo
    int area=0;
    area=b*a;
    return area;//retorna el valor del area
}
int main (){//funcion para retornar una variable
    int base;//declaro como entero la base
    int altura;//declaro como entero la altura
    int res;//resultado
    cout<<"Hallar el area de un rectangulo "<<endl;
    cout<<"Digite la base del rectangulo "<<endl;
    cin>>base;
    cout<<"Digite la altura del rectangulo "<<endl;
    cin>>altura;
    cout<<"El area del rectagulo es "<<endl;
    res=area(base,altura);//resultado del area 
    cout<<res;
    return 0;
}