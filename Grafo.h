//
// Created by Daniel Zavala on 8/12/2017.
//

#ifndef TDAGRAFO_GRAFO_H
#define TDAGRAFO_GRAFO_H

#include "Arista.h"
#include "Vertice.h"
#include "ListGrafo.h"

#include <iostream>
using namespace std;


class Grafo {
private:
    ListGrafo <Vertice *> vertices;
    int cantver = 0;

public:
    Grafo();

    void AgregarVertice(string nom);
    void EliminarVertice(string nom, int pos);
    void AgregarArista(int peso, Vertice *ini, Vertice *fin);
    void EliminarArista(int peso, Vertice *inicio, Vertice *fin);

};


#endif //TDAGRAFO_GRAFO_H
