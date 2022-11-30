//Longitud de la circunferencia = 2*PI*Radio
//Area de la circunferencia = PI*Radio^2
//Volumen de la esfera = (4/3)*PI*Radio^3

#include <iostream>
 using namespace std;
int main()
{
  double P=3.1416, radio, longitudC, areaC, volumenE;
	cout<<"Ingresar el valor de radio: "; cin>>radio;
		longitudC= 2*P*radio;
	cout<<"\nTu longitud es: " <<longitudC;
		areaC= P*radio*radio;
	cout<<"\nTu area es: " <<areaC;
		volumenE= radio*radio*radio*P*4/3;
	cout<<"\nTu volumen es: " <<volumenE;
	
	return 0;
}
