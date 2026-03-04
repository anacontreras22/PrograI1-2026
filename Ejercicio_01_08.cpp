// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet:10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 3/03/2026


#include<iostream>
using namespace std;
int main(){
	int num1=0, num2=0, num3=0, num4=0;
	cout<<"Ingrese 3 numeros: "<<endl;
	cin>>num1>>num2>>num3;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num4;
	
	if(num1 == num4 ||num2 == num4||num3==num4){
		cout<<"El numero que ingreso coincide con un numero ya ingresado"<<endl;
	
	}else{
	cout<< " "<<endl;	
	}
	return 0;
}
