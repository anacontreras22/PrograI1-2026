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
    int n, num, totalPrimos = 0;

    cout << "Cuantos numeros generar?: "; 
	cin >> n;

    for (int i = 0; i < n; i++) {
        num = rand() % 10000 + 1; 
        cout << num << " ";      

        
        int divisores = 0;
        for (int j = 1; j <= num; j++) {
            if (num % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            totalPrimos++;
        }
    }

    cout << "Total de numeros primos encontrados: " << totalPrimos << endl;

    return 0;
}
