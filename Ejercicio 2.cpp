#include<iostream>

using namespace std;

main(){
	
	float a,b,c ,d, resultado=0 , resultadoDenominador=0 , resultadoNumerador=0;
	
	cout<<"\nDigite el valor de a:";cin>>a;
	cout<<"\nDigite el valor de b:";cin>>b;
	cout<<"\nDigite el valor de c:";cin>>c;
	cout<<"\nDigite el valor de d:";cin>>d;
	
	resultadoDenominador = (c+d);
	resultadoNumerador =(a+b);
	resultado = (resultadoNumerador/resultadoDenominador);
	
	cout.precision(3);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	


}