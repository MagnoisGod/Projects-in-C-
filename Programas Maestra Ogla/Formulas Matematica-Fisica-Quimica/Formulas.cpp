#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>
	using namespace std;
int main() 
{
	system("color 2");
	int opcion, inicio, valor=0;
	for(inicio=0; inicio>=0; inicio++){
		cout<<" 		FORMULAS MATEMATICAS, FISICAS O QUIMICAS" <<endl;
	cout<<"Opcion 1: Presion Hidrostatica" <<endl;
	cout<<"Opcion 2: Calcular la hipotenusa" <<endl;
	cout<<"Opcion 3: Binomio al cuadrado" <<endl;
	cout<<"Opcion 4: Raiz cuadrada" <<endl;
	cout<<"Ingresa la opcion que deseas elegir: "; cin>> opcion;
	switch(opcion){
		case 1:
			{
			float P, d, g=9.8, h;
				cout<<"			Elegiste Presion Hidrostatica";
				cout<<"La formula para calcularla es: P = d * g * h" <<endl;
				cout<<"	P= Precion Hidrostatica" <<endl;
				cout<<"	d= Dencidad del liquido o fluido" <<endl;
				cout<<"	g= aceleracion de la gravedad" <<endl;
				cout<<"	h= altura del fluido que esta contenido" <<endl;
				cout<<"\nIngresa la densidad del liquido o fluido: "; cin>>d;				
				cout<<"\nIngresa la Altura del fluido que esta contenido: "; cin>>h;
					P= d*g*h;
					cout<<"La presion hidrostatica es: " <<P <<endl;
			getch();
			system("cls");				
			}
		break;
		case 2:
			{
			float a, b, c, H;
			cout<<"				La formula para calcular la hipotenusa es: \n	a^2 + b^2 = c^2";
			cout<<"\nIngresa tu cateto Opuesto: "; cin>>a;
			cout<<"\nIngresa tu cateto Adyacente: "; cin>>b;
				c= sqrt(a*a+b*b);
				cout<<"\n	Tu hipotenusa es: " << c <<endl;
			getch();
			system("cls");
			}
		break;
		case 3:
			{
			int a, b, suma, potencia;
				cout<<"				Binomio al cuadrado";
			cout<<"La formula del binomio es (a + b)2";
			cout<<"\nIngresa tu primer valor: "; cin>>a;
			cout<<"\nIngresa tu segundo valor: "; cin>>b;
				suma= a+b;
				potencia= suma*suma;
			cout<<"El resultado es: " << potencia;	
			getch();
			system("cls");
			}
		break;
		case 4:
			{
			float v,r;
   				cout<<"ingresa tu valor: ";cin>>v;
    				r=sqrt(v);
    			cout<<"la raiz cuadra de tu valor es: " <<r;
			getch();
			system("cls");	
			}
		break;
	}
	}
	
	return 0;
}