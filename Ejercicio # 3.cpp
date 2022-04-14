/* Problema # 3: Calcular permutaciones con métodos recursivos*/
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de la funcion recursiva (para el factorial
int factorial(int);
//Ponemos la funcion principal
int main(){
	int numero;
	cout<<"EJERCICIO #3                                APLICACIONES DE LA RECURSIVIDAD   "<<endl;
	cout<<"\n";
	cout<<"\n";
	cout<<"Digite un numero para realizar la permutacion"<<endl;
	cin>>numero;
	cout<<"La permutacion de "<<numero<<" elementos es: " <<factorial(numero)<<endl;	
	getch();
	return 0;
}
//Funcion para la permutacion que es el factorial de un número
int factorial(int n){
	if (n == 0){
		n = 1;
	} else{
		n = n*factorial(n-1);
	}
	return n;
}
//Fin del programa
