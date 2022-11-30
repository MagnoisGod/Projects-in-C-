#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
using namespace std;
int main() 
{
	int opcion, i;
	  for(i=0; i>=0; i++)
		cout<<"1.-Suma\n";
		cout<<"2.-Datos personales\n";
		cout<<"3.-Resta\n";
		cout<<"4.-Divicion\n";
		cout<<"5.-Multiplicacion\n";
		cout<<"Ingresa tu opcion: "; cin>>opcion;
	switch(opcion) 
	{
		case 1:
			int a, b, suma;
				cout<<"Ingresa tu valor: "; cin>>a;
				cout<<"Ingresa tu segundo valor: "; cin>>b;
					suma= a+b;
				 cout<<"Tu suma es: " <<suma;
			 getch();
			 system("cls");
		break;
		case 2:
			char nombre;
		//	char direccion;
		//	int grupo;
				
				cout<<"Cual es nombre: "; cin>>nombre;
				cout<<"\nTu nombre es: " <<nombre <<endl;
			 getch();
			 system("cls");
			//	cout<<"Cual es direccion: "; cin>>direccion;
			//	cout<<"\nTu direccion es: " <<direccion <<endl;
			//	cout<<"Cual es grupo: "; cin>>grupo;
			//	cout<<"\nTu grupo es: " <<grupo <<endl;
			
		break;
		case 3:
			int c, d, resta;
			cout<<"Ingresa tu valor: "; cin>>c;
			cout<<"Ingresa tu segundo valor: "; cin>>d;
				resta= c-d;
			  cout<<"Tu resta es: " <<resta;
			 getch();
			 system("cls");
		break;
		case 4:
			int n1, n2, divicion;
			cout<<"Ingresa tu valor: "; cin>>n1;
			cout<<"Ingresa tu segundo valor: "; cin>>n2;
				divicion= n1/n2;
			  cout<<"Tu resta es: " <<divicion;
			 getch();
			 system("cls");
		break;
		case 5:
			int q, w, multiplicacion, menu;
			cout<<"Ingresa tu valor: "; cin>>q;
			cout<<"Ingresa tu segundo valor: "; cin>>w;
				multiplicacion= q*w;
			  cout<<"Tu multiplicacion es: " <<multiplicacion;
			 getch();
			 system("cls");
		break;
	}
	
	

