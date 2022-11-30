#include <iostream>
#include <math.h>
using namespace std;
int main() {
	system("color 60");
	//PROGRAMA QUE CALCULA EL BINOMIO
	float a,b, cuadradodeA, dobledeab, dobledeAB, cuadradodeB, operacion;
	cout<<"\n\tIngresa el valor de a: "; cin>>a;
	cout<<"\n\tIngresa el valor de b: "; cin>>b;
	
	cuadradodeA= pow(a, 2);
	
	dobledeab= a*b;
	dobledeAB= 2*dobledeab;
	
	cuadradodeB= pow(b, 2);
	
	operacion= cuadradodeA + dobledeAB + cuadradodeB;
	
	cout<<"\n\t\tTu resultado es: " << operacion;
	return 0;
}