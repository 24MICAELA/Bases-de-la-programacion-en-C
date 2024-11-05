#include "arrays.h"
#include <iostream>

void ejecutarArrays() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    std::cout << "Los primeros 10 numeros naturales son:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << numeros[i] << "\n";
    }
}

