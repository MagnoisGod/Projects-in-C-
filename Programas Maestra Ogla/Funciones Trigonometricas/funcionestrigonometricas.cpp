#include <iostream>
	using namespace std;

int main() {
	system("color 2");
	float a, b, c, sen, cos, tan;
	
	cout<<"Programa que calcula el Seno, Coseno, Tangente, introduciendo los lados de un triangulo" <<endl;
	
	cout<<"\n\tIntroduce el cateto opuesto al angulo: "; cin>>a;
	cout<<"\n\tIntroduce el cateto adyacente al angulo: "; cin>>b;
	cout<<"\n\tIntroduce la hipotenusa: "; cin>>c;
	
		sen=a/c;
		cos=b/c;
		tan=a/b;
		
	cout<<"\n\t\tEl seno del angulo es: " << sen << endl;
	cout<<"\n\t\tEl coseno del angulo es: " << cos << endl;
	cout<<"\n\t\tLa tangente del angulo es: " << tan << endl;
	
	return 0;
}