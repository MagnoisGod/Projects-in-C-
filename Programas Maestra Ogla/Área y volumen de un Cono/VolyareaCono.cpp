#include <iostream>
	using namespace std;

int main() 
{
  float PI=3.1416, radio, h, volumen, AC, G, AL, AT;
	cout<<"Ingresa el valor de tu radio: "; cin>>radio;
	cout<<"Ingresa el valor de tu altura: "; cin>>h;
		volumen= PI*radio*radio*h/3;
	 cout<<"El volumen de tu cono es: " <<volumen <<endl;
	cout<<"Ingresa el valor de la generatriz: "; cin>>G; //G= generatriz
		AL= PI*radio*G;
	 cout<<"El area lateral es: " <<AL <<endl;
		AT= AL+PI*radio*radio;
	 cout<<"El area total de tu cono es: " <<AT;
	return 0;
}