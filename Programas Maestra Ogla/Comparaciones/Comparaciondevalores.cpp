#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#include<stdio.h>
	using namespace std;
int main() 
{
	system ("color 2");
	float v1, v2, v3, v4, v5, v6;
	
	cout<<" ingresa tu primer valor: "; cin>> v1;
	
	if (v1 == 400){
		cout<<"  Tu valor es comun\n" << endl;
			
	}
		else if (v1 >=1000){
			cout<<"  Tu digito esta en miles\n" << endl;
	}
		else if( v1 >= 0.0){
			cout<<"  Tu valor es diferente\n" << endl;
	}

	cout<<" ingresa tu segundo valor: "; cin>> v2;
	if (v2 == 400){
		cout<<"  Tu valor es comun\n" <<endl;
	}
		else if (v2 >=1000){
			cout<<"  Tu digito esta en miles\n" <<endl;
	}
		else if( v2 >= 0.0){
			cout<<"  Tu valor es diferente\n" << endl;
	}

	cout<<" ingresa tu tercer valor: "; cin>> v3;
	if (v3 == 400){
		cout<<"  Tu valor es comun\n" <<endl;
	}
		else if (v3 >=1000){
			cout<<"  Tu digito esta en miles\n" <<endl;
	}
		else if( v3 >= 0.0){
			cout<<"  Tu valor es diferente\n" << endl;
	}

	cout<<" ingresa tu cuarto valor: "; cin>> v4;
	if (v4 == 400){
		cout<<"  Tu valor es comun\n" <<endl;
	}
		else if (v4 >=1000){
			cout<<"  Tu digito esta en miles\n" <<endl;
	}
		else if( v4 >= 0.0){
			cout<<"  Tu valor es diferente\n" << endl;
	}

	cout<<" ingresa tu quinto valor: "; cin>> v5;
	if (v5 == 400){
		cout<<"  Tu valor es comun\n"<<endl;
	}
		else if (v5 >=1000){
			cout<<"Tu digito esta en miles\n"<<endl;
	}
		else if( v5 >= 0.0){
			cout<<"  Tu valor es diferente\n" << endl;
	}

	cout<<" ingresa tu sexto valor: "; cin>> v6;
	if (v6 == 400){
		cout<<"  Tu valor es comun\n"<<endl;
	}
		else if (v6 >=1000){
			cout<<"  Tu digito esta en miles\n" <<endl;
	}
		else if( v6 >= 0.0){
			cout<<"  Tu valor es diferente\n" << endl;
	}
	return 0;
}