//
// Created by Gabriel Spranger Rojas on 2019-05-03.
//

#include "catch.hpp"
#include "Biblioteca.h"
#include "Libro.h"
#include "Revista.h"
#include "Volumen.h"

SCENARIO("Agregar a la biblioteca.") {
    GIVEN("Un libro y una revista.") {
        WHEN("Agregamos un libro y una revista a la bibliteca.") {
            THEN("Comprobar que se han agregado ambos elementos.") {
                Biblioteca biblioteca;
                Volumen* v1 = new Libro("100 años de soledad", 1, 1);
                Volumen* v2 = new Revista("Time", 2, 1);
                biblioteca.incluir(v1);
                biblioteca.incluir(v2);
                REQUIRE(biblioteca.get_numero_de_volumenes() == 2);
            }
        }
    }
}
