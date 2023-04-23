#include<iostream>

/*
Ejercicio 7: La calificación final de un estudiante es la media ponderada de tres notas: 
la nota de prácticas que cuenta un 30% del total, 
la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. 
Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final.
*/


using namespace std;

int main(){
	
	float NotaPractica=0, NotaTeorica=0 , NotaParticipacion=0 , Final;
	int Promedio;
	
	cout<<("Digite las 3 notas\n");
	cout<<("Digite el valor de las notas practicas: \n");cin>>NotaPractica;
	cout<<("Digite el valor de la nota teorica: \n");cin>>NotaTeorica;
	cout<<("Digite el valor de la nota de participacion: \n");cin>>NotaParticipacion;
		
	NotaPractica *=0.30;
	NotaTeorica *=0.60;
	NotaParticipacion *=0,10;
	
	Final=NotaPractica + NotaTeorica + NotaParticipacion;
	
	cout<<"\nLa nota practica es:"<<NotaPractica;
	cout<<"\nLa nota teorica es :"<<NotaTeorica;
	cout<<"\nLa nota de participacion es:"<<NotaParticipacion;
	
	cout<<"\nLa nota final es:" <<Final;
	

	
	
	
	 	
	
	
	
	
	return 0;
}