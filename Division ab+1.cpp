#include<iostream>

using namespace std;

main(){
	
	float a, b, resultado=0;
	
	cout<<"\nDigite el valor de a: "; cin>>a;
	cout<<"\nDiite el valor de b: "; cin>>b;
	
	resultado = (a/b)+1;
	
	cout.precision(2);
	cout<<"\nEl resultado de la operacion es:"<<resultado<<endl;
	
	
	return 0;
}