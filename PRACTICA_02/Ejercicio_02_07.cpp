// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int n, sumaDiv = 0;
    cout << "Ingrese un numero: ";
	 cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) sumaDiv += i;
    }

    if (sumaDiv == n) cout << n << " es un numero perfecto." << endl;
    else cout << n << " no es un numero perfecto." << endl;
    
    return 0;
}
