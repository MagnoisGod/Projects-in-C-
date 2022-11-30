#include <iostream>
 using namespace std;
int main()
{
  double P=3.1416, radio= 3, longitudC, areaC, volumenE;
	cout<<"     		 		LONGITUD, AREA Y VOLUMEN DE UNA ESFERA - CONSTANTES";
		longitudC= 2*P*radio;
	cout<<"\nTu longitud es: " <<longitudC;
		areaC= P*radio*radio;
	cout<<"\nTu area es: " <<areaC;
		volumenE= radio*radio*radio*P*4/3;
	cout<<"\nTu volumen es: " <<volumenE;
	
	return 0;
}