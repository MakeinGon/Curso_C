#include <iostream>
#include "Class_libro.cpp"
using namespace std;

class Prestado
{
private:
    string prestado;
    Libro libros[3];
    int numeroLibro = 0;

public:
    Prestado(string _prestado = "")
    {
        prestado = _prestado;
    }

    string getPrestadoo()
    {
        return prestado;
    }

    void setPrestado(string _prestado)
    {
        prestado = _prestado;
    }

    Libro getLibro(int id)
    {
        return libros[id];
    }
    void AgregarLibro(Libro libro)
    {
        if (numeroLibro < 3)
        {
            libros[numeroLibro] = libro;
            numeroLibro++;
        }
    }
    string MostrarLibro(int a)
    {

        if (sizeof(libros) / sizeof(libros[0]) != 0)
        {
            for (int i = 0; i < a; i++)
            {
                return libros[i].infoLibro();
            }
        }
    }
};
