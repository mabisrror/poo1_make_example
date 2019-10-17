#include <string>
#include <iostream>
#include "Curso.h"
using namespace std;

class Alumno {
private:
    string nombre;
    string apellido;
    int edad;
    int creditos{0};
public:
    Alumno() {}
    Alumno(string n, string ape, int _edad) : nombre(n), apellido(ape), edad(_edad) {}
    Alumno(string n, int cr) : nombre(n), creditos(cr) {}
    string get_nombre() {return nombre;}
    string get_apellido() {return apellido;}
    int get_edad() {return edad;}
    int get_creditos() {return creditos;}
    void set_nombre(string n) {nombre = n;}
    void set_apellido(string a) {apellido = a;}
    void set_edad(int e) {edad = e;}
    void set_creditos(int cr) {creditos = cr;}
    void aprobar(Curso* curso) {
        creditos += curso->get_creditos();
    }
    bool es_mayor_que(Alumno& a) {
        return get_edad() > a.get_edad();
    }
};
