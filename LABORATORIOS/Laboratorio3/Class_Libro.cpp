#include <iostream>
using namespace std;
class Libro
{
private:
    string codigoLibro;
    string titulo;
    string categoria;
    string autor;

public:
    Libro(string _codigoLibro = "", string _titulo = "", string _categoria = "", string _autor = "")
    {
        codigoLibro = _codigoLibro;
        titulo = _titulo;
        categoria = _categoria;
        autor = _autor;
    }
    string getcodigoLibro()
    {
        return codigoLibro;
    }
    void setcodigoLibro(string _codigoLibro)
    {
        codigoLibro = _codigoLibro;
    }
    string getTitulo()
    {
        return titulo;
    }
    void setTitulo(string _titulo)
    {
        titulo = _titulo;
    }
    string getCategoria()
    {
        return categoria;
    }
    void setCategoria(string _categoria)
    {
        categoria = _categoria;
    }
    string getAutor()
    {
        return autor;
    }
    void setAutor(string _autor)
    {
        autor = _autor;
    }
    string infoLibro()
    {
        return "------>Titulo:" + getTitulo() + "------>Autor: " + getAutor() + "------>Codigo" + getcodigoLibro();
    }
};