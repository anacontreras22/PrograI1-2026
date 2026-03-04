// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;
int main() {
    int numero;

    cout << "Ingrese un numero entero (1-10): ";
    cin >> numero;
    if (numero >= 1 && numero <= 10) {
        cout << "Tabla de multiplicar del " << numero << ":" << endl;
               
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << (numero * i) << endl;
        }
    } 
    else {
        cout << "Error: El numero no esta en el rango solicitado." << endl;
    }

    return 0;
}

