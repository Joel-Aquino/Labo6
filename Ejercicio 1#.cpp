/*Ejercicio #1:Elabore un algoritmo para mostrar "n" elementos de
 la sucesión de Fibonacci.*/
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de la funcion
int fibonacci(int n);
//Ponemos la funcion principal
int main(){
	int numero;//numero de elementos de la sucesion
	cout<< "                  SUCESION DE FIBONACCI                "<<endl;
	cout<<"\n";
	cout<<"\n";
	do{
		cout<<"Digite el numero de elementos qe quiere mostrar de la sucesion: "<<endl;
		cout<<"\n";
		cout<<"Numero de elementos = ";
		cin>>numero;
	}while(numero <= 0);
	cout<<"Serie Fibonacci: ";
	for(int i=0;i<numero;i++){
		cout<<fibonacci(i)<<" ; ";	
	}
	
	getch();
	return 0;
}
//Funcion para desarrollar la sucesion de Fibonacci
int fibonacci(int n){
	if(n<2){
		return n;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
//Fin del programa
