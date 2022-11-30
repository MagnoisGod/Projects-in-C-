#include <iostream>
	using namespace std;
int main() 
{
 float lb, h, Acl, Ab, ACL, sumaACL, Apiramide, volumen;
 	cout<<"Ingresa el valor de un lado de la base: "; cin>> lb; //l=lado b=base
 		Ab= lb*lb;
 	  cout<<"El area de la base es: " << Ab <<endl;
 	cout<<"\nIngresa el valor de la altura de una cara lateral: "; cin>> Acl; //A=altura c=cara l=lateral
 		ACL= lb*Acl/2;
 	  cout<<"El area de tu cara lateral es: " << ACL;
 		sumaACL= ACL*4;
 	  cout<<"\nLa suma del area de tus caras laterales es: " << sumaACL <<endl;
 		Apiramide= Ab+sumaACL;
 	  cout<<"\nEl area de la Piramide es: " <<Apiramide <<endl;
 	
 	cout<<"\nIngresa el valor de la altura de tu piramide cuadrangular: "; cin>> h;
 		volumen= Ab*h/3;
 	  cout<<"El volumen de tu piramide cuadrangular es: " << volumen;
 		
	return 0;
}