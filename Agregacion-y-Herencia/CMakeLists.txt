cmake_minimum_required(VERSION 3.13)
project(Agregacion_y_Herencia)

set(CMAKE_CXX_STANDARD 17)

add_executable(Agregacion_y_Herencia main.cpp Biblioteca.h Biblioteca.cpp Volumen.h Volumen.cpp Libro.h Libro.cpp Revista.h Revista.cpp catch.hpp test.cpp)