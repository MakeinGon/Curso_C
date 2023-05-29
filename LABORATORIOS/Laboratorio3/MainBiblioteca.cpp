#include <iostream>
#include <fstream>
#include "Biblioteca.cpp"
#include "BibliotecarioUsuario.cpp"
using namespace std;
int main()
{
    // crear biblioteca
    Biblioteca b1("12454", "Los-Valles", "Av.Las Americas", "997-547-964");

    Usuario u1("2141", "22408574", "Mendoza", "Jorge", "felix.rar@gmail.com", "998-985-632", "Av.Las Americas");

    // libros
    Libro l1("1435", "Los Heraldos Negros", "2", "Cesar Vallejo");
    Libro l2("1452", "La ciudad y los perros", "7", "Mario Vargas Llosa");
    Libro l3("1478", "El caballero carmelo", "1", "Abraham Valdelomar");
    Libro l4("1465", "La serpiente de oro", "5", "Ciro Alegria");
    Libro l5("1422", "Romeo y Julieta", "14", "William Shakespeare");

    Libro libros[5] = {l1, l2, l3, l4, l5};
    int operador;
    Prestado pres1("");

    do
    {
        cout << "Bienvenidos a la biblioteca:" << b1.getNombre() << endl;
        cout << "||LIBROS||" << endl;
        cout << "Elija el numero de libro[1-3]:" << endl;
        cout << "[1].-----------" << l1.getTitulo() << endl;
        cout << "[2].----------- " << l2.getTitulo() << endl;
        cout << "[3].----------- " << l3.getTitulo() << endl;
        cin >> operador;
    } while (operador < 1 || operador > 3);

    switch (operador)
    {
    case 1:
        pres1.AgregarLibro(l1);
        cout << "Elijio el libro" << pres1.MostrarLibro(1);
        break;
    case 2:
        pres1.AgregarLibro(l2);
        cout << "Elijio el libro " << pres1.MostrarLibro(1);
        break;
    case 3:
        pres1.AgregarLibro(l3);
        cout << "Elijio el libro " << pres1.MostrarLibro(1);
        break;
    default:
        cout << "Opción no válida.";
        break;
    }

    // declaramos
    ofstream archivo("LibrosBiblioteca.txt");

    // Verificamos si el archivo se abriÃ³ correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    archivo << "********BIBLIOTECA********" << endl;
    archivo << b1.getNombre() << endl;

    archivo << b1.infoBiblioteca() << endl;
    archivo << pres1.MostrarLibro(1) << endl;
    archivo << "\n";
    archivo << "DATOS DEL USUARIO:" << endl;
    archivo << u1.infoUsuario();

    archivo.close();

    return 0;
}