//
// Created by Daniel Zavala on 8/12/2017.
//

#include "Grafo.h"
#include <iostream>

using namespace std;
class Vertice;
class Arista;
class ListaGrafo;

Grafo::Grafo() {

}

void Grafo::AgregarVertice(string nom) {
    vertices.Agregar(new Vertice(nom));
    cantver++;
}

void Grafo::EliminarVertice(string nom, int pos) {
    vertices.borrar(nom,pos);
    cantver --;
}

void Grafo::AgregarArista(int peso, Vertice *ini, Vertice *fin) {
    Arista *novo = new Arista();
    for (int i = 0; i < vertices.cantelem; i++){
     if(ini->nom == ini->nom) {
         return;
     }
        if(ini->nom == NULL){
            novo->inicial = vertices.Agregar(new Vertice());
        }
    }
}
