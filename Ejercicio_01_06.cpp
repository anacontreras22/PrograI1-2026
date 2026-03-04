// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet:10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 3/03/2026


#include<iostream>
using namespace std;
int main(){
	
	int num=0;
	cout<<"Ingrese un numero para ver si es un numero par o impar"<<endl;
	cin>>num;
	
	if(num%2 ==0)
	{
		cout<<"El numero ingresado es par "<<endl;
	} else{
		cout<<"El numero ingresado es impar"<<endl;
	}
	
	return 0;
}
