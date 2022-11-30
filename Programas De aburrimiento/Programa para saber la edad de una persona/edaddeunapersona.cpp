#include<iostream>
	using namespace std;
int main(){
	int nacimiento, annioactual, edad=0;
		
		cout<<"\n\tIngresa el annio de tu nacimiento: "; cin>>nacimiento;
		cout<<"\n\tIngresa el annio actual : "; cin>>annioactual;
			
			edad = annioactual - nacimiento;
		
		cout<<"\n\t\tTu edad es: " << edad << endl;

	
	return 0;
}