//
// Created by Gabriel Spranger Rojas on 2019-05-03.
//
#include <vector>

#include "Biblioteca.h"
using namespace std;

Biblioteca::~Biblioteca() {
    for (int i = 0; i < volumenes.size(); ++i) {
        delete volumenes[i];
    }
}

void Biblioteca::mostrar_biblioteca() {
    for (int i = 0; i < volumenes.size(); ++i) {
        cout << "Volumen #" << i+1 << " | ";
        volumenes[i]->mostrar();
    }
}

void Biblioteca::incluir(Volumen* v) {
    volumenes.push_back(v);
}
