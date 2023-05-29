#include <iostream>
#include <string>
#include "Vehiculo.cpp"
using namespace std;
// clase Automovil
class Automovil : public Vehiculo
{
private: // atributos
    string color_automovil;
    string marca_automovil;

public: // metodos y funciones
        // constructor
    Automovil(string _color_automovil = "", string _marca_automovil = "", string _cilindrada_motor = "", int _num_asientos = 0, int _num_ruedas = 0, int _num_puertas = 0, string _certificacion_seguridad = "") : Vehiculo(_cilindrada_motor, _num_asientos, _num_ruedas, _num_puertas, _certificacion_seguridad)
    {
        color_automovil = _color_automovil;
        marca_automovil = _marca_automovil;
    }
    string getColor_automovil()
    {
        return color_automovil;
    }
    void setColor_automovil(string _color_automovil)
    {
        color_automovil = _color_automovil;
    }
    string getMarca_automovil()
    {
        return marca_automovil;
    }
    void setMarca_automovil(string _marca_automovil)
    {
        marca_automovil = _marca_automovil;
    }
    string toStringAutomoviles()
    {
        string datos = "Color: " + getColor_automovil() + "------->Marca: " + getMarca_automovil();
        return datos;
    }
    string toStringInfoAutomoviles()
    {
        return "Cilindrica de motor: " + getCilindrada_motor() + "--------->N° de asientos: " + to_string(getNum_asientos()) + "--------->N° de ruedas: " + to_string(getNum_ruedas()) + "--------->N° de puertas:" + to_string(getNum_puertas()) + "-------->Certificacion de seguridad: " + getCertificacion_seguridad();
    }
};
// Clase Motocicleta
class Motocicleta : public Vehiculo
{
private: // atributos
    string color_motocicleta;
    string marca_motocicleta;

public: // Metodos y funciones
    // constructor
    Motocicleta(string _color_motocicleta = "", string _marca_motocicleta = "", string _cilindrada_motor = "", int _num_asientos = 0, int _num_ruedas = 0, int _num_puertas = 0, string _certificacion_seguridad = "") : Vehiculo(_cilindrada_motor, _num_asientos, _num_ruedas, _num_puertas, _certificacion_seguridad)
    {
        color_motocicleta = _color_motocicleta;
        marca_motocicleta = _marca_motocicleta;
    }

    string getColor_motocicleta()
    {
        return color_motocicleta;
    }
    void setColor_motocicleta(string _color_motocicleta)
    {
        color_motocicleta = _color_motocicleta;
    }
    string getMarca_motocicleta()
    {
        return marca_motocicleta;
    }
    void setMarca_motocicleta(string _marca_motocicleta)
    {
        marca_motocicleta = _marca_motocicleta;
    }
    string toStringMotocicletas()
    {
        string datos = "Color: " + getColor_motocicleta() + "------->Marca: " + getMarca_motocicleta();
        return datos;
    }
    string toStringInfoMotocicletas()
    {
        return "Cilindrica de moto: " + getCilindrada_motor() + "--------->N° de asientos: " + to_string(getNum_asientos()) + "--------->N° de ruedas: " + to_string(getNum_ruedas()) + "--------->N° de puertas:" + to_string(getNum_puertas()) + "-------->Certificacion de seguridad: " + getCertificacion_seguridad();
    }
};
