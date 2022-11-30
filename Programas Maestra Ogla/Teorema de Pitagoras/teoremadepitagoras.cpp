#include <iostream>
#include <math.h>
	using namespace std;
int main() {
	float a, b, c, opcion;
		
		cout<<"\t\t\t\tPrograma que resulve el triangulo rectangulo introduciendo los lados" << endl;
		
			cout<<"\n\tSi quieres conocer la hipotenusa, preciona 1" << endl;
			cout<<"\n\tSi quieres conocer un cateto, preciona 2" << endl;
			cin>>opcion;
			
				if(opcion == 1){
					cout<<"\n\t\tIntroduce el primer cateto: "; cin>>a;
					cout<<"\n\t\tIntroduce el segundo cateto: "; cin>>b;
						c= sqrt(pow(a, 2) + pow(b, 2));
					cout<<"\n\t\t\tLa Hipotenusa es: " << c << endl;
				}
				if(opcion == 2){
					cout<<"\n\t\tntroduce el cateto que tienes: "; cin>>a;
					cout<<"\n\t\tIntroduce la Hipotenusa: "; cin>>c;
						b= sqrt(pow(c, 2) - pow(a, 2));
					cout<<"\n\t\t\tEl cateto faltante es: " << b << endl;
				}
	return 0;
}