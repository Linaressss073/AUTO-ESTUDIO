/*
	Ejercicio Determinar el mayor de 2 números
*/

#include<iostream>

using namespace std;

int main(){
	
	int n1, n2;
	
	cout<<"Ingrese el numero 1:\n";cin>>n1;
	cout<<"Ingrese el numero 2:\n";cin>>n2; 
	// guardar uno a uno las variables (TAMBIEN SE PUEDE GUARDAR A LA VEZ)
	// cin>>n1>>n2;
	
	if (n1==n2){
		cout<<("Ambos numeros son iguales");
	}
	else if (n1>n2 ){
		cout<<"El mayor es:"<<n1;
	}
	else{
		cout<<"El mayor es:"<<n2;
	}
	return 0;
}
