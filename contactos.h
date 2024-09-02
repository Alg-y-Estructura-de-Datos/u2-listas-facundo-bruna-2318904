#include <iostream>
using namespace std;
#include "Lista/CircList.h"
class contacto{
private:
    string m_nombre;
    int m_numero;
public:
    contacto():m_nombre{'\0'},m_numero{0}{};
    contacto(string nom,int num):m_nombre{nom},m_numero{num}{};
    string getnombre(){
        return m_nombre;
    }
    int getnumero(){
        return m_numero;
    }
    void setnombre(string nom){
        m_nombre=nom;
    }
    void setnum(int num){
        m_numero=num;
    }
    bool operator==(const contacto& other) const {
        return m_nombre == other.m_nombre;
    }
};
void eliminarcontacto(CircList<contacto>&contactos){
    string nom;
    cout<<"ingrese el nombre del contacto\n";
    cin>>nom;
    contacto contact;
    int tamanio=contactos.getTamanio();
    for (int i = 0; i <tamanio ; ++i) {
        contact=contactos.getDato(i);
        if(contact.getnombre()==nom){
            contactos.eliminarPorValor(contact);
            cout<<"cpntacto eliminado\n";
            i=tamanio;
        } else if(i==tamanio-1){cout<<"no se encontro el contacto\n";
            return;}
    }
}
void buscarpornombre(CircList<contacto>&contactos){
    string nom;
    cout<<"ingrese el nombre del contacto\n";
    cin>>nom;
    contacto contact;
    int tamanio=contactos.getTamanio();
    for (int i = 0; i <tamanio ; ++i) {
        contact=contactos.getDato(i);
        if(contact.getnombre()==nom){
            cout<<"contacto encontrado, el numero es: "<<contact.getnumero()<<endl;
            i=tamanio;
        } else if(i==tamanio-1){cout<<"no se encontro el contacto\n";
            return;}
    }
}
void imprimir(CircList<contacto>&contactos){
    contacto contact;
    for (int i = 0; i < contactos.getTamanio(); ++i) {
        contact=contactos.getDato(i);
        cout<<"nombre: "<<contact.getnombre()<<endl;
        cout<<"numero: "<<contact.getnumero()<<endl;
    }
}
void agregarcontacto(CircList<contacto>&contactos){
    contacto contact;
    cout<<"ingrese el nombre del contacto\n";
    string nom;
    cin>>nom;
    cout<<"ingrese el numero de telefono\n";
    int num;
    cin>>num;
    contact.setnum(num);
    contact.setnombre(nom);
    contactos.insertarUltimo(contact);
}
#ifndef PLANTILLA_A1_CONTACTOS_H
#define PLANTILLA_A1_CONTACTOS_H

#endif //PLANTILLA_A1_CONTACTOS_H
