#include <iostream>
#include <string>
#include <fstream> //libreira para archivos
// #include "facultad_01.cpp"
#include "Class estudiante.cpp"

using namespace std;

int main()
{
    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de Zootecnia", "FZ");

    // estudiantes de FIIs
    Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
    est1.setFacultad(facu1);
    Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    est2.setFacultad(facu1);
    Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    est3.setFacultad(facu1);
    Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");
    est4.setFacultad(facu1);

    // Estudiantes de ZOOTECNIA
    Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    est5.setFacultad(facu2);
    Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    est6.setFacultad(facu2);
    Estudiante est7("20220050", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
    est7.setFacultad(facu2);
    Estudiante est8("2022002", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");
    est8.setFacultad(facu2);

    Estudiante Estudiantes[] = {est1, est2, est3, est4, est5, est6, est7, est8};

    int tamanio_Estudiantes = sizeof(Estudiantes) / sizeof(Estudiantes[0]);

    Facultad facultades[] = {facu1, facu2};

    // declaramos
    ofstream archivo("Datos_estudiantes.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo << "Datos de los estudiantes: \n";
    archivo << "----------------------------------------------------------------" << endl;
    archivo << facultades[0].toString() << endl;
    archivo << "----------------------------------------------------------------" << endl;

    for (int i = 0; i < tamanio_Estudiantes; i++)
    {
        if (Estudiantes[i].getFacultad().getSigla() == "FIIS")
        {
            archivo << Estudiantes[i].toString2() << endl;
        }
    }

    archivo << "----------------------------------------------------------------" << endl;
    archivo << facultades[1].toString() << endl;
    archivo << "----------------------------------------------------------------" << endl;
    for (int i = 0; i < tamanio_Estudiantes; i++)
    {
        if (Estudiantes[i].getFacultad().getSigla() == "FZ")
        {
            archivo << Estudiantes[i].toString2() << endl;
        }
    }
    archivo.close();
    return 0;
}