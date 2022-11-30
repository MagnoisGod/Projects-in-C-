#include <iostream>
#include <math.h>
	using namespace std;
int main() 
{
	int v, unidades=9, decenas=99, centenas=999, miles=9999, diezm=99999, cienm=999999, millones=9999999;
		cout<<"Ingresa un valor para decirte a que pertenece: "; cin>>v;
	if(v<=unidades){
		cout<<"Es una unidad";
}
	else if (v<=decenas){
		cout<<"Es una decena";
}
	else if (v<=centenas){
		cout<<"Es una centena";
}
	else if (v<=miles){
		cout<<"Es un miles";
}
	else if (v<=diezm){
		cout<<"Es un Diez miles";
}
	else if (v<=cienm){
		cout<<"Es un cien miles";
}
	else if (v<=millones){
		cout<<"Es millones";
}
	return 0;
}
