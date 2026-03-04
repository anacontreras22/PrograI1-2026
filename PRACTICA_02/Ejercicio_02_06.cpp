// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Ingrese dos numeros distintos: "; 
	cin >> n1 >> n2;

    if (n1 > n2) {
        for (int i = n1; i >= n2; i--) cout << i << " ";
    } else {
        for (int i = n1; i <= n2; i++) cout << i << " ";
    }
    cout << endl;
    return 0;
}
