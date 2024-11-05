#include "bucle.h"
#include <iostream>

using namespace std;

void ejecutarBucle() {
    cout << "Numeros del 1 al 10:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\n";
    }

    int numero;
    cout << "Ingresa un numero:\n";
    cin >> numero;

    int contador = 1;
    cout << "Tabla de multiplicar del " << numero << ":\n";
    while (contador <= 10) {
        cout << numero << " x " << contador << " = " << (numero * contador) << "\n";
        contador++;
    }

    cout << "Ingresa otro numero:\n";
    cin >> numero;

    contador = 1;
    cout << "Tabla de multiplicar del " << numero << ":\n";
    do {
        cout << numero << " x " << contador << " = " << (numero * contador) << "\n";
        contador++;
    } while (contador <= 10);

    cout << "Uso de break en un bucle:\n";
    for (int i = 1; i <= 20; i++) {
        if (i == 11) {
            cout << "Se alcanzo el número 11, saliendo del bucle.\n";
            break;
        }
        cout << i << "\n";
    }
}
