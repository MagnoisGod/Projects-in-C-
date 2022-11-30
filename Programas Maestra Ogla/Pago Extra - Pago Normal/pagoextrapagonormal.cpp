#include <iostream>
	using namespace std;
int main() 
{
	int ht, ht2; //h=horas t=trabajadas
	cout<<"Cuantas horas trabajaste?: "; cin>> ht;
		if(ht<=40)
	 cout<<"Tu pago es normal" <<endl;
	 	else
	 cout<<"Tu pago es extra" <<endl;
	 
	 cout<<"Cuantas horas trabajaste la 2da semana?: "; cin>> ht2;
	 		if(ht2<=40)
	 cout<<"Tu pago es normal" <<endl;
	 	else
	 cout<<"Tu pago es extra" <<endl;
	return 0;
}