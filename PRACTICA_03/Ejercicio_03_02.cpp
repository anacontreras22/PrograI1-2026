// Materia: Programación I, Paralelo 4 
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Fecha creación: 03/03/2026 

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int n, resultado, caras = 0, cruces = 0;

    cout << "Veces a lanzar: "; 
	cin >> n;

    for (int i = 0; i < n; i++) {
        resultado = rand() % 2; 
        if (resultado == 0) caras++;
        else cruces++;
    }

    
    float porc_cara = (float)caras / n * 100;
    float porc_cruz = (float)cruces / n * 100;

    cout << "Porcentaje de Caras: " << porc_cara << "%" << endl;
    cout << "Porcentaje de Cruces: " << porc_cruz << "%" << endl;

    return 0;
}
