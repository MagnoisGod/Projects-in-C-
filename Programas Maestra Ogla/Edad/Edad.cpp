#include <iostream>
using namespace std;
int main() {
        int edad;
        cout<<"ingresa tu edad para decirte en que etapa estas: "; cin>> edad;
        if (edad<=12){
            cout<<"\nEres un nino";
        }
         else if(edad<=18){
        	cout<<"\nEres un adolescente";
        }
         else if(edad<=22){
            cout<<"\nEres un joven";
        }
         else if(edad<=50){
            cout<<"\nEres un adulto";
        }
         else if(edad>50){
        	cout<<"\nEres un anciano";
        }
        	return 0;
}