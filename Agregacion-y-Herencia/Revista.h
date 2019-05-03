//
// Created by Gabriel Spranger Rojas on 2019-05-03.
//

#ifndef AGREGACION_Y_HERENCIA_REVISTA_H
#define AGREGACION_Y_HERENCIA_REVISTA_H


#include "Volumen.h"

class Revista: public Volumen {
    int id_revista;
public:
    Revista(string nombre, int numero_de_volumen, int id_revista): Volumen(nombre, numero_de_volumen), id_revista{id_revista} {}

    void mostrar() override;
};


#endif //AGREGACION_Y_HERENCIA_REVISTA_H
