#include <string>
#include <iostream>
using namespace std;

class Profesor {
private:
    string nombre;
    string apellido;
    int edad;
    int horas_dictadas{0};
public:
    Profesor() {}
    string get_nombre() {return nombre;}
    string get_apellido() {return apellido;}
    int get_edad() {return edad;}
    int get_horas_dictadas() {return horas_dictadas;}
    void set_nombre(string n) {nombre = n;}
    void set_apellido(string a) {apellido = a;}
    void set_edad(int e) {edad = e;}
    void set_horas_dictadas(int hd) {horas_dictadas = hd;}
    bool es_mayor_que(Profesor& p) {
        return get_edad() > p.get_edad();
    }

};

