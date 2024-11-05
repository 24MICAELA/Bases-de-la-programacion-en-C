#include "variables.h"
#include <iostream>
#include <string>

using namespace std;

string saludo = "Hola, ";

void ejecutarVariables() {

    string nombre;
    int edad;
    double altura;
    char inicial;
    bool esEstudiante;

    cout << "Ingresa tu nombre: ";
    cin >> nombre;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa tu altura en metros: ";
    cin >> altura;

    cout << "Ingresa la inicial de tu nombre: ";
    cin >> inicial;

    cout << "¿Eres estudiante? (1 para si, 0 para no): ";
    cin >> esEstudiante;

    cout << saludo << nombre << "! Tienes " << edad << " años, mides "
              << altura << " metros, y tu inicial es " << inicial << ".\n";

    if (esEstudiante) {
        cout << "Es genial que seas estudiante.\n";
    } else {
        cout << "Espero que encuentres tu camino en la vida.\n";
    }

    if (edad >= 18) {
        cout << "Eres mayor de edad.\n";
    } else {
        cout << "Eres menor de edad.\n";
    }

    cout << "Los primeros 5 números naturales son:\n";
    for (int i = 1; i <= 5; i++) {
        int cuadrado = i * i;
        cout << "El cuadrado de " << i << " es " << cuadrado << "\n";
    }
}

