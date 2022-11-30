#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
	using namespace std;
int main() 
{
	int opcion, inicio, valor=0;
	for(inicio=0; inicio>=0; inicio++){
	cout<<"       Menu      ";
	cout<<"\n1.- Temperatura del dia";
	cout<<"\n2.- Hola mundo";
	cout<<"\n3.- Suma de numeros con Decimales";
	cout<<"\n4.- Expreciones algebraicas";
	cout<<"\n5.- Tu novia es legal o ilegal :)";
	cout<<"\n6.- Mis amistades son buenas o malas";
	cout<<"\nIngresa cual quieres elegir: "; cin>>opcion;
	switch(opcion)
	{
		case 1:
		{
			int C, F;
				cout<<"Ingrese la temperatura: "; cin>>C;
				if (C<=15){
					cout<<"Por dios, que frio!";
			}
				else if (C<=25){
					cout<<"El clima esta templado, esta genial";		
			}
				else if (C>=26){
					cout<<"Pero que calor, me estoy derritiendo";
			}
			getch();
			system("cls");
		}
		break;
		case 2:
		{
			cout<<"Hola chavos, maestra pongame el punto yo lo necesito mas que nadie :DD";	
			
		}
			getch();
			system("cls");	
		break;
		case 3:
		{
			float n1, n2, sumaD;
				cout<<"Ingresa tu primer digito: "; cin>> n1;
				cout<<"Ingresa tu segundo digito: "; cin>> n2;
					sumaD= n1+n2;
				cout<<"La suma de los decimales es: " <<sumaD;
			getch();
			system("cls");
		}
		break;
		case 4:
		{ 		
					cout<<"Pasar una exprecion, como exprecion c++	(a/b) + 1";
			float a, b, resultado;
				cout<<"Ingrese el valor de la variable a: "; cin>>a;
				cout<<"Ingrese el valor de la variable b: "; cin>>b;
					resultado= (a/b)+1;
				cout<<"El resultado es: " <<resultado <<endl;
			getch();
			system("cls");
		}
		break;
		case 5:
			{
				int edad;
				cout<<"Ingresa la edad de tu novia: "; cin>>edad;
				if (edad<=17){
					cout<<"Por dios, sal de ahi antes de que te demanden todavia es ilegal";
				}
				else if (edad>=18){
					cout<<"Bien, todo seguro amigo tu novia ya es Legal :)";		
				}
			getch();
			system("cls");
			}
		break;
		case 6:
			{
				int si=0, no=1, amistades;
				cout<<"\nsi tu respuesta es SI marca 0";
				cout<<"\nsi tu respuesta es NO marca 1";
					cout<<"\nTus amistades fuman, toman bebidas alcoholicas y se drogan: "; cin>>amistades;
				if(amistades==0){
					cout<<"Termina con esas malas amistades";
				}
				else if(amistades==1){
					cout<<"¡Muy bien tienes buenas amistades, ayudense a superarse juntos!";
				}
			getch();
			system("cls");
			}
		break;
		{
			default:cout<<"Usted ha ingresado una opcion incorrecta";
		}		
	}
	}
}
