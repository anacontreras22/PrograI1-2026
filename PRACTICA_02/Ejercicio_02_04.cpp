// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int n;
    long long sumaFactoriales = 0;
    cout << "Ingrese un numero: "; 
	cin >> n;

    for (int i = 1; i <= n; i++) {
        long long factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        sumaFactoriales += factorial;
    }
    cout << "La suma de factoriales es: " << sumaFactoriales << endl;
    return 0;
}
