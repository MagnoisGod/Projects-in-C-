#include <iostream>
#include <math.h>
	using namespace std;

int main() {
	system("color 2");
	float Num, Num1, multiplicacion;
		cout<<"\n\tIngresa tu valor a multiplicar: "; cin>>Num;
		cout<<"\n\tIngresa tu segundo valor a multiplicar: "; cin>>Num1;
		
		multiplicacion = Num * Num1;
		
		cout<<"\n\t\tLa multiplicacion de " << Num << "*" << Num1 << " es igual a: " << multiplicacion;
	return 0;
}