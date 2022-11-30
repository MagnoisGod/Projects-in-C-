#include <iostream>
#include <math.h>
using namespace std;
int main() {
		system("color 60");
		float a,b, cubodeA, cuadradodeA, tripledeab, tripledeAb, cuadradodeB, tripledeba, tripledeaB, cubodeB, operacion;
			
			cout<<"\n\tIngresa tu primer valor a: "; cin>>a;
			cout<<"\n\tIngresa tu primer valor b: "; cin>>b;
			
			cubodeA= pow(a, 3);
			
			cuadradodeA= pow(a, 2);
			tripledeab= cuadradodeA*b;
			tripledeAb= 3*tripledeab;
			
			cuadradodeB= pow(b, 2);
			tripledeba= a*cuadradodeB;
			tripledeaB= 3*tripledeba;
			
			cubodeB= pow(b, 3);
			
			operacion= cubodeA + tripledeAb + tripledeaB + cubodeB;
		
		cout<<"\n\t\t\tTu resultado es: " << operacion;
	return 0;
}