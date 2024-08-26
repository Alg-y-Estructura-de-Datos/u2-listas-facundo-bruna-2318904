#include <iostream>
#include <string>
using namespace std;
#include "Lista/ListaDoble.h"
void aniadirpagina(ListaDoble<string>&Lista){
    cout<<"ingrese la pagina que desea aniadir\n";
    string pagina;
   cin>>pagina;
    Lista.insertarUltimo(pagina);
}
void retroceder(ListaDoble<string>&Lista,int &pos){
    if(Lista.esVacia()){cout<<"la lista esta vacia\n";
        return;}
    if(pos-1<0){
        cout<<"no existe esa posicion, ya esta en el primer elemento\n";
        return;
    }
    cout<<Lista.getDato(pos-1)<<endl;
    pos--;
}
void avanzar(ListaDoble<string>&Lista,int &pos){
    if(Lista.esVacia()){cout<<"la lista esta vacia\n";
        return;}
    if(pos+1==Lista.getTamanio()){
        cout<<"no existe esa posicion, ya esta en el ultimo elemento\n";
        return;
    }
    cout<<Lista.getDato(pos+1)<<endl;
    pos++;
}
int main(){
    int opcion=1,pos=0;
    ListaDoble<string>list;
    while (opcion!=0){
        cout<<"1-aniadir pagina\n"
              "2-mostrar historial\n"
              "3-avanzar pagina\n"
              "4-retroceder pagina\n"
              "0-salir\n";
        cin>>opcion;
        switch (opcion) {
            case 1:{
                aniadirpagina(list);
                pos=list.getTamanio()-1;
                break;}
            case 2:{if(list.esVacia()){cout<<"la lista esta vacia\n";
                    break;}
                list.imprimir();
                break;}
            case 3:{
                avanzar(list,pos);
                cout<<"actualmente estas en la posicion "<<pos<<endl;
                break;}
            case 4:{
                retroceder(list,pos);
                cout<<"actualmente estas en la posicion "<<pos<<endl;
                break;
            }

        }
    }
}