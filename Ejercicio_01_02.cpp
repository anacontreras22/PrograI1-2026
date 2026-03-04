// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet:10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 3/03/2026

#include<iostream>
using namespace std;
int main(){
	double precio=0;
	double iva=0.13; // porque poner 13% no es correcto para la sintaxis del programa
	double suma_total=0;
	
	cout<<"Ingrese el precio del produto: "<<endl;
	cin>>precio;
	
	suma_total= precio +iva;
	
	cout<< "El precio mas el Iva es: "<< suma_total<<endl;
	
	return 0;
}
