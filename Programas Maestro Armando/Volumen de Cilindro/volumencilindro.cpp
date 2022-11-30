#include <iostream>
 using namespace std;
int main() 					//Realizar un programa que calcule el volumen de un cilindro.
{ 
	float x[100], operacion;				// (V= 3.1416*r*r*h)     r= radio,  h= altura     
	cout<<"			CALCULO DE VOLUMEN CILINDRO " <<endl;
	cout<<"Ingrese el radio: " <<endl;
		cin>> x[0];
	cout<<"Ingrese la altura: " <<endl;
		cin>> x[1];
	 
	 operacion= 3.1416 * x[0] * x[0] * x[1];
	 
	 cout<<"Tu Volumen es: " << operacion;
}