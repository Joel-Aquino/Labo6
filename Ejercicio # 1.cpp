/* Ejericio #1: Calcular e^x como una sucesion aplicando funciones recursivas*/
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
//Prototipo para calcular un exponente
double exp (float, int);
//Ponemos la funcion principal
int main(){
	double e = 2.71828182846;
	double x, n;
	double BASE;
	cout<<"EJERCICIO 2            RECORDAR QUE e^x = (1+x/n)^n COMO SUCESION "<<endl;
	cout<<"\n";
	cout<<"\n";
	cout<<"Digite un valor para el exponente de < e > "<<endl;
	cin>>x;
	cout<<"Digite el valor del parametro < n > para la sucesion"<<endl;
	cout<<"\n";
	cout<<"\n";
	cout<<"        RECUERDE QUE < n > DEBE SER UN NUMERO MUY GRANDE   "<<endl;
	cin>>n;
	BASE = (1)+(x/n);
	cout<<"El valor de e^"<<x<<" es aproximadamente: "<< exp (BASE, n)<<endl;
	cout<<"El valor verdadero es: "<<pow(e,x);
	getch ();
	return 0;
}
//Funcion para calcular la potencia
double exp(float base, int exponente){
	double resultado;
	if (exponente == 1){
		resultado = base;
	} else {
		resultado = base * exp(base, exponente - 1); 
	}
	return resultado;
}
//Fin del programa
