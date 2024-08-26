#include <iostream>
using namespace std;
#include "Lista/CircList.h"
void agregarfrase(CircList<string>& Lista){
    cout<<"ingrese la frase que desea agregar\n";
    string frase;
    getline(cin,frase);
    Lista.insertarUltimo(frase);
}
void eliminarfrase(CircList<string>& Lista){
    cout<<"ingrese la frase que desea eliminar\n";
string frase;
    getline(cin,frase);
    Lista.eliminarPorValor(frase);
}
void mostrarfrases(CircList<string>Lista){
    int i=0,tamanio=Lista.getTamanio();
    if(Lista.esVacia()){
        cout<<"no hay fraces para mostrar\n";
        return;
    }
    while (true){
        cout<<Lista.getDato(i)<<" ";
        i++;
        if(i==tamanio-1){
           cout<<Lista.getDato(i)<<" ";
            i=0;
            cout<<endl;
        }
    }
}
int main(){
    CircList<string>List;
    agregarfrase(List);
    agregarfrase(List);
  agregarfrase(List);
  agregarfrase(List);
  agregarfrase(List);
  eliminarfrase(List);
    mostrarfrases(List);

}
