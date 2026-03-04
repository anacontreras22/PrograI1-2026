// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese el valor de n: "; 
	cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}
