#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	system("color 2");
	int v,k=0,n,c,positivos=0,negativos=0;
	
	cout<<"\n\tIngresa un valor: "; cin>>v;
	
	while(k++, k<=v){
		
		cout<<"\n\t\tIngresa tu numero: "; cin>>n;
		//c=c+Num1;
		
	if(n<=0){
		negativos--;
	}
	else{
		positivos++;
	}
	}
	
	cout<<"\n\t\t\tTotal de numeros positivos son: "<<positivos<<endl; 
	cout<<"\n\t\t\tTotal de numeros negativos son: "<<negativos<<endl;
	return 0;
}