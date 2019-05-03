//
// Created by Gabriel Spranger Rojas on 2019-05-03.
//

#include "Libro.h"
#include "Volumen.h"
#include "Revista.h"

Volumen::~Volumen() {

}

void Volumen::mostrar() {
    auto var = dynamic_cast<Libro*>(this);

    if (var != nullptr) {
        var->mostrar();
    } else {
        auto aux = dynamic_cast<Revista*>(this);
        aux->mostrar();
    }
}



