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
	cout<<" 		FORMULAS FISICAS PARA CALCULAR LA VELOCIDAD, DISTANCIA Y TIEMPO DE UN AUTOMOVIL" <<endl;
	cout<<"Opcion 1: Distancia" <<endl;
	cout<<"Opcion 2: Velocidad" <<endl;
	cout<<"Opcion 3: Tiempo" <<endl;
	cout<<"Ingresa la opcion que deseas elegir: "; cin>> opcion;
	switch(opcion){
		case 1:
			{
			int D, V, T;
				cout<<"Ingresa la Velocidad: "; cin>> V;
				cout<<"Ingresa el Tiempo: "; cin>> T;
					D= V*T;
				cout<<"La Distancia es: " <<D <<endl;
			getch();
			system("cls");
			}
		break;
		case 2:
			{
			float D, V, T;
				cout<<"Ingresa la Distancia: "; cin>> D;
				cout<<"Ingresa el Tiempo: "; cin>> T;
					V= D/T;
				cout<<"La velocidad es: " << V <<endl;
			getch();
			system("cls");
			}
		break;
		case 3:
			{
			float D, V, T;
				cout<<"Ingresa la Distancia: "; cin>> D;
				cout<<"Ingresa la Velocidad: "; cin>> V;
					T= D/V;
				cout<<"El tiempo es: " << T <<endl;
			getch();
			system("cls");
			}
		break;	
		default:cout<<"Usted ha ingresado una opcion incorrecta";
	}
}
	return 0;
				
}