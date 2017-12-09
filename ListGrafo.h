//
// Created by Daniel Zavala on 8/12/2017.
//

#ifndef TDAGRAFO_LISTGRAFO_H
#define TDAGRAFO_LISTGRAFO_H

#include <iostream>
using namespace std;

template <typename GL>
struct Nodo{
    GL *dato;
    Nodo *prev;
    Nodo *next;

    Nodo(GL);
};

template <typename GL>
class ListGrafo {

private:
    Nodo <GL> *inicio;
    Nodo <GL> *final;

public:
    int cantelem = 0;
    void Agregar(GL);
    void borrar(string nom, int pos);
    void obtener(GL, int pos);
};


#endif //TDAGRAFO_LISTGRAFO_H
