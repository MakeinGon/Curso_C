#include <iostream>
#include <string>
using namespace std;
class Estudiante{
    private:
    string codigo;
    string carrera;
    public:
    Estudiante(string _codigo, string _carrera){
        codigo=_codigo;
        carrera=_carrera;
    } 
    //get and set
    void setDatosEstudiante(string _codigo, string _carrera){
        codigo=_codigo;
        carrera=_carrera;
    }
    string getDataEstudiante(){
        return "Codigo de estudiante: "+codigo+", Carrera: "+carrera;
    }
    

};