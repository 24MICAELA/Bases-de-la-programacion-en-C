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
    cout << "Ingresa dos numeros enteros:\n";
    cout << "Número 1: ";
    cin >> num1;
    cout << "Número 2: ";
    cin >> num2;

    cout << "Suma: " << (num1 + num2) << "\n";
    cout << "Resta: " << (num1 - num2) << "\n";
    cout << "Multiplicacion: " << (num1 * num2) << "\n";
    cout << "División: " << (num1 / num2) << "\n";
    cout << "Módulo: " << (num1 % num2) << "\n";

    cout << "Comparaciones:\n";
    cout << "¿Es " << num1 << " igual a " << num2 << "? " << (num1 == num2) << "\n";
    cout << "¿Es " << num1 << " diferente a " << num2 << "? " << (num1 != num2) << "\n";
    cout << "¿Es " << num1 << " mayor que " << num2 << "? " << (num1 > num2) << "\n";
    cout << "¿Es " << num1 << " menor que " << num2 << "? " << (num1 < num2) << "\n";

    cout << "Comparando los dos numeros:\n";
    cout << "¿" << num1 << " es mayor que " << num2 << "? " << (num1 > num2 ? "true" : "false") << "\n";
    cout << "¿" << num1 << " es igual a " << num2 << "? " << (num1 == num2 ? "true" : "false") << "\n";
    cout << "¿" << num1 << " es diferente de " << num2 << "? " << (num1 != num2 ? "true" : "false") << "\n";
    cout << "¿" << num1 << " es menor que " << num2 << "? " << (num1 < num2 ? "true" : "false") << "\n";
    cout << "¿" << num1 << " es mayor o igual a " << num2 << "? " << (num1 >= num2 ? "true" : "false") << "\n";
    cout << "¿" << num1 << " es menor o igual a " << num2 << "? " << (num1 <= num2 ? "true" : "false") << "\n";

    cout << "Ejemplo de operadores logicos:\n";
    cout << "¿" << num1 << " es mayor que 10 y menor que 20? " << ((num1 > 10 && num1 < 20) ? "true" : "false") << "\n";
    cout << "¿" << num1 << " es menor que 5 o mayor que 15? " << ((num1 < 5 || num1 > 15) ? "true" : "false") << "\n";
}
