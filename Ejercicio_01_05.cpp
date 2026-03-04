// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet:10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 3/03/2026

#include<iostream>
#include<cmath>//biblioteca para sqrt
using namespace std;
int main(){
	int cateto_a=0, cateto_b=0 , suma_catetos=0;
	float hipotenusa=0;
	
	cout<< "Ingrese el valor de el catetto del lado A: "<<endl;
	cin>>cateto_a;
	cout<<"Ingrese el valor del cateto del lado B: "<<endl;
	cin>>cateto_b;
	
	suma_catetos=(cateto_a*cateto_a)+(cateto_b*cateto_b);
	hipotenusa= sqrt(suma_catetos); // squrt es para poder sacar la raiz cuadrada
	
	cout<< "El valor de la hipotenusa es: "<<hipotenusa<<endl;
	return 0;
}
