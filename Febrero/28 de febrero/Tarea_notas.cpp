#include <iostream>
using namespace std;
// funcion para ingresar los valores
void Ingresar_valores(float &nota1, float &nota2, float &nota3) // agregamos & para pasar por referencia
{
    cout << "Ingrese la 1 nota: " << endl;
    cin >> nota1;
    cout << "Ingrese la 2 nota: " << endl;
    cin >> nota2;
    cout << "Ingrese la 3 nota: " << endl;
    cin >> nota3;
}
// funcion para calcular el promedio
void Obtener_promedio(float nota1, float nota2, float nota3)
{
    float promedio = 0;
    promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= 10.5)
    {
        cout << "Usted aprobo el curso con: " << promedio << endl;
    }
    else
    {
        cout << "Usted desaprobo el curso con:" << promedio << endl;
    }
}
// funcion principal
int main()
{
    float nota1, nota2, nota3;
    // llamamos a las funciones
    Ingresar_valores(nota1, nota2, nota3);
    Obtener_promedio(nota1, nota2, nota3);

    return 0;
}