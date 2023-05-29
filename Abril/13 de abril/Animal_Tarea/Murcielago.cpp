#include <iostream>
#include <string>
#include <ctime>
#include "Animal.cpp"
class Murcielago : Animal
{
    private:
    string nombre;
    string tamanio;
    string color;
    string habitad;
    public:
    Murcielago(string _nombre, string _tamanio, string _color, string _habitad, string _orejas, string _colas, string _ojos, int _nro_patas, bool _dientes, string _familia) : Animal(_orejas, _colas, _ojos, _nro_patas, _dientes, _familia)
    {
        nombre = _nombre;
        tamanio = _tamanio;
        color = _color;
        habitad = _habitad;
    }
    // get and setter
    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    string getTamanio()
    {
        return tamanio;
    }
    void setTamanio(string _tamanio)
    {
        tamanio = _tamanio;
    }
    string getColor()
    {
        return color;
    }
    void setColor(string _color)
    {
        color = _color;
    }
    string getHabitad()
    {
        return habitad;
    }
    void setHabitad(string _habitad)
    {
        habitad = _habitad;
    }
    // funciones
    void getDatos()
    {
        cout<<"\n";
        cout<<"------------------------------------";
        cout<<"\n";
        cout << "DATOS DEL ANIMAL" << endl;
        cout << "Nombre: " << getNombre() << endl;
        cout << "Tamanio: " << getTamanio() << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Habitad:" << getHabitad() << endl;
        cout<<"-------------------------------------";
    }
};