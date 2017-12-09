cmake_minimum_required(VERSION 3.9)
project(TDAGrafo)

set(CMAKE_CXX_STANDARD 11)

add_executable(TDAGrafo main.cpp Vertice.cpp Vertice.h Arista.cpp Arista.h ListGrafo.cpp ListGrafo.h Grafo.cpp Grafo.h)