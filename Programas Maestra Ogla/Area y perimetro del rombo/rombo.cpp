#include <iostream>
	using namespace std;
int main()
{
  int D, d, L, area, perimetro;
	cout<<"Ingresa el valor de la diagonal Mayor: "; cin>>D;
	cout<<"Ingresa el valor de la diagonal menor: "; cin>>d;
	cout<<"Ingresa el valor de lado del rombo: "; cin>>L;
		area= D*d/2;
		 perimetro= L*4;
	cout<<"\nTu area es: " <<area;
	cout<<"\nTu perimetro es: " <<perimetro;
		
	return 0;
}
