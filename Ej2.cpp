#include <iostream>
using namespace std;
#include "Lista/Lista.h"
void eliminar(Lista<int>&lista,int n){
    int tamanio=lista.getTamanio();
    for (int i = 0; i <tamanio ; ++i) {
        if(lista.getDato(i)==n){lista.remover(i);
            tamanio--;}
    }
}
int main() {
    int n,tamanio;
    Lista<int>lista;
    cout<<"ingrese el tamanio de la lista\n";
    cin>>tamanio;
    for (int j = 0; j <tamanio ; ++j) {
        cout<<"ingrese el dato de la posicion "<<j<< endl;
        cin>>n;
        lista.insertarUltimo(n);
    }
    cout<<"ingrese el numero que desea eliminar\n";
    cin>>n;
    eliminar(lista,n);
    lista.print();
    return 0;
}
