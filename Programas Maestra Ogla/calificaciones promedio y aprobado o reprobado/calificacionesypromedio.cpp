#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int c1, c2, c3, c4, c5, suma, promedio;
	cout<<"ingresa la primera calificacion:";cin>>c1;
	cout<<"ingresa la segunda calificacion:";cin>>c2;
	cout<<"ingresa la tersera calificacion:";cin>>c3;
	cout<<"ingresa la cuarta calificacion:";cin>>c4;
	cout<<"ingresa la quinta calificacion:";cin>>c5;
	 	suma= c1+c2+c3+c4+c5;
	 	promedio=suma/5;
	cout<<"\ntu promedio es: " <<promedio;
	if(promedio<=5)			
	cout<<"\nEstas reprobado";
	else
	cout<<"\nEstas aprobado";
	
	return 0;
}
