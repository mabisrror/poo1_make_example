
#include "Funciones.h"
#include <vector>
using namespace std;

int main() {
    cout<<"Ejercicio1:\n";

    cout<<"Alumno:\n";
    Alumno *a1 = new Alumno();
    pedirDatosBasicos<Alumno>(a1);

    cout<<"Profesor:\n";
    Profesor* p1 = new Profesor();
    pedirDatosBasicos<Profesor>(p1);

    cout<<"Mostrar:\n";
    mostrarDatosBasicos<Alumno>(a1);
    mostrarDatosBasicos<Profesor>(p1);
    delete a1;
    delete p1;

    cout<<"\nEjercicio2\n\n";
    Alumno* pAlumno = new Alumno("Ernesto", 50);
    Curso* curso = new Curso("P001", 4);
    cout<<"Creditos antes de llevar: "<<pAlumno->get_nombre()<<": "<<pAlumno->get_creditos()<<"\n";
    pAlumno->aprobar(curso);
    cout<<"Creditos despues de llevar: "<<pAlumno->get_nombre()<<": "<<pAlumno->get_creditos()<<"\n";


    cout<<"\nEjericio3\n\n";
    Alumno* pA1 = new Alumno("Alan", "Garcia",50);
    Alumno* pA2 = new Alumno("Alejandro", "Toledo", 60);
    Alumno* pA3 = new Alumno("Carlos", "Mujica", 40);

    vector<Alumno*> v;
    v.push_back(pA1);
    v.push_back(pA2);
    v.push_back(pA3);

    encontrarMayor<Alumno>(v);

    return 0;

}


