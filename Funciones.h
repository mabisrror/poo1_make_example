#include <iostream>
#include <vector>
#include "Profesor.h"
#include "Alumno.h"

typedef string texto;
typedef int entero;
using namespace std;


template <typename T>
void encontrarMayor(vector<T*> objetos) {
    T* mayor = objetos[0];
    for (int i = 0; i < objetos.size(); i++) {
        if (!mayor->es_mayor_que(*objetos[i])) {
            mayor = objetos[i];
        }
    }

    cout<<"El mayor es: "<<mayor->get_nombre()<<", "<<mayor->get_apellido()<<", "<<mayor->get_edad()<<"\n";
}


template <typename T>
void mostrarDatosBasicos(T* objeto)
{
    cout<<"--------\n";
    cout<<"Nombre: "<<objeto->get_nombre()<<endl;
    cout<<"Apellidos: "<<objeto->get_apellido()<<endl;
    cout<<"Edad: "<<objeto->get_edad()<<endl;
    cout<<endl;
}

template <typename T>
void pedirDatosBasicos(T* objeto)
{
    cout<<"--------\n";
    texto temps;
    entero tempe;

    cout<<"Nombre: ";
    getline(cin, temps);
    objeto->set_nombre(temps);
    cout<<"Apellidos: ";
    getline(cin, temps);
    objeto->set_apellido(temps);
    cout<<"Edad: ";
    cin>>tempe;
    objeto->set_edad(tempe);
    cin.ignore();
    cout<<endl;
}




