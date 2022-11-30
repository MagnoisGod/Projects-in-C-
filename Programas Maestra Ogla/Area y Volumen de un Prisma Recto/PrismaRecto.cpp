#include <iostream>
	using namespace std;
// Programa para calcular el area y el volumen de un Prismas Recto
int main() 
{
	float l, a, Ab, h, volumen, At, At2;
	cout<<"Ingresa el largo de la base de tu Prisma Recto: "; cin>> l;
	 cout<<"Ingresa el ancho de la base de tu Prisma Recto: "; cin>> a;
	  cout<<"Ingresa la altura de tu Prisma Recto: "; cin>> h;
			Ab= l*a;
			 volumen= Ab*h;
			  At= l*a+l*h+a*h;
			   At2= At*2;
		cout<<"El Area total de tu Prisma Recto es: " << At2 <<endl;
	    cout<<"El volumen de tu Prisma Recto es: " << volumen <<endl;
	return 0;
}