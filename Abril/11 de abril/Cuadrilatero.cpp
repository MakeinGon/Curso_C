#include <iostream>
using namespace std;
class Cuadrilatero
{
private: // atributos
    float base;
    float altura;
    // metodos y funciones
public:
    // constructor
    Cuadrilatero(float _base, float _altura)
    {
        base = _base;
        altura = _altura;
    }
    float getbase()
    {
        return base;
    }
    void setbase(float _base)
    {
        base = _base;
    }
    float getaltura()
    {
        return altura;
    }
    void setaltura(float _altura)
    {
        altura = _altura;
    }
    // Funciones

    // funcion para calcular el area
    float area()
    {
        float area = (base * altura) / 2;
        return area;
    }
    //funcion para calcular el perimetro
    float perimetro()
    {
        float perimetro = 2 * (base + altura);
        return perimetro;
    }
};
int main()
{
    // Declararamos valores para el rectangulo
    Cuadrilatero rectangulo1(2, 4);
    Cuadrilatero rectangulo2(3, 6);
    Cuadrilatero rectangulo3(7, 5);
    // modificacion de los lados
    rectangulo1.setbase(3);
    rectangulo2.setbase(8);

    // sumatoria

    cout << "La sumatoria de los lados del rectangulo 1 es: " << rectangulo1.perimetro() << endl;
    cout << "La sumatoria de los lados del rectangulo 2 es: " << rectangulo2.perimetro() << endl;
    cout << "La sumatoria de los lados del rectangulo 3 es: " << rectangulo3.perimetro() << endl;

    cout << "la sumatoria total de todos los lados es: " << rectangulo1.perimetro() + rectangulo2.perimetro() + rectangulo3.perimetro() << endl;

    // area de cada objeto
    cout << "El area del rectangulo 1 es: " << rectangulo1.area() << endl;
    cout << "El area del rectangulo 2 es: " << rectangulo2.area() << endl;
    cout << "El area del rectangulo 3 es: " << rectangulo3.area() << endl;

    // perimetro de cada objeto
    cout << "El perimetro del rectangulo 1 es: " << rectangulo1.perimetro() << endl;
    cout << "El perimetro del rectangulo 2 es: " << rectangulo2.perimetro() << endl;
    cout << "El perimetro del rectangulo 3 es: " << rectangulo3.perimetro() << endl;

    // sumatoria de todas las areas
    cout << "La sumatoria de todas las areas son: " << rectangulo1.area() + rectangulo2.area() + rectangulo3.area() << endl;

    // sumatoria de todas los perimetros
    cout << "La sumatoria de todos los perimetros son: " << rectangulo1.perimetro() + rectangulo2.perimetro() + rectangulo3.perimetro() << endl;

    return 0;
}