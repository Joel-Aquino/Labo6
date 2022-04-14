/* Ejercicio #2: REsolver una ecuacion en diferecias de 2do y 3er orden*/
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
//Prototipos de funciones
void menu();
//Ponemos la funcion principal
int main(){
	menu ();
	getch();
	return 0;
}
void menu(){
	int a, b, c, d, opcion;
	double D,r1,r2,Rr,Ri,r;//para la ec. caracteristica de 2do orden
	//Variables ara la ec. caracteristica de 3er orden
    double a1,b1,c1;
    double p,q,dis;
    double x,y,z,pi;
    double ab,ac;
    double u,v,t;
	do{
		cout<<"     RESOLUCION DE UNA ECUACION EN DIFERENCIAS DE 2DO Y 3ER ORDEN"<<endl;
		cout<<"\n";
		cout<<"\n";
		cout<<"Diga el orden de la ecuacion que quiere resolver"<<endl;
		cout<<"\n";
		cout<<"\n";
		cout<<"1. 2do orden a*y(n+2) + b*y(n+1) + c = 0"<<endl;
		cout<<"2. 3er orden a*y(n+3) + b*y(n+2) + c*y(n+1) + d = 0"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion ";
		cin>>opcion;
		switch (opcion){
			case 1:
				cout<<"Ingrese los valores de los coeficientes de su ecuacion\n";
				cout<<"a=";cin>>a;
				cout<<"b=";cin>>b;
				cout<<"c=";cin>>c;
				//Escribimos la forma en la cual hallaremos las soluciones
				D=(b*b)-(4*a*c);
				if (D>0) {
						r1=(-b+sqrt(D))/(2*a);
						r2=(-b-sqrt(D))/(2*a);
						cout<<"La ecuacion ingresada tiene raices reales diferentes"<<endl;
						cout<<"Cuyos valores son:"<< r1 << " y " <<r2 <<endl;
						cout<<"\n";
						cout<<"\n";
						cout<<"Por lo que la sol. homogenea es: yH= C1*("<<r1<<")^n + C2*("<<r2<<")^n"<<endl; 
				} else if (D<0) {
						Rr=(-b/(2*a));
						Ri=(sqrt(-D))/(2*a);
						cout<<"La ecuacion ingresada tiene raices complejas"<<endl;
						cout<<"Cuyos valores son:\n ";
						cout<<Rr<<"+/-"<<Ri<<"i"<<endl;
						cout<<"\n";
						cout<<"\n";
						cout<<"Por lo que la sol. homogenea es: yH= C1*("<<Rr<<" + "<<Ri<<"i)^n + C2*("<<Rr<<" - "<<Ri<<"i)^n"<<endl; 
				} else {
						r=(-b)/(2*a);
						cout<<"La ecuacion ingresada tiene raices reales e iguales"<<endl;
						cout<<"Cuyo valor es: "<<r<<endl;
						cout<<"\n";
						cout<<"\n";
						cout<<"Por lo que la sol. homogenea es: yH= (C1 + C2*n)*("<<r<<")^n"<<endl; 
				}
						cout<<"\n";
						system ("pause");
						break;
			case 2:
			 	cout<<"Ingrese los valores de los coeficientes de su ecuacion\n";
			 	cout<<" a= :"; cin>> a;
   				cout<<" b= :"; cin>> b;
   				cout<<" c= :"; cin>> c;
   				cout<<" d= :"; cin>> d;
 
   				cout.precision(3); 
  				 t = 0.0000000009; 
  				 pi = 3.141592654; 
  				 a1 = b/a;
   				b1 = c/a;
   				c1 = d/a;
   				p = b1 - (a1*a1)/3; 
   				q = (2*a1*a1*a1)/27 - (a1*b1)/3 + c1; 
   				dis = (q*q) + (4*p*p*p)/27; 
   			
   				if ( dis >= t ) { 
    			 ab = 0.5*(-q + sqrt(dis));
    			 double racub(ab); 
    			 if (ab> 0) {
				racub = exp(log(ab)/3);
    			 };
    			 if (ab== 0){
				racub = 0;
    			 };
    			 if (ab<0) {
				racub =-exp(log(-ab)/3);
    			 };
    			 ac = -0.5*(q + sqrt(dis));
				 double racub2(ac);
   				 if (ac> 0) {
				racub2 = exp(log(ac)/3); 
    			 };
    			 if (ac== 0){
				racub2 = 0;
    			 };
    			 if (ac<0) {
				racub2 =-exp(log(-ac)/3);
   				  };
    			 u = racub; 
    			 v = racub2; 
    			 x = u + v -(a1/3);
    			 y = (-0.5)*(u+v) -(a1/3);
    			 z = (0.5)*sqrt(3)*(u-v);
    			 cout<<" La ecuacion ingresada tiene una raiz real y 2 complejas "<<endl;
    			 cout<<" r1 :"<<x<<endl;
    			 cout<<" r2 :"<<y<<" + "<<z<<"i"<<endl;
    			 cout<<" r3 :"<<y<<" - "<<z<<"i"<<endl;
    			 cout<<"\n";
				 cout<<"\n";
    			 cout<<"Por lo que la sol. homogenea es: "<<endl;
    			 cout<<"\n";
			   	cout<<"\n";
				 cout<<" yH= C1*("<<y<<" + "<<z<<"i)^n + C2*("<<y<<" - "<<z<<"i)^n + C3*("<<x<<")^n"<<endl; 
    			 
   				 };
 
 
  				 if ((dis < t and dis > -t) and (p>=-t and p<=t)){ 
   				  cout<<" La ecuacion ingresada tiene una sola raiz"<<endl;
    				 cout<<" r :"<<-(a1/3);
    				 cout<<"\n";
					cout<<"\n";
    				 cout<<"Por lo que la sol. homogenea es: yH= (C1 + C2*n + C3*n^2)*("<<-(a1/3)<<")^n "<<endl;
					};
 
 
   					if ((dis < t and dis > -t) and (p>=t or p<=-t)){ 
   					  ab = -0.5*q;
    				 double racub(ab);
    				 if (ab> 0) {
					racub = exp(log(ab)/3); 
    				 };
    				 if (ab== 0){
					racub = 0;
    				 };
    				 if (ab<0) {
					racub =-exp(log(-ab)/3);
    				 };
    				 u = racub;
     				x = 2*u -(a1/3);
    				 y = -u -(a1/3);
     				cout<<" La ecuacion ingresada tiene dos raices iguales y una distinta"<<endl;
     				cout<<" r1    :"<<x<<endl;
    				 cout<<" r2=r3 :"<<y<<endl;
    				 cout<<"\n";
					cout<<"\n";
    				 cout<<"Por lo que la sol. homogenea es: yH= C1*("<<x<<")^n + (C2 + C3*n)*("<<y<<")^n "<<endl;
    				 
					};
 
 
  					 if ( dis <= -t ) { 
   					 x = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt(-27/(p*p*p)))/3) -(a1/3);
    				y = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt((-27)/(p*p*p)))/3 +2*pi/3) -(a1/3);
   					 z = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt((-27)/(p*p*p)))/3 +4*pi/3) -(a1/3);
    				 cout<<" La ecuacion ingresada tiene 3 raices distintas "<<endl;
    				 cout<<" r1 :"<<x<<endl;
    				 cout<<" r2 :"<<y<<endl;
    				 cout<<" r3 :"<<z<<endl;
    				 cout<<"\n";
					cout<<"\n";
    				 cout<<"Por lo que la sol. homogenea es: yH= C1*("<<x<<")^n + C2*("<<y<<")^n + C3*("<<z<<")^n"<<endl; 
    				};
			 		cout<<"\n";
					system ("pause");
					break;
					}
					system ("cls");
					} while(opcion != 3);
	
}
//Fin del programa
