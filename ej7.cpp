#include <iostream>
using namespace std;
#include "Estudiante.h"
#include "Lista/ListaDoble.h"
int main(){
    ListaDoble<estudiante>estudiantes;
    for (int i = 0; i <5 ; ++i) {
        agregarestudiante(estudiantes);
    }
    imprimir(estudiantes);
    buscarpornombre(estudiantes);
    eliminarestudiante(estudiantes);
    contar(estudiantes);
}