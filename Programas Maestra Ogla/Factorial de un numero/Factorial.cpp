#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>
 using namespace std;
int main() 
{
	int i, fact=1, numero;
	system("color 3");
	cout<<"_________________________________________\n";
	cout<<"	  FACTORIAL DE NUMEROS \n";
	cout<<"_________________________________________\n";
   cout<<"\n Ingresa un numero para factorizarlo: "; cin>>numero;
   if(numero<0) fact =0;
   else if(numero==0) fact=1;
   else{
      for (i = 1; i <= numero; i++){
         fact = fact*i;
      }
   }
   		cout<<"______________________________________\n";
   		cout<<"\n	El resultado de tu factorial es: "<< fact;
   		cout<<"\n______________________________________";
		getch();
		system("cls");
	
	
	return 0;
}