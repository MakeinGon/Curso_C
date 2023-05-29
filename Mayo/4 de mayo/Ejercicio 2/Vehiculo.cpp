#include <iostream>
using namespace std;

class Vehiculo
{
protected:
    // atributos
    string cilindrada_motor;
    int num_asientos;
    int num_ruedas;
    int num_puertas;
    string certificacion_seguridad;

public: // metodos y funciones
        // constructor
    Vehiculo(string _cilindrada_motor = "", int _num_asientos = 0, int _num_ruedas = 0, int _num_puertas = 0, string _certificacion_seguridad = "")
    {
        cilindrada_motor = _cilindrada_motor;
        num_asientos = _num_asientos;
        num_ruedas = _num_ruedas;
        num_puertas = _num_puertas;
        certificacion_seguridad = _certificacion_seguridad;
    }

    // Getters y setters
    string getCilindrada_motor()
    {
        return cilindrada_motor;
    }
    void setCilindrada_motor(string _cilindrada_motor)
    {
        cilindrada_motor = _cilindrada_motor;
    }
    int getNum_asientos()
    {
        return num_asientos;
    }
    void setNum_asientos(int _num_asientos)
    {
        num_asientos = _num_asientos;
    }
    int getNum_ruedas()
    {
        return num_ruedas;
    }
    void setNum_ruedas(int _num_ruedas)
    {
        num_ruedas = _num_ruedas;
    }
    int getNum_puertas()
    {
        return num_puertas;
    }
    void setNum_puertas(int _num_puertas)
    {
        num_puertas = _num_puertas;
    }
    string getCertificacion_seguridad()
    {
        return certificacion_seguridad;
    }
    void setCertificacion_seguridad(string _certificacion_seguridad)
    {
        certificacion_seguridad = _certificacion_seguridad;
    }
};
