//
// Created by Daniel Zavala on 8/12/2017.
//

#ifndef TDAGRAFO_VERTICE_H
#define TDAGRAFO_VERTICE_H

#endif //TDAGRAFO_VERTICE_H

#include <iostream>
#include "ListGrafo.h"
#include "Arista.h"

using namespace std;

class ListGrafo;

class Vertice{

public:
    Vertice(string nom);
    string nom;
    ListGrafo<Arista *> aristas;
};