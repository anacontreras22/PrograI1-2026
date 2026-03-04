// Materia: Programación I, Paralelo 4 
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Fecha creación: 03/03/2026 

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int n=0, cara=0, pares = 0;

    cout << "Lanzamientos: ";
	 cin >> n;

    for (int i = 1; i <= n; i++) {
        cara = rand() % 6 + 1;
        
        if (cara % 2 == 0) {
            pares++; 
        }
    }

    cout << "Frecuencia de caras pares: " << pares << " veces." << endl;

    return 0;
}
