#include <iostream>
	using namespace std;

int main()  // A= 6a^2  A= 6*(3)^2  A= 54cm^2      V= a^3  V=3^3  V= 27 cm^3
{
	int a, area, volumen, potencia;
	cout<<"Ingresa el valor del arista de tu cubo: "; cin>>a;
	 area= 6*a*a;
	cout<<"\nEl area de tu cubo es: " <<area;
	 volumen= a*a*a;
	cout<<"\nEl volumen de tu cubo es: " <<volumen;
	
	return 0;
}
