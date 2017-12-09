//
// Created by Daniel Zavala on 8/12/2017.
//

#include "ListGrafo.h"
#include <iostream>
using namespace std;

template<typename GL>
void ListGrafo<GL>::Agregar(GL vertice) {
    int pos;
    Nodo <GL> *nuevo;
    for(int i = 0; i < cantelem; i++){
        if(pos == 0){
            nuevo = new GL(vertice);
            inicio = nuevo->next;
            inicio->prev = NULL;
            cantelem ++;
            return;
        }
    }
}

template<typename GL>
void ListGrafo<GL>::obtener(GL *array, int pos) {
    return array[pos];
}

template<typename GL>

void ListGrafo<GL>::borrar(string nom, int pos) {

Nodo <GL> *temp = inicio;
    if(pos == 0){
        inicio = temp->next;
        inicio->prev = NULL;
        cantelem --;
        delete temp;
        return;
    }

    else if(pos == cantelem - 1){
        temp = final;
        final = temp->prev;
        final->next = NULL;
        cantelem --;
        delete temp;
        return;
    }

    else{
        for(int i = 0; i <= pos; i++){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        cantelem --;
        delete temp;
        return;
    }
}
