#include <string>
#include <iostream>
using namespace std;

class Curso {
private:
    string nombre;
    string carrera;
    int creditos;
public:
    Curso(string n, int cr): nombre(n), creditos(cr) {}
    string get_nombre() {return nombre;}
    string get_carrera() {return this->carrera;}
    int get_creditos() {return creditos;}
    void set_nombre(string n) {nombre = n;}
    void set_carrera(string carr) {carrera = carr;}
    void set_creditos(int cr) {creditos = cr;}

};


