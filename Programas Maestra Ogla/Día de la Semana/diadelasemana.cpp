#include <iostream>
using namespace std;
int main() {
        int dia;
        cout<<"ingresa el numero para saber a que dia corresponde: ";cin>>dia;
        if (dia==1){
			cout<<"\nTu dia es Lunes";
        }
        else if(dia==2){
        	cout<<"\nTu dia es Martes";
        }
        else if(dia==3){
			cout<<"\nTu dia es Miercoles";
        }
        else if(dia==4){
            cout<<"\nTu dia es Jueves";
        }
        else if(dia==5){
        	cout<<"\nTu dia es Viernes";
        }
        else if(dia==6){
            cout<<"\nTu dia es Sabado";
        }
        else if(dia==7){
            cout<<"\nTu dia es Domingo";
        }
        else if(dia>=8){
            cout<<"\nEste numero no pertenece a algun dia de la semana";
        }
        return 0;
}