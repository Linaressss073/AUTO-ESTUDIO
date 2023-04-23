#include<iostream>

using namespace std;

int main(){
	
	int x,y , aux;
	
	cout<<"\nDigite el valor de y:"; cin>>x;
	cout<<"\nDigite el valor de x:"; cin>>x;
	
	
	/*
	
	y=5
	aux=10
	x=5
	
	*/
	
	
	aux=x;
	x=y;
	y=aux;
	
	
	
	
	
	cout<<"\nEl nuevo valor de x es:"<<x<<endl;
	cout<<"el nuevo valor de y es:"<<y<<endl;
	
	
	return 0;
}