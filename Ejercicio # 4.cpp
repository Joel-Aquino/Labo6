// Ejercicio #4: Emplear recursividad para calcular la suma de entradas de un arreglo
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de la funcion
int Suma(int[], int);
//Ponemos la funcion principal
int main(){
	int numero; //Numero de elementos del vector
	cout<<"              SUMA DE LOS ELEMENTOS DE UN ARREGLO          "<<endl;
	cout<<"\n";
	cout<<"\n";
	cout<<"Cuantos elementos quiere que tenga su arreglo? "<<endl;
	cout<<"\n";
	cout<<"\n";
	cout<<"Numero de elementos = ";
	cin>>numero;
	int arreglo[100];
	for(int i=0;i<numero;i++){
		cout<<"Ingrese el elemento ["<<i<<"] del arreglo"<<endl;
		cin>>arreglo[i];
		cout<<"\n";
	} 
	cout<<"El arreglo que ingreso es: "<<endl;
		for(int i=0;i<numero;i++){
			cout<< " | ";
			cout<<arreglo[i]<<" ";
			cout<<"|\n";	
		}
		cout<<"La suma de los elementos del arreglo es: "<<Suma(arreglo, numero)<<endl;
		getch();
		return 0;
}
//Funcion para realizar la suma
int Suma( int Arreglo[],int n){
	if(n == 1){
		return Arreglo[0];
	} 
	return Arreglo[n-1] + Suma(Arreglo, n-1);	
}
//Fin del programa
