#include <iostream>
using namespace std;
#include "Lista/ListaDoble.h"
class estudiante{
private:string m_nombre;
    int m_edad;
public:
    estudiante():m_nombre{'\0'},m_edad{0}{};
    estudiante(string nombre,int edad):m_nombre{nombre},m_edad{edad}{};
    string getnombre(){
        return m_nombre;
    }
    int getedad(){
        return m_edad;
    }
    void setnombre(string nombre){
        m_nombre=nombre;
    }
    void setedad(int edad){
        m_edad=edad;
    }
   
};

void agregarestudiante(ListaDoble<estudiante>&estudiantes){
    cout<<"ingrese el nombre del estuduante\n";
    string nom;
    cin>>nom;
    cout<<"ingrese la edad del estudiante\n";
    int edad;
    cin>>edad;
    estudiante student(nom,edad);
    estudiantes.insertarUltimo(student);
}
void imprimir(ListaDoble<estudiante>&estudiantes){
    estudiante est;
    int tamanio=estudiantes.getTamanio();
    for (int i = 0; i < tamanio; ++i) {
        est=estudiantes.getDato(i);
        cout<<"el nombre del estudiante "<<i+1<<" es: "<<est.getnombre()<<endl
        <<"y tiene "<<est.getedad()<<" anios\n";
    }
}
void buscarpornombre(ListaDoble<estudiante>&estudiantes){
    estudiante est;
    cout<<"ingrese el nombre del estudiante que desea encontrar\n";
    string nom;
    cin>>nom;
    int tamanio=estudiantes.getTamanio();
    for (int i = 0; i < tamanio; ++i) {
        est=estudiantes.getDato(i);
        if(est.getnombre()==nom){
            cout<<"se encontro al estudiante y su edad es: "<<est.getedad()<<endl;
            i=tamanio;
        } else if(i==tamanio-1){
            cout<<"no se encontro el estudiante\n";
        }
    }
}
void eliminarestudiante(ListaDoble<estudiante>&estudiantes){
    estudiante est;
    cout<<"ingrese el nombre del estudiante que desea eliminar\n";
    string nom;
    cin>>nom;
    int tamanio=estudiantes.getTamanio();
    for (int i = 0; i < tamanio; ++i) {
        est=estudiantes.getDato(i);
        if(est.getnombre()==nom){
            estudiantes.remover(i);
        } else if(i==tamanio-1){
            cout<<"no se encontro el estudiante\n";
        }
    }
}
void contar(ListaDoble<estudiante>&estudiantes){
    cout<<"la cantidad de estudiantes es: "<<estudiantes.getTamanio();
}
#ifndef PLANTILLA_A1_ESTUDIANTE_H
#define PLANTILLA_A1_ESTUDIANTE_H

#endif //PLANTILLA_A1_ESTUDIANTE_H
