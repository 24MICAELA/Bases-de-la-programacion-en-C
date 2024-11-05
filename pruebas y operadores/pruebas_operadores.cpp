#include "pruebas_operadores.h"
#include <iostream>

using namespace std;

void ejecutarPruebas() {
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad.\n";
    } else {
        cout << "Eres menor de edad.\n";
    }

    int num1, num2;
    cout << "Ingresa dos números enteros:\n";
    cout << "Número 1: ";
    cin >> num1;
    cout << "Número 2: ";
    cin >> num2;

    cout << "Suma: " << (num1 + num2) << "\n";
    cout << "Resta: " << (num1 - num2) << "\n";
    cout << "Multiplicación: " << (num1 * num2) << "\n";
    cout << "División: " << (num1 / num2) << "\n";
    cout << "Módulo: " << (num1 % num2) << "\n";

    cout << "Comparaciones:\n";
    cout << "¿Es " << num1 << " igual a " << num2 << "? " << (num1 == num2) << "\n";
    cout << "¿Es " << num1 << " diferente a " << num2 << "? " << (num1 != num2) << "\n";
    cout << "¿Es " << num1 << " mayor que " << num2 << "? " << (num1 > num2) << "\n";
    cout << "¿Es " << num1 << " menor que " << num2 << "? " << (num1 < num2) << "\n";

    bool condición1, condición2;
    cout << "Ingresa dos condiciones (1 para verdadero, 0 para falso):\n";
    cout << "Condición 1: ";
    cin >> condición1;
    cout << "Condición 2: ";
    cin >> condición2;

    cout << "Condición 1 Y Condición 2: " << (condición1 && condición2) << "\n";
    cout << "Condición 1 O Condición 2: " << (condición1 || condición2) << "\n";
    cout << "NO Condición 1: " << (!condición1) << "\n";
}
