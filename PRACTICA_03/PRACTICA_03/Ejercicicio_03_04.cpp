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
    int n, num, suma = 0, mayor = 0, menor = 0;

    cout << "Cuantos numeros generar?: ";
	 cin >> n;

    for (int i = 0; i < n; i++) {
        num = rand() % 1000 + 1; 
        suma += num;

        if (num > mayor) mayor = num;
        if (num < menor) menor = num;
    }

    float promedio = (float)suma / n;

   
    cout << " Sumatoria: " << suma << endl;
    cout << " Promedio: " << promedio << endl;
    cout << " Mayor valor: " << mayor << endl;
    cout << " Menor valor: " << menor << endl;

    return 0;
}
