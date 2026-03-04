// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0)); 
    int aleatorio = rand() % 100 + 1;
    int intento, contador = 0;

    cout << " un numero entre 1 y 100." << endl;

    do {
        cout << "Que numero crees que es?: "; 
		cin >> intento;
        contador++;
        if (intento > aleatorio) cout << "Es MENOR que ese..." << endl;
        else if (intento < aleatorio) cout << "Es MAYOR que ese..." << endl;
    } while (intento != aleatorio);

    cout << "Si, trataste " << contador << " veces." << endl;
    return 0;
}
