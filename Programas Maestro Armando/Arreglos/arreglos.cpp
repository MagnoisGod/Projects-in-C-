#include <iostream>
	using namespace std;
main()
{
	int x[103];
	cout<<"        				  PROGRAMA QUE SUMA DOS NUMEROS " <<endl;
	cout<<" Ingresa el primer numero: " <<endl;
		cin>> x[0];
	cout<<"Ingrese el segundo numero: "<<endl;
		cin>> x[1];
		x[2]=x[0]+x[1];
	cout<<"El resultado es: "<<x[2];
}