#include <iostream>
using namespace std;
#include "Lista/Lista.h"
    void swap(Lista<int>&list1,Lista<int>&list2){
        Lista<int> aux1,aux2;

        for (int i = 0; i < list1.getTamanio(); i++) {
            aux1.insertarUltimo(list1.getDato(i));
        }

        for (int i = 0; i < list2.getTamanio(); i++) {
            aux2.insertarUltimo(list2.getDato(i));
        }
        list1.vaciar();
        list2.vaciar();

        for (int i = 0; i < aux2.getTamanio(); i++) {
            list1.insertarUltimo(aux2.getDato(i));
        }
        for (int i = 0; i < aux1.getTamanio(); i++) {
            list2.insertarUltimo(aux1.getDato(i));
            }
    }
int main() {
    int n,tamanio;
    Lista<int>lista1;
    Lista<int>lista2;
    cout<<"ingrese el tamanio de la lista1\n";
    cin>>tamanio;
    for (int j = 0; j <tamanio ; ++j) {
        cout<<"ingrese el dato de la posicion "<<j<< endl;
        cin>>n;
        lista1.insertarUltimo(n);
    }
    cout<<"ingrese el tamanio de la lista2\n";
    cin>>tamanio;
    for (int j = 0; j <tamanio ; ++j) {
        cout<<"ingrese el dato de la posicion "<<j<< endl;
        cin>>n;
        lista2.insertarUltimo(n);
    }
swap(lista1,lista2);
    lista1.print();
    lista2.print();

    return 0;
}
