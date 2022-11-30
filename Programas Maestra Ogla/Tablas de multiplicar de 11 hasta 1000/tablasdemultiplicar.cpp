#include <iostream>
#include <math.h>
	using namespace std;
int main() {
	system("color 90");
	int tabla, multi;
		cout<<"\n\tIngresa cual tabla deseas usar desde la del 11 hasta la del 1000: "; cin>>tabla;
	
			while((tabla<11) || (tabla>1000));
			
				for(int i=1; i<=10; i++){
					multi=tabla*i;
					cout<<"\n";
					cout<<"\t\t\t\t\t"<<tabla<<" x "<<i<<" = "<<multi<<endl;
				}
	return 0;
}