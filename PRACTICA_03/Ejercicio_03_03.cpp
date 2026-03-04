// Materia: Programación I, Paralelo 4 
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Fecha creación: 03/03/2026 

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); 
    
    int num = rand() % 10 + 1; 
    long factorial = 1;

    cout << "Numero generado: " << num << endl;

    for (int i = 1; i <= num; i++) {
        factorial *= i; 
    }

    cout << "El factorial de " << num << " es: " << factorial << endl;

    return 0;
}
