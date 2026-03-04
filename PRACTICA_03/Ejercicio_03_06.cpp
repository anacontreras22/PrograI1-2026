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
    int N, n1, n2, n3, totalPanales;

    cout << "Ingrese la cantidad total de niños : "<<endl; 
    cin >> N;

    n1 = rand() % (N + 1);          
    n2 = rand() % (N - n1 + 1);     
    n3 = N - n1 - n2;               

  
    totalPanales = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Niños de 1 año: " << n1 << " (Consumen: " << n1 * 6 << ")" << endl;
    cout << "Niños de 2 años: " << n2 << " (Consumen: " << n2 * 3 << ")" << endl;
    cout << "Niños de 3 años: " << n3 << " (Consumen: " << n3 * 2 << ")" << endl;
    
    cout << "TOTAL PAÑALES AL DIA: " << totalPanales << endl;

    return 0;
}
