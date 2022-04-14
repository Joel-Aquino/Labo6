/* Ejercicio #6: Hallar el MCD de dos numeros de forma recursiva*/
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de la funcion
int MCD(int, int);
//Ponemos la funcion principal
int main(){
	int numero1 , numero2;
	cout<<"          MAXIMO COMUN DIVISOR DE DOS NUMEROS    "<<endl;
	cout<<"\n";
	cout<<"\n";
	cout<<" Digite dos numeros para hallar su Maximo Comun Divisor:"<<endl;
	cout<<"Numero 1 = ";
	cin>>numero1;
	cout<<"Numero 2 = ";
	cin>>numero2;
	cout<<"\n";
	cout<<"\n";
	cout<<"El Maximo Comun Divisor de "<<numero1<<" y "<<numero2<<" es: "<<MCD(numero1,numero2);
	getch();
	return 0;
}
//Funcion para hallar el Maximo Comun Divisor
int MCD(int a, int b){
	if(a == 0){
		return b;
	} 
	return MCD(b % a, a);
}
//Fin del programa
