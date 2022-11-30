#include <iostream>
	using namespace std;
int main()
{
	int grupo;
	double telefono;
	char nombre [1000];                               //no me sale, el numero de telefono sale mal y no puedo ingresar direccion
	char especialidad [1000];
	char turno [1000]; 
	char curp [1000];
    char domicilio [56];
	cout<<"cual es tu nombre:";cin>> nombre;
	cout<<"cual es tu grupo:";cin>> grupo;
	cout<<"cual es tu especialidad:";cin>> especialidad;
	cout<<"cual es tu turno:";cin>> turno;
	cout<<"cual es tu curp:";cin>> curp;
	cout<<"cual es tu numero:";cin>> telefono;
	cout<<"cual es tu direccion:";cin>> domicilio;
	
	cout<<"\ntu nombre es:"<<nombre;
	cout<<"\ntu grupo es:"<<grupo;
	cout<<"\nla especialidad es:"<<especialidad;
	cout<<"\ntu turno es:"<<turno;
	cout<<"\nla curp es:"<<curp;
	cout<<"\ntu numero es:"<<telefono;
	cout<<"\nla direccion es:"<<domicilio;
	
	return 0;
}
