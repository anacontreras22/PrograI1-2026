// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet:10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 3/03/2026

#include<iostream>
using namespace std;
int main(){
	double nota_final=0, practicas=0, teorica=0, participacion=0;
	cout<<"Ingrese su nota de practicas: "<<endl;
	cin>>practicas;
	cout<<"Ingrese su nota de teoria: "<<endl;
	cin>>teorica;
	cout<<"Ingrese su nota de participacion"<<endl;
	cin>>participacion;

	nota_final=(practicas*0.30) + (teorica*0.60) + (participacion*0.10);
	
	cout<<"Su nota final es: "<<nota_final<<endl;
	return 0;
}
