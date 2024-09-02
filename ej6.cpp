#include <iostream>
using namespace std;
#include "Lista/CircList.h"
#include "contactos.h"
/*void agregarcontacto(CircList<contacto>&contactos) {
    contacto contact;
    cout << "ingrese el nombre del contacto\n";
    string nom;
    cin >> nom;
    cout << "ingrese el numero de telefono\n";
    int num;
    cin >> num;
    contact.setnum(num);
    contact.setnombre(nom);
    contactos.insertarUltimo(contact);
}*/
int main(){
    CircList<contacto>contactos;

    int opcion=10;
    while (opcion!=0){
        cout<<"1-agregar contacto\n"
              "2-mostrar contactos\n"
              "3-buscar contacto\n"
              "4-eliminar un contacto\n"
              "5-contar contactos\n"
              "0-salir\n";
        cin>>opcion;
        switch (opcion) {
            case 1:{
                agregarcontacto(contactos);
                break;
            }
            case 2:{
                if(contactos.esVacia()){cout<<"la lista esta vacia\n";}
                else{
                imprimir(contactos);}
                break;
            }
            case 3:{
                if(contactos.esVacia()){cout<<"la lista esta vacia\n";}
                else{
                    buscarpornombre(contactos);}
                break;
            }
            case 4:{
                if(contactos.esVacia()){cout<<"la lista esta vacia\n";}
                else{
                    eliminarcontacto(contactos);}
                break;
            }
            case 5:{
                cout<<"la cantidad de contactos es de: "<<contactos.getTamanio()<<endl;
                break;
            }

        }
    }
}
