#include <iostream>
#include <math.h>  
using namespace std;
///
float base, altura;
void IngregarValores(){ 
    cout << "Ingrese la base del triangulo : " << endl;
    cin >> base;
    cout << "Ingrese la Altura del triangulo : " << endl;
    cin >> altura;
}
///
void Calcular_Area(){
    float area;
    area = (base*altura)/2;
    cout << "El area del triangulo es : " << area << endl;
}

int main(){
    IngregarValores();
    Calcular_Area();
    return 0;
}