#include <iostream>
	using namespace std;
main()  									//Calcular el perimetro de la siguiente figura usando arreglos
{
	 int x[100], suma;
cout<<"			CALCULO DE PERIMERO"<<endl;
	cout<<"Ingresa lado 1: " <<endl;
		cin>> x[0];	
	cout<<"Ingresa lado 2: " <<endl;
		cin>> x[1];	
	cout<<"Ingresa lado 3: " <<endl;	
		cin>> x[2];
	cout<<"Ingresa lado 4: " <<endl;	
		cin>> x[3];
	
	suma= x[0] + x[1] + x[2] + x[3]; 
	
	cout<<"Tu perimetro es: " <<suma;
}