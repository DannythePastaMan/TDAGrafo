//
// Created by Daniel Zavala on 8/12/2017.
//

#ifndef TDAGRAFO_ARISTA_H
#define TDAGRAFO_ARISTA_H

class Vertice;
class Arista {
public:
    Vertice *inicial;
    Vertice *final;
    int peso;
    int cantAri;

};

#endif //TDAGRAFO_ARISTA_H