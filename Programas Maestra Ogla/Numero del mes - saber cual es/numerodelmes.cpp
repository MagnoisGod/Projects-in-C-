#include <iostream>
using namespace std;
int main() {
  int mes;
    cout<<"ingresa tu numero para saber el mes: "; cin>>mes;
    	if (mes==1){
			cout<<"\nTu mes es Enero";
        }
        else if(mes==2){
        	cout<<"\nTu mes es Febrero";
        }
        else if(mes==3){
        	cout<<"\nTu mes es Marzo";
        }
        else if(mes==4){
        	cout<<"\nTu mes es abril";
        }
        else if(mes==5){
        	cout<<"\nTu mes es Mayo";
        }
        else if(mes==6){
        	cout<<"\nTu mes es Junio";
        }
        else if(mes==7){
        	cout<<"\nTu mes es Julio";
        }
        else if(mes==8){
        	cout<<"\nTu mes es Agosto";
        }
        else if(mes==9){
        	cout<<"\nTu mes es Septiembre";
        }
        else if(mes==10){
        	cout<<"\nTu mes es Octubre";
        }
        else if(mes==11){
        	cout<<"\nTu mes es Noviembre";
        }
        else if(mes==12){
        	cout<<"\nTu mes es Diciembre";
        }
        else if(mes>=13){
        	cout<<"\nTu valor no esta dentro de los meses del annio";
        }

        return 0;
}