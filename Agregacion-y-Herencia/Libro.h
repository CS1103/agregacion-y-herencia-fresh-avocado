//
// Created by Gabriel Spranger Rojas on 2019-05-03.
//

#ifndef AGREGACION_Y_HERENCIA_LIBRO_H
#define AGREGACION_Y_HERENCIA_LIBRO_H

#include <string>

#include "Volumen.h"

using namespace std;

class Libro: public Volumen {
    int id_libro;

public:
    Libro(string nombre, int numero_de_volumen, int id_libro): Volumen(nombre, numero_de_volumen), id_libro{id_libro} {}

    void mostrar() override;
};


#endif //AGREGACION_Y_HERENCIA_LIBRO_H
