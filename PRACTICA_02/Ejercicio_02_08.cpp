// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet: 10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int n;
    float precio, totalVentas = 0, totalIVA = 0;

    cout << "Cantidad de productos vendidos: "; 
	cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Precio del producto " << i << ": "; 
		cin >> precio;
        
        float precioConIVA = precio * 1.13;
        totalIVA += precio * 0.13;
        totalVentas += precioConIVA;
    }

    cout << "\nMonto total antes de descuento: " << totalVentas << " Bs." << endl;

    if (totalVentas > 2500) {
        totalVentas *= 0.95; 
        cout << "Se aplico un descuento del 5%." << endl;
    }

    cout << "Pago final: " << totalVentas << " Bs." << endl;
    cout << "Total IVA (13%) a pagar al SIN: " << totalIVA << " Bs." << endl;

    return 0;
}
