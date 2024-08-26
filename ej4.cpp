#include <iostream>
using namespace std;
#include "Lista/Lista.h"
void contvocal (Lista<char>list,char vocal){
    int contador;
    for (int i = 0; i < list.getTamanio(); ++i) {
        if(list.getDato(i)==vocal||list.getDato(i)==(vocal+32)||list.getDato(i)==vocal-32){contador++;}
    }
    cout<<"la cantidad de veces en la que aparece la vocal es: "<<contador;
}
int main(){
    string frase;
    Lista<char>lista;
    char vocal;
    cout<<"ingrese la frase\n";
    getline(cin,frase);
    cout<<"ingrese la vocal que desea contar\n";
    cin>>vocal;
    for (int i = 0; i < frase.length(); ++i) {
    lista.insertarUltimo(frase[i]);
    }
    lista.print();
    contvocal(lista,vocal);
}
