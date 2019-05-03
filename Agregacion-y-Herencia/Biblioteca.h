//
// Created by Gabriel Spranger Rojas on 2019-05-03.
//

#ifndef AGREGACION_Y_HERENCIA_BIBLIOTECA_H
#define AGREGACION_Y_HERENCIA_BIBLIOTECA_H

#include "Volumen.h"
#include <iostream>
#include <vector>

using namespace std;

class Biblioteca {
    vector<Volumen*> volumenes = {};
    int max_volumenes = 0, max_revistas = 0;
public:
    Biblioteca() {}
    ~Biblioteca();

    void mostrar_biblioteca();
    void incluir(Volumen*);

    int get_numero_de_volumenes() { return volumenes.size(); }
};


#endif //AGREGACION_Y_HERENCIA_BIBLIOTECA_H
