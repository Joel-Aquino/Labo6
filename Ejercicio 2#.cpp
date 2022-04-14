/* Ejercicio #2: Dado un número "n" entero positivo, realice un algoritmo que calcule 
la siguiente suma: suma = n+(n-1)+(n-2)+...+3+2+1  */
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de la funcion
int SUMA(int n);
//Ponemos la funcion principal
int main(){
	int numero;//Numero entero positivo
	cout<<"  PROGRAMA PARA CALCULAR LA SUMA: suma = n+(n-1)+(n-2)+...+3+2+1 "<<endl;
	cout<<"\n";
	cout<<"\n";
	do{
		cout<<"Digite un numero entero positivo ";
		cout<<"\n";
		cout<<"Numero = ";
		cin>>numero;
	}while(numero<=0);
	cout<<"La suma de: "<<numero<<" + "<<numero - 1<<" + "<<numero - 2<<" +...+ 1   es: "<<SUMA(numero)<<endl;
	
	getch();
	return 0;
}
//Funcion para relizar la suma suma = n+(n-1)+(n-2)+...+3+2+1
int SUMA(int n){
	int suma=0;
	
	if(n==1){
		suma = 1;
	}
	else{/
		suma = n + SUMA(n-1);
	}
	
	return suma;
}	
//Fin del programa		  
