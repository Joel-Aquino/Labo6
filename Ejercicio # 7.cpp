//Ejercicio #7: Realizar el juego de las Torrez de Hanoi de forma recursiva
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de funcion
int Hanoi(int, int, int, int);
//Ponemos la funcion principal:
int main(){
	int torre1 = 1,torre2 = 2, torre3 = 3, disco = 0;
	cout<<"                JUEGO DE LAS TORRES DE HANOI               	"<<endl;
	cout<<"\n";
	cout<<"\n";
	cout<<"Con cuantos discos quiere jugar? "<<endl;
	cout<<"# de discos = ";
	cin>>disco;
	Hanoi(disco, torre1, torre2, torre3);
	cout<<"\n";
	cout<<"\n";
	cout<<"                  FIN        :)";
	getch();
	return 0;
}
//Funcion para desarrollar el juego de Hanoi
int Hanoi(int DISCO, int TORRE1, int TORRE2, int TORRE3){
	if(DISCO == 1){
		cout<<"Mueve el disco de la torre "<<TORRE1<<" a la torre "<<TORRE3<<endl;
	} else{
		Hanoi(DISCO - 1,TORRE1, TORRE3, TORRE2);
		cout<<"Mueve el disco de la torre "<<TORRE1<<" a la torre "<<TORRE3<<endl;
		Hanoi(DISCO - 1,TORRE2, TORRE1, TORRE3);
	}
}
//Fin del programa	
