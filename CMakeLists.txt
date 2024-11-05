cmake_minimum_required(VERSION 3.29)
project(Bases_de_la_programacion_en_C)

set(CMAKE_CXX_STANDARD 14)

include_directories(arrays)
include_directories(bucle)
include_directories("pruebas y operadores")
include_directories(variables)

add_executable(Bases_de_la_programacion_en_C
    arrays/arrays.cpp
    arrays/arrays.h
    bucle/bucle.cpp
    bucle/bucle.h
    "pruebas y operadores/pruebas_operadores.cpp"
    "pruebas y operadores/pruebas_operadores.h"
    variables/variables.cpp
    variables/variables.h
    main.cpp)
