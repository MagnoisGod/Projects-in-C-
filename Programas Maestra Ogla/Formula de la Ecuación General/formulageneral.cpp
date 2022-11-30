#include <iostream>
#include <math.h>
	using namespace std;
int main() {
	float a, b, c, disc, x1, x2, aux;
	cout<<"\n\tIntroduce el valor de a: "; cin>>a;
	cout<<"\n\tIntroduce el valor de b: "; cin>>b;
	cout<<"\n\tIntroduce el valor de c: "; cin>>c;		
		disc = pow(b, 2) - 4*a*c;
		if (disc >= 0 ){
			x1 = (-b + -sqrt(disc))/(2*a);
			x2 = (-b - -sqrt(disc))/(2*a);			
			}
		else{
			disc=-disc;
			b= -b/2*a;
			aux = sqrt(disc)/2*a;
				x1 = (-b + -sqrt(disc))/(2*a);
				x2 = (-b - -sqrt(disc))/(2*a);			
			}	
			
	cout.precision(1);		
	cout<< "\n\t\tTu resultado con suma es : " << x2 ;
	cout<< "\n\t\tTu resultado con resta es: " << x1 ;
		
	return 0;
}