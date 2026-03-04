// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet:10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 3/03/2026

#include<iostream>
using namespace std;
int main(){
	int primer_num=0, segundo_num=0;
	int suma=0, resta=0, multiplicacion=0, division=0;
	cout<<"Ingrese un numero: "<<endl;
	cin>> primer_num;
	cout<<"Ingrese el segundo un numero menor al primer numero: "<< endl; //para que asi pueda dividirse el primero con el segundo.
	cin>> segundo_num;
	suma= primer_num+ segundo_num;
	resta= primer_num-segundo_num;
	multiplicacion=primer_num*segundo_num;
	division= primer_num/segundo_num;
	cout<< "La suma de los numero es: "<<suma<<endl;
	cout<<"La resta de los numero es: "<<resta<<endl;
	cout<<"La multiplicacion de los numeros es: "<<multiplicacion<<endl;
	cout<<"La division de los numeros es: "<<division<<endl;
	return 0;
}
 
