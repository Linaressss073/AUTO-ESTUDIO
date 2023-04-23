/*
Sentencia if

if(condicion){
	Instrucciones1;
	}
	else{
		Instrucciones 2;
	}
	
	
	=)  es para asignacion
	==) es para comprobar ej( num==dato)
	!=) es diferente
	>=) mayor o igual que
	<=) menor o iguaL que
	
*/



#include<iostream>


using namespace std;

int main(){
	
	int numero, dato= 5;
	
	cout<<("Digite un numero:\n");cin>>numero;
	
	if(numero <= dato){
		cout<<"El numero es menor o igual a 5";
	}
	else{
		cout<<"EL numero es mayor a 5";
	}
	
	return 0;
}
