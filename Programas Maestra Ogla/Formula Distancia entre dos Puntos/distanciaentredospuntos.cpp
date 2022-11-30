#include <iostream>
#include <math.h>
	using namespace std;
int main() {
	system("color 2");
	float d, x1, x2, y1, y2;
	float X2X1, Y2Y1;
	cout<<"\n\tIngresa el valor de X1: "; cin>>x1;
	cout<<"\n\tIngresa el valor de X2: "; cin>>x2;
	
	cout<<"\n\tIngresa el valor de Y1: "; cin>>y1;
	cout<<"\n\tIngresa el valor de Y2: "; cin>>y2;
	
		X2X1= pow(x2-x1, 2);
		Y2Y1= pow(y2-y1, 2);
		
		d= sqrt( X2X1 + Y2Y1);
		
	cout<<"\n\t\tLa distancia entre los dos puntos es: " << d;
	
	return 0;
}