// Materia: Programación I, Paralelo 4
// Autor: Ana Beatriz Contreras Duran
// Carnet:10953710
// Carrera del estudiante: Ingenieria mecatronica
// Fecha creación: 3/03/2026


#include<iostream>
using namespace std;
int main(){
	int edad=0;
	cout<<"Ingrese su edad: "<<endl;
	cin>>edad;
	if(edad>=18 && edad<=25){
		cout<<"La edad introducida esta dentro de los parametros"<<endl;
	}
	else{
		cout<<"La edad introducida no esta dentro de los parametros."<<endl;
	}
	
return 0;
}

