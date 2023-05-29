#include <iostream>
using namespace std;
class Class_suma
{
private:
    int a;
    int b;

public:
    Class_suma(int _a=0, int _b=0)
    {
        a = _a;
        b = _b;
    }
    int getA()
    {
        return a;
    }
    void setA(int _a)
    {
        a = _a;
    }
    int getB()
    {
        return b;
    }
    void setB(int _b)
    {
        b = _b;
    }

    void imprimir()
    {
        cout << "La suma es: " + to_string(a + b);
    }
};