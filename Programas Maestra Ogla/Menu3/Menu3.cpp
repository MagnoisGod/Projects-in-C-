#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
	using namespace std;
int main() 
{
	int opcion=0, i;
	for(i=0; i>=0; i++){
	cout<<"       Menu      ";
	cout<<"\n1.-Programa del if else";
	cout<<"\n2.-Programa Do While";
	cout<<"\n3.-Programa For";
	cout<<"\nIngresa cual quieres elegir: "; cin>>opcion;
	switch(opcion)
	{
		case 1:
		{
			int a=9;
			if (a<=10){
				cout<<"Correcto";
			}
			else 
				cout<<"Incorrecto";
			getch();
			system("cls");
		}
		break;
		case 2:
		{
			int num=27, num2;
			do{
				cout<< num <<endl;
			}
			while(num<=1, num--);
			getch();
			system("cls");	
	  	}
		break;
		case 3:
		{
			for(int i=2; i<=20; i+=2){
				cout<< i <<endl;
			}
			getch();
			system("cls");
		}
		break;
	}
}
	return 0;
}