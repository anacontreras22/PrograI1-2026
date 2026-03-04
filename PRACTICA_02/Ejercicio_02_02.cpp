// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int n, sumaT = 0, sumaP = 0, sumaI = 0, sumaPrimos = 0;
    cout << "Ingrese numeros entre 1 y 100 :" << endl;

    do {
        cin >> n;
        if (n == 0) break;
        if (n < 0 || n > 100) {
            cout << "Numero fuera de rango (0-100)." << endl;
            continue;
        }

        sumaT += n;
        if (n % 2 == 0) sumaP += n; 
        else sumaI += n;

        
        int divisores = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) divisores++;
        }
        if (divisores == 2) sumaPrimos += n;

    } while (n != 0);

    cout << " Resultados " << endl;
    cout << "Suma Total: " << sumaT << endl;
    cout << "Suma Pares: " << sumaP << endl;
    cout << "Suma Impares: " << sumaI << endl;
    cout << "Suma Primos: " << sumaPrimos << endl;

    return 0;
}
