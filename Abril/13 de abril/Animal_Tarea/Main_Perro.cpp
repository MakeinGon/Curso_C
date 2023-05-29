#include <iostream>
#include <string>
#include <ctime>
#include "Perro.cpp"

using namespace std;

int main()
{
    Perro can1("Firulay", true, true, "Macho", "2 orejas", "1 cola", "2 ojos azules", 4, true, "Pastor Aleman");
    Perro can2("Rocky", true, true, "Macho", "2 orejas", "1 cola", " ojos verdes", 4, true, "Rottweiler");
    Perro can3("Kira", true, true, "Hembra", "2 orejas", "1 cola", "2 ojos marrones", 4, true, "Pitbull");

    can1.Getdatos();
    can2.Getdatos();
    can3.Getdatos();

    return 0;
}