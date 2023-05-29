#include <iostream>
using namespace std;
int prom(int n1,int n2,int n3);
int prom(int n1,int n2,int n3){//funcion int para que retorne un valor para el promedio
    int prom=0;
    prom = (n1+n2+n3)/3;
    return prom;
}
int notas(int calificacion);
int notas(int calificacion){//funcion int para que retorne las notas
    int nota=0;
    //condicion
    if(calificacion>=18){
        nota=1;
    }else{
        if(calificacion>=15){
            nota=2;
    }else{
        if(calificacion>=11){
            nota=3;
    }else{
        if(calificacion>=5){
            nota=4;
    }else{
        nota=5;
    }
    }
    }
    }
    return nota;

}
//funcion principal
int main(){
    int nota;
    int res;
    int n1,n2,n3;
    cout<<"ingrese sus notas"<<endl;
    cin>>n1>>n2>>n3;
    res=prom(n1,n2,n3);
    nota =notas(res);
    cout<<"tu nota es ";
    switch(nota){
        case 1:
        cout<<"A";
        break;
        case 2:
        cout<<"B";
        break;
        case 3:
        cout<<"C";
        break;
        case 4:
        cout<<"D";
        break;
        case 5:
        cout<<"E";
        break;
        default:
        cout<<"no tienes nota ";
        break;
    }
    return 0;
}