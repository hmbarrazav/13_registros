#include "gestorContactos.h"
#include <iostream>
#include <string>
using namespace std;

void agregarContacto(contactoEmail lista[], contactoEmail cE, int &cant){
        lista[cant] = cE;
        cant++;
}

void mostrarContactos(contactoEmail lista[], int cant){
    for(int i = 0; i < cant; i++){
        cout<<"Contacto #"<<i+1<<endl;
        imprimeContacto(lista[i]);
        cout<<"----------------------------------------"<<endl;
    }
}