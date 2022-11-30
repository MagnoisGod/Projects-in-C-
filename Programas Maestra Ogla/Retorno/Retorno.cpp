#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main() 
{
	system("color 3");
	int opcion, inicio, valor=0;
	for(inicio=0; inicio>=0; inicio++){
	cout<<"Opcion 1: suma" <<endl;
	cout<<"Opcion 2: resta" <<endl;
	cout<<"Opcion 3: divicion" <<endl;
	cout<<"Opcion 4: multiplicacion" <<endl;
	cout<<"Ingresa que opcion deseas usar: "; cin>>opcion;
	switch(opcion){
	case 1:
		{
			int a,b, suma;
			cout<<"ingresa tu primer valor: "; cin>>a;
			cout<<"ingresa tu segundo valor: "; cin>>b;
				suma= a+b;
				cout<<"tu suma es: " <<suma;
			getch();
			system("cls");
		}
	break;
	case 2:
		{
		int a,b, resta;
			cout<<"ingresa tu primer valor: "; cin>>a;
			cout<<"ingresa tu segundo valor: "; cin>>b;
				resta= a-b;
				cout<<"tu resta es: " <<resta;
			getch();
			system("cls");
		}
	break;
	case 3:
		{
			float a,b, divicion;
			cout<<"ingresa tu primer valor: "; cin>>a;
			cout<<"ingresa tu segundo valor: "; cin>>b;
				divicion= a/b;
				cout<<"tu divicion es: " <<divicion;
			getch();
			system("cls");
		}
	break;
	case 4:
		{
			float a,b, multiplicacion;
			cout<<"ingresa tu primer valor: "; cin>>a;
			cout<<"ingresa tu segundo valor: "; cin>>b;
				multiplicacion= a*b;
				cout<<"tu multiplicacion es: " <<multiplicacion;
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