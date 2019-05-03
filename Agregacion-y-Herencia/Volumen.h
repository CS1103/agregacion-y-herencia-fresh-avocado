//
// Created by Gabriel Spranger Rojas on 2019-05-03.
//

#ifndef AGREGACION_Y_HERENCIA_VOLUMEN_H
#define AGREGACION_Y_HERENCIA_VOLUMEN_H

#include <string>

using namespace std;

class Volumen {
protected:
    string nombre;
    int numero_de_volumen;

public:
    Volumen(string nombre, int numero_de_volumen): nombre{nombre}, numero_de_volumen{numero_de_volumen} {}
    ~Volumen();

    virtual void mostrar();
};

// Volumen* v = new Libro("L");
// auto var = dynamic_cast<Libro*>(v);
// if (var != nullptr) {
//  v es un libro;
// }

#endif //AGREGACION_Y_HERENCIA_VOLUMEN_H
