#include <iostream>
#include <math.h>
	using namespace std;
int main() 
{
	for(int i=1; i<=9; i++)
	{
		cout<< i  <<endl;
	}
	{
		int i=1+2+3+4+5+6+7+8+9, media;
		cout<<"La suma de tus primeros 9 digitos es: " << i;
			media= i/9;
		  cout<<"\nLa media de tus digitos es: " << media;
	}
	return 0;
}