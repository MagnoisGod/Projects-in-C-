#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	
	int Num,k=0,edad,promedio,c,promedio1;
	
	cout<<"\n\tIngresa cuantas edades quieres poner: "; cin>>Num;
	
	while(k++, k<=Num){
		
		cout<<"\n\t\tIngresa la edad: "; cin>>edad;
		c=c+edad;
	}
	{

		promedio=edad+Num/c;
			cout<<"\n\t\t\tTu promedio es: " << promedio;	
	}

	
	return 0;
}