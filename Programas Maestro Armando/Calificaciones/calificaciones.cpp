#include <iostream>
 using namespace std;
int main() 
{
  float cal [7][3], prom;
	cout<<"            PROGRAMA QUE CALCULA MI PROMEDIO" <<endl;
	cout<<"Ingresa tu primer parcial de programacion: " <<endl;
		cin>> cal [1][1];
	cout<<"Ingresa tu segundo parcial de programacion: " <<endl;
		cin>> cal [1][2];
	cout<<"Ingresa tu tercer parcial de programacion: " <<endl;
		cin>> cal [1][3];
			prom=(cal[1][1]+cal[1][2]+cal[1][3])/3;
	cout<<"   El promedio de programacion es: "<< prom<<endl;
		
	
	cout<<"Ingresa tu primer parcial de Algoritmos: " <<endl;
		cin>> cal [2][1];
	cout<<"Ingresa tu segundo parcial de Algoritmos: " <<endl;
		cin>> cal [2][2];
	cout<<"Ingresa tu tercer parcial de Algoritmos: " <<endl;
		cin>> cal [2][3];
			prom=(cal[2][1]+cal[2][2]+cal[2][3])/3;
	cout<<"   El promedio de Algoritmos es: "<< prom<<endl;	
	

	cout<<"Ingresa tu primer parcial de Ingles: " <<endl;
		cin>> cal [3][1];
	cout<<"Ingresa tu segundo parcial de Ingles: " <<endl;
		cin>> cal [3][2];
	cout<<"Ingresa tu tercer parcial de Ingles: " <<endl;
		cin>> cal [3][3];
			prom=(cal[3][1]+cal[3][2]+cal[3][3])/3;
	cout<<"   El promedio de Ingles es: "<< prom<<endl;	

		
	cout<<"Ingresa tu primer parcial de Quimica: " <<endl;
		cin>> cal [4][1];
	cout<<"Ingresa tu segundo parcial de Quimica: " <<endl;
		cin>> cal [4][2];
	cout<<"Ingresa tu tercer parcial de Quimica: " <<endl;
		cin>> cal [4][3];
			prom=(cal[4][1]+cal[4][2]+cal[4][3])/3;
	cout<<"   El promedio de Quimica es: "<< prom<<endl;	

		
	cout<<"Ingresa tu primer parcial de Tutoria: " <<endl;
		cin>> cal [5][1];
	cout<<"Ingresa tu segundo parcial de Tutoria: " <<endl;
		cin>> cal [5][2];
	cout<<"Ingresa tu tercer parcial de Tutoria: " <<endl;
		cin>> cal [5][3];
			prom=(cal[5][1]+cal[5][2]+cal[5][3])/3;
	cout<<"   El promedio de Tutoria es: "<< prom<<endl;	
	
		
	cout<<"Ingresa tu primer parcial de Lectura: " <<endl;
		cin>> cal [6][1];
	cout<<"Ingresa tu segundo parcial de Lectura: " <<endl;
		cin>> cal [6][2];
	cout<<"Ingresa tu tercer parcial de Lectura: " <<endl;
		cin>> cal [6][3];
			prom=(cal[6][1]+cal[6][2]+cal[6][3])/3;
	cout<<"   El promedio de Lectura es: "<< prom<<endl;	
	
		
	cout<<"Ingresa tu primer parcial de Educacion Fisica: " <<endl;
		cin>> cal [7][1];
	cout<<"Ingresa tu segundo parcial de Educacion Fisica: " <<endl;
		cin>> cal [7][2];
	cout<<"Ingresa tu tercer parcial de Educacion Fisica: " <<endl;
		cin>> cal [7][3];
			prom=(cal[7][1]+cal[7][2]+cal[7][3])/3;
	cout<<"   El promedio de Educacion Fisica es: "<< prom<<endl;	
	
	return 0;
}
