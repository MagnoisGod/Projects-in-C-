#include <iostream>
	using namespace std;
int main() 
{
	float ZX, CV, XZ, VC, division;
	cout<<"Ingrese su primer valor: ";cin>>ZX; 
	cout<<"Ingrese su segundo valor: ";cin>>CV;
	cout<<"Ingrese su tercer valor: ";cin>>XZ;
	cout<<"Ingrese su cuarto valor: ";cin>>VC;
		division=ZX/CV/XZ/VC;
	cout<<"El resultado de tu division es: "<<division;
	return 0;
}