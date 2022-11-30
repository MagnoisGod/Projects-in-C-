#include <iostream>
#include <math.h>
	using namespace std;
int main()
{
	int v;
		cout<<"Inserte la contrasena: ";
			cin>> v;
	while(v!=123)
	{
		cout<<"Contrasena incorrecta, intente de nuevo: ";
			cin>> v;
	}
	while(v==123)
	{
		cout<<"Encontraste tu contrasena";
			cin>> v;
	}
	return 0;
}