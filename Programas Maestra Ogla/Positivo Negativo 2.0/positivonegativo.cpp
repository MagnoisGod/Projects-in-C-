#include <iostream>
using namespace std;
int main() {
  int num, num2;
    cout<<"ingresa tu valor a comparar:";cin>>num;
    	if (num>0){
			cout<<"tu numero es positivo";
        }
        else if(num<0){
        	cout<<"tu numero es negativo";
        }
        else if(num==0){
        	cout<<"tu numero es neutral";
        }
    cout<<"\nIngresa tu segundo valor a comparar:";cin>>num2;
    	if (num2>0){
			cout<<"tu numero es positivo";
        }
        else if(num2<0){
        	cout<<"tu numero es negativo";
        }
        else if(num2==0){
        	cout<<"tu numero es neutral";
        }
        return 0;
}