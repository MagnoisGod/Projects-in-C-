#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <windows.h>
	using namespace std;
int main() 
{
	system("color 60");
	int opcion=0, i;
	for(i=0; i>=0; i++){
  	cout<<"\n\t[1]-Dolares a pesos";
  	cout<<"\n\t[2]-Pesos a dolares";
  	cout<<"\n\t\tIngresa cual deseas usar: "; cin>>opcion;
  	switch(opcion){
  		
  		case 1:
  			{
  				cout<<"\n\t\t\tPROGRAMA QUE CALCULA DE DOLARES A PESOS";
  				int dolares, PrecioDolar=20, pesos;
					cout<<"\n\t\tIngrese su cantidad de dolares: "; cin>> dolares;
						pesos= dolares*PrecioDolar;
	 				cout<<"\n  Los dolares ingresados equivalen a: " <<pesos << " pesos mexicanos";
			}
	 	break;
	 	case 2:
	 			cout<<"\n\t\tPROGRAMA QUE CALCULA DE PESOS A DOLARES";
	 		float dolares, PrecioDolar=20, pesos;
	 				cout<<"\n\t\tIngrese su cantidad de Pesos: "; cin>> pesos;
	 					dolares= pesos/PrecioDolar;
	 				cout<<"\n Los pesos ingresados equivalen a : " << dolares << " dolares Estado Unidenses";
	 	break;
	}
	
		getch();
		system("cls");
}
	
	return 0;
}