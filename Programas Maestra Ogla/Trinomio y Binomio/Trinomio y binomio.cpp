#include <iostream>
#include <math.h>
	using namespace std;
int main() {
	system("color 2");
	float a,b,c;
	float cuadradodeA,cuadradodeB,cuadradodeC, operacion;
	float dobledea, dobledeA;
	float dobledeB;
		cout<<"\n\n\t\t\tPROGRAMA QUE CALCULA EL TRINOMIO CUADRADO\n\n";
		
		cout<<"\n\t(a + b + c)^2\n";
		
		cout<<"\n\tIngresa tu primer valor a: "; cin>>a;
		cout<<"\n\tIngresa tu primer valor b: "; cin>>b;
		cout<<"\n\tIngresa tu primer valor c: "; cin>>c;
		
		cuadradodeA= pow(a, 2);
		cuadradodeB= pow(b,2);
		cuadradodeC= pow(c,2);
		
		dobledeA= 2*a*b;
		dobledea= 2*a*c;
		
		dobledeB= 2*b*c;
		
		operacion= cuadradodeA + cuadradodeB + cuadradodeC + dobledeA + dobledea + dobledeB;
		
	cout<<"\n\n\tEl resultado es: " << operacion;
		
	return 0;
}
