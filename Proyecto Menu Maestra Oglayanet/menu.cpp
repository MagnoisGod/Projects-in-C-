#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <windows.h>
  using namespace std;
  void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
	
int main() 
{
	system("title Menu - 10213 Alejandro RG");
	system("color 02");
	int opcion=0, i;
	for(i=0; i>=0; i++){
	cout<<"\n\n			B I E N V E N I D O - B I E N V E N I D A  A  M I   \n";
	gotoxy(30,4); cout<<("M"); Sleep(60);
	gotoxy(31,4); cout<<("M");Sleep(95);
	gotoxy(39,4); cout<<("M");Sleep(95);
	gotoxy(40,4); cout<<("M");	Sleep(95);
	gotoxy(43,4); cout<<("E");Sleep(95);
	gotoxy(44,4); cout<<("E");Sleep(95);
	gotoxy(45,4); cout<<("E");Sleep(95);
	gotoxy(46,4); cout<<("E");Sleep(95);
	gotoxy(47,4); cout<<("E");	Sleep(95);
	gotoxy(50,4); cout<<("N");Sleep(95);
	gotoxy(56,4); cout<<("N");	Sleep(95);
	gotoxy(59,4); cout<<("U");Sleep(95);
	gotoxy(65,4); cout<<("U");	Sleep(95);
	// COLUMA 2
	gotoxy(30,5); cout<<("M");Sleep(95);
	gotoxy(32,5); cout<<("M");Sleep(95);
	gotoxy(38,5); cout<<("M");Sleep(95);
	gotoxy(40,5); cout<<("M");	Sleep(95);
	gotoxy(43,5); cout<<("E");	Sleep(95);
	gotoxy(50,5); cout<<("N");Sleep(95);
	gotoxy(52,5); cout<<("N");Sleep(95);
	gotoxy(56,5); cout<<("N");	Sleep(95);
	gotoxy(59,5); cout<<("U");Sleep(95);
	gotoxy(65,5); cout<<("U");	Sleep(95);
	// COLUMNA 3
	gotoxy(30,6); cout<<("M");Sleep(95);
	gotoxy(33,6); cout<<("M");Sleep(95);
	gotoxy(37,6); cout<<("M");Sleep(95);
	gotoxy(40,6); cout<<("M");Sleep(95);
	gotoxy(43,6); cout<<("E");Sleep(95);
	gotoxy(44,6); cout<<("E");Sleep(95);
	gotoxy(45,6); cout<<("E");Sleep(95);
	gotoxy(46,6); cout<<("E");Sleep(95);
	gotoxy(47,6); cout<<("E");	Sleep(95);
	gotoxy(50,6); cout<<("N");Sleep(95);
	gotoxy(53,6); cout<<("N");Sleep(95);
	gotoxy(56,6); cout<<("N");	Sleep(95);
	gotoxy(59,6); cout<<("U");Sleep(95);
	gotoxy(65,6); cout<<("U");Sleep(95);
	//COLUMNA 4
	gotoxy(30,7); cout<<("M");Sleep(95);
	gotoxy(34,7); cout<<("M");Sleep(95);
	gotoxy(36,7); cout<<("M");Sleep(95);
	gotoxy(40,7); cout<<("M");	Sleep(95);
	gotoxy(43,7); cout<<("E");Sleep(95);
	gotoxy(50,7); cout<<("N");Sleep(95);
	gotoxy(54,7); cout<<("N");Sleep(95);
	gotoxy(56,7); cout<<("N");	Sleep(95);
	gotoxy(59,7); cout<<("U");Sleep(95);
	gotoxy(65,7); cout<<("U");Sleep(95);
	// COLUMNA 5
	gotoxy(30,8); cout<<("M");Sleep(95);
	gotoxy(35,8); cout<<("M");Sleep(95);
	gotoxy(40,8); cout<<("M");	Sleep(95);
	gotoxy(43,8); cout<<("E");Sleep(95);
	gotoxy(44,8); cout<<("E");Sleep(95);
	gotoxy(45,8); cout<<("E");Sleep(95);
	gotoxy(46,8); cout<<("E");Sleep(95);
	gotoxy(47,8); cout<<("E");	Sleep(95);
	gotoxy(50,8); cout<<("N");Sleep(95);
	gotoxy(56,8); cout<<("N");	Sleep(95);
	gotoxy(59,8); cout<<("U");Sleep(95);
	gotoxy(60,8); cout<<("U");Sleep(95);
	gotoxy(61,8); cout<<("U");Sleep(95);
	gotoxy(62,8); cout<<("U");Sleep(95);
	gotoxy(63,8); cout<<("U");Sleep(95);
	gotoxy(64,8); cout<<("U");Sleep(95);
	gotoxy(65,8); cout<<("U");Sleep(95);
	cout<<"\n	______________________________________________________________\n";
	Beep(1123,500);
	cout<<"\n";
	cout<<"				    	 C  A  R  G  A  N  D  O...\n";Sleep(95);
	gotoxy(38, 13); cout<<"["; Sleep(95);
	gotoxy(40, 13); cout<<"/"; Sleep(95);
	Beep(1123,500);
	gotoxy(42, 13); cout<<"/";Sleep(95);
	gotoxy(44, 13); cout<<"/";Sleep(95);
	Beep(1123,500);
	gotoxy(46, 13); cout<<"/"; Sleep(95);
	gotoxy(48, 13); cout<<"/";Sleep(95);
	Beep(1000,600);
	gotoxy(50, 13); cout<<"/";Sleep(95);
	gotoxy(52, 13); cout<<"/";Sleep(95);
	Beep(1123,500);
	gotoxy(54, 13); cout<<"/";Sleep(95);
	gotoxy(56, 13); cout<<"/";Sleep(95);
	Beep(1123,500);
	gotoxy(58, 13); cout<<"/";Sleep(95);
	gotoxy(60, 13); cout<<"/";Sleep(95);
	Beep(1123,500);
	gotoxy(62, 13); cout<<"/";Sleep(95);
	gotoxy(64, 13); cout<<"/";Sleep(95);
	gotoxy(66, 13); cout<<"]";Sleep(95);
	Beep(1000,600);
	
	gotoxy(14,14);cout<<"\n   [1]- Calculadora Constantes" <<endl;
	gotoxy(5,16);cout<<"\n   [3]- Resta con Constantes" <<endl;
	gotoxy(5,18);cout<<"\n   [2]- Resta de dos Numeros Variables" <<endl; Sleep(95);
	gotoxy(5,20);cout<<"\n   [4]- Multiplicacion con Constantes" <<endl;
	gotoxy(5,22);cout<<"\n   [5]- Divicion con Constantes" <<endl;
	gotoxy(5,24);cout<<"\n   [6]- Divicion con Variables" <<endl; Sleep(95);
	gotoxy(5,26);cout<<"\n   [7]- Multiplicacion de Variables" <<endl;
	gotoxy(5,28);cout<<"\n   [8]- Resta de Variables" <<endl;
	gotoxy(5,30);cout<<"\n   [9]- Area y perimetro del Rombo" <<endl; Sleep(95);
	gotoxy(5,32);cout<<"\n  [10]- Area y volumen del Cubo" <<endl;
	gotoxy(5,34);cout<<"\n  [11]- Esfera" <<endl;
	gotoxy(5,36);cout<<"\n  [12]- Rombo Constantes" <<endl; Sleep(95);
	gotoxy(5,38);cout<<"\n  [13]- Cubo Constantes" <<endl;
	gotoxy(5,40);cout<<"\n  [14]- Esfera constantes" <<endl;
	gotoxy(5,42);cout<<"\n  [15]- Calificaciones-Promedio-aprobado o reprobado" <<endl; Sleep(95);
	gotoxy(5,44);cout<<"\n  [16]- Area y volumen de Piramide Cuadrangular" <<endl;
	gotoxy(5,46);cout<<"\n  [17]- Positivo o Negativo Numero" <<endl;
	gotoxy(5,48);cout<<"\n  [18]- Pago extra - Pago normal" <<endl; Sleep(95);
	gotoxy(5,50);cout<<"\n  [19]- Dolares a pesos" <<endl;
	gotoxy(5,52);cout<<"\n  [20]- Numero igual o diferente a 100" <<endl;
	gotoxy(5,54);cout<<"\n  [21]- Area y volumen de un Cono" <<endl; Sleep(95);
	gotoxy(5,56);cout<<"\n  [22]- For programa que imprime del 0 al 100" <<endl;
	cout<<"\n  [23]- Impresion del 2000 al 5000" <<endl;
	cout<<"\n  [24]- Suma de los primeros 9 digitos y me diga la media" <<endl; Sleep(95);
	cout<<"\n  [25]- Area y Volumen de un Prisma Recto" <<endl;
	cout<<"\n  [26]- Numeros Par-Impar Alternados" <<endl;
	cout<<"\n  [27]- Que triangulo es" <<endl; Sleep(95);
	cout<<"\n  [28]- Positivo Negativo 2.0" <<endl;
	cout<<"\n  [29]- Numero del Mes" <<endl;
	cout<<"\n  [30]- Dia de la semana" <<endl; Sleep(95);
	cout<<"\n  [31]- Edad" <<endl;
	cout<<"\n  [32]- Multiplos del 3 al 90 - For" <<endl;
	cout<<"\n  [33]- La Suma de los 20 numeros - For" <<endl; Sleep(95);
	cout<<"\n  [34]- Suma de los Numeros Pares - For" <<endl;
	cout<<"\n  [35]- Numeros Impares" <<endl;
	cout<<"\n  [36]- Exponentes" <<endl; Sleep(95);
	cout<<"\n  [37]- Operacion" <<endl;
	cout<<"\n  [38]- Numeros - While" <<endl;
	cout<<"\n  [39]- Perimetro" <<endl; Sleep(95);
	cout<<"\n  [40]- Area de Triangulo" <<endl;
	cout<<"\n  [41]- Sistema Decimal" <<endl;
	cout<<"\n  [42]- Contrasena - While" <<endl; Sleep(95);
	cout<<"\n  [43]- Suerte con tu numero" <<endl;
	cout<<"\n  [44]- Ciclo Do-While" <<endl;
	cout<<"\n  [45]- Factorial de un numero" <<endl; Sleep(95);
	cout<<"\n  [46]- COMPARACION DE VALORES" <<endl;
	cout<<"\n	______________________________________________________________\n";
	Beep (392,100);Sleep(150);
	Beep (440,100);Sleep(300);
	 cout<<"\n Teclea el numero correspondiente al programa que deseas utilizar: \n"; 
	Beep (349,100);Sleep(100);
	Beep (392,100);Sleep(300);
	cout<<"\n	______________________________________________________________\n";
	Beep (330,100);Sleep(300);
	Beep (262,100);Sleep(100);
	Beep (294,100);Sleep(100);
    Beep (247,100);Sleep(500);
	 	cout<<"\n\t\t\t\t\t"; cin>>opcion;
		system("cls");
	switch(opcion)
	{
	case 1:			//Calculadora Constantes
		{
			system("color 03");
			cout<<"\n	_______________________________________________________\n"; Sleep(100);
			cout<<"\n		Elegiste la opcion 1: Calculadora Constantes\n"; Sleep(100);
			cout<<"\n	_______________________________________________________\n"; Sleep(100);
			cout<<"\n	Tu valor 1 es = 75\n	Tu valor 2 es = 25\n"; Sleep(95);
			cout<<"\n _______________________________________________________\n"; Sleep(100);
		int n1=75, n2=25, suma, resta, multiplicacion, division;
		suma=n1+n2;
			resta=n1-n2;
				multiplicacion=n1*n2;
					division=n1/n2;
		cout<<"\n\n		La suma de 75+25 es: "<<suma; Sleep(100);
	  		cout<<"\n\n 	La resta de 75-25 es: "<<resta; Sleep(100);
	  			cout<<"\n\n 	La multiplicacion de 75*25 es: " <<multiplicacion; Sleep(100);
	  				cout<<"\n\n 	La divicion de 75/25 es: " <<division; Sleep(100);
	  		cout<<"\n	______________________________________________________________\n"; Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu"; Sleep(105);
		}
	break;
	case 2:			//Resta de dos Numeros Variables
		{
			system("color 04");
		float B1, B2, resta;
		cout<<"\n	____________________________________________________________\n"; Sleep(100);
		cout<<"\n	  Elegiste la opcion 2: Resta de dos Numeros Variables \n";
		cout<<"\n____________________________________________________________________\n";Sleep(100);
		cout<<"\n	Ingresa tu primer valor: "; cin>> B1;	Sleep(100);
			cout<<"\n	Ingresa tu segundo valor: "; cin>> B2;Sleep(100);
			cout<<"\n____________________________________________________________________\n";Sleep(100);
				resta=B1-B2;
		  		cout<<"\n		La resta de tus valores es: "<<resta;Sleep(100);
		  		cout<<"\n	____________________________________________________________\n";Sleep(100);
		  						cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 3:			//Resta con Constantes
		{
			system("color 05");
		int B1=890, B2=193, A3=141, A4=229, resta;
		cout<<"\n	____________________________________________________________\n"; Sleep(100);
		cout<<"\n	  Elegiste la opcion 3: Resta de 4 Numeros con Constantes \n";Sleep(100);
		cout<<"\n____________________________________________________________________\n";Sleep(100);
		cout<<" Tus constantes son:\n  890\n  193\n  141\n  229";Sleep(100);
		cout<<"\n____________________________________________________________________\n";Sleep(100);
			resta=B1-B2-A3-A4;
			cout<<"\n	  La resta de 890-193-141-229 es: "<<resta;Sleep(100);
		cout<<"\n	____________________________________________________________\n";Sleep(100);
								cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 4:			//Multiplicacion con Constantes
		{
			system("color 06");
		int BA=85, AB=25, AA=51, BB=79, multiplicacion;
		cout<<"\n	_________________________________________________________________________\n";Sleep(100);
		cout<<"\n	  Elegiste la opcion 4: Multiplicacion de cuatro numeros con Constantes \n";Sleep(100);
		cout<<"\n___________________________________________________________________________\n";Sleep(100);
		cout<<" Tus constantes son:\n   85\n   25\n   51\n   79";Sleep(100);
		cout<<"\n___________________________________________________________________________\n";Sleep(100);
				multiplicacion= BA*AB*AA*BB;
			cout<<"\n	  La multiplicacion de 85*25*51*79 es: "<<multiplicacion;Sleep(100);
		cout<<"\n	_________________________________________________________________________\n";Sleep(100);
								cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 5:			//Divicion con Constantes
		{
			system("color 07");
		float QW=4044, ER=413, WQ=52, RE=2, division;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n	 	Elegiste la opcion 5: Divicion con Constantes \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<" Tus constantes son:\n   4044\n   413\n   52\n   2";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
 				division=QW/ER/WQ/RE;
 			cout<<"\n	 El resultado de la divicion de 4044/413/52/2 es: "<<division;Sleep(100);
 		cout<<"\n	______________________________________________________________\n";Sleep(100);
 								cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 6:			//Divicion con Variables
		{
			system("color 08");
		float ZX, CV, XZ, VC, division;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 6: Divicion de 4 Numeros - Variables  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\nIngrese su primer valor: ";cin>>ZX; Sleep(100);
			cout<<"Ingrese su segundo valor: ";cin>>CV;Sleep(100);
			cout<<"Ingrese su tercer valor: ";cin>>XZ;Sleep(100);
			cout<<"Ingrese su cuarto valor: ";cin>>VC;Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
					division=ZX/CV/XZ/VC;
				cout<<"\n	El resultado de la division de tus valores es: "<<division;Sleep(100);
				cout<<"\n	______________________________________________________________\n";Sleep(100);
								cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 7:			//Multiplicacion de Variables
		{
			system("color 09");
		float AS, DF, SA, FD, multiplicacion;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 7: Multiplicacion de 4 Numeros - Variables  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\nIngrese su primer valor: ";cin>>AS;Sleep(100);
			cout<<"Ingrese su segundo valor: ";cin>>DF;Sleep(100);
			cout<<"Ingrese su tercer valor: ";cin>>SA;Sleep(100);
			cout<<"Ingrese su cuarto valor: ";cin>>FD;Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
	 				 multiplicacion=AS*DF*SA*FD;
	  			cout<<"\n	El resultado de la multiplicacion de tus valores es: "<<multiplicacion;Sleep(100);
	  			cout<<"\n	______________________________________________________________\n";
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 8:			//Resta de Variables
		{
			system("color 10");
		float TY, UI, YT, IU, resta;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 8: Resta de 4 Numeros - Variables  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n	Ingrese su primer valor: ";cin>> TY;Sleep(100);
			cout<<"\n	Ingrese su segundo valor: ";cin>> UI;Sleep(100);
			cout<<"\n	Ingrese su tercer valor: ";cin>> YT;Sleep(100);
			cout<<"\n	Ingrese su cuarto valor: ";cin>> IU;Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
					resta=TY-UI-YT-IU;
				cout<<"\n		El resultado de la resta de tus valores es: "<<resta;Sleep(100);
				cout<<"\n	______________________________________________________________\n";Sleep(100);
								cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 9:			//Area y perimetro del Rombo
		{
			system("color A");
		int D, d, L, area, perimetro;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 9: Area y Perimetro del Rombo  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n Ingresa el valor de la diagonal Mayor: "; cin>>D;Sleep(100);
			cout<<" Ingresa el valor de la diagonal menor: "; cin>>d;Sleep(100);
			cout<<" Ingresa el valor de lado del rombo: "; cin>>L;Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
				area= D*d/2;
		 			perimetro= L*4;
				cout<<"\n	Tu area es: " <<area;Sleep(100);
					cout<<"\n	Tu perimetro es: " <<perimetro;Sleep(100);
					cout<<"\n	______________________________________________________________\n";Sleep(100);
								cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 10:		//Area y volumen del Cubo
		{
			system("color B");
		int a, area, volumen, potencia;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 10: Area y Volumen del Cubo  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n	Ingresa el valor del arista de tu cubo: "; cin>>a;Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
	 			area= 6*a*a;
				cout<<"\n		El area de tu cubo es: " <<area;Sleep(100);
	 				volumen= a*a*a;
					cout<<"\n		El volumen de tu cubo es: " <<volumen;Sleep(100);
					cout<<"\n	______________________________________________________________\n";Sleep(100);
								cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 11:		//Esfera
		{
			system("color C");
		float P=3.1416, radio, longitudC, areaC, volumenE;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 11: Area, Volumen y Longitud de una Esfera  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n	Ingresar el valor de radio: "; cin>>radio;Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
				longitudC= 2*P*radio;
				cout<<"\n		Tu longitud es: " <<longitudC;Sleep(100);
					areaC= P*radio*radio;
					cout<<"\n		Tu area es: " <<areaC;Sleep(100);
						volumenE= radio*radio*radio*P*4/3;
						cout<<"\n		Tu volumen es: " <<volumenE;Sleep(100);
						cout<<"\n	______________________________________________________________\n";Sleep(100);
								cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 12:		//Rombo Constantes
		{
			system("color D");
			int D=8, d=4, L=5, area, perimetro;
			cout<<"\n	______________________________________________________________\n";Sleep(100);
			cout<<"\n		Elegiste la opcion 12: Area y Perimetro de un Rombo - Constantes \n";Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n  Tu Diagonal Mayor es = 8\n  Tu diagonal menor = 4\n	Uno de los lados mide = 5";Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
				area= D*d/2;
		 			perimetro= L*4;		 	
	 			cout<<"\n	Tu area es: " << area;Sleep(100);
	 				cout<<"\n	Tu perimetro es: " << perimetro;Sleep(100);
	 				cout<<"\n	______________________________________________________________\n";Sleep(100);
	 							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 13:		//Cubo Constantes
		{
			system("color E");
			int L=3, area, volumen;
			cout<<"\n	______________________________________________________________\n";Sleep(100);
			cout<<"\n		Elegiste la opcion 13: Area y Volumen de un Cubo - Constantes  \n";Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	Las constantes que tienes son:" <<endl;Sleep(100);
		cout<<"\n	Lado=3\n	Numero de caras=6\n\n	Para calcular el area es el numero de caras*lado*lado\n\n	Para calcular el volumen multiplicas lado*lado*lado\n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			area= 6*L*L;
				volumen= L*L*L;
			cout<<"\n		Tu area es: " << area;Sleep(100);
				cout<<"\n		Tu volumen es: " << volumen;Sleep(100);
				cout<<"\n	______________________________________________________________\n";Sleep(100);
					  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 14:		//Esfera constantes
		{
			system("color F");
			double P=3.1416, radio= 3, longitudC, areaC, volumenE;
			cout<<"\n	______________________________________________________________\n";Sleep(100);
			cout<<"\n		Elegiste la opcion 14: Longitud, Area y Volumen de una Esfera - Constantes  \n";Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n	Las constantes que tienes son:" <<endl;Sleep(100);
			cout<<"\n	Pi=3.1416\n		radio=3\n";Sleep(100);
			cout<<"\n	Para calcular la longitud es 2*PI*radio\n	Para calcular el area es PI*radio*radio\n	Para calcular el volumen es radio*radio*radio*PI*4/3\n";Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
			longitudC= 2*P*radio;
			cout<<"\n		Tu longitud es: " <<longitudC;Sleep(100);
				areaC= P*radio*radio;
				cout<<"\n		Tu area es: " <<areaC;Sleep(100);
					volumenE= radio*radio*radio*P*4/3;
					cout<<"\n		Tu volumen es: " <<volumenE;Sleep(100);
					cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);					
		}
	break;
	case 15:		//Calificaciones-Promedio-aprobado o reprobado
		{
			system("color 1");
			int c1, c2, c3, c4, c5, suma, promedio;
			cout<<"\n	______________________________________________________________\n";Sleep(100);
			cout<<"\n		Elegiste la opcion 15: Calificaciones - Promedio - Aprobado o Reprobado  \n";Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n	Ingresa la primera calificacion:";cin>>c1;Sleep(100);
			cout<<"\n	Ingresa la segunda calificacion:";cin>>c2;Sleep(100);
			cout<<"\n	Ingresa la tersera calificacion:";cin>>c3;Sleep(100);
			cout<<"\n	Ingresa la cuarta calificacion:";cin>>c4;Sleep(100);
			cout<<"\n	Ingresa la quinta calificacion:";cin>>c5;Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
	 			suma= c1+c2+c3+c4+c5;
	 			promedio=suma/5;
			cout<<"\n		Tu promedio es: " <<promedio;Sleep(100);
			if(promedio<=5)			
			cout<<"\n		Estas reprobado\n";
			else
			cout<<"\n		Estas aprobado\n";
			cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 16:		//Area y volumen de Piramide Cuadrangular
		{
			system("color 2");
			float lb, h, Acl, Ab, ACL, sumaACL, Apiramide, volumen;
			cout<<"\n	______________________________________________________________\n";Sleep(100);
			cout<<"\n		Elegiste la opcion 16: Area y volumen de una Piramide Cuadrangular  \n";Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
 			cout<<"\n	Ingresa el valor de un lado de la base: "; cin>> lb;Sleep(100); //l=lado b=base
 				Ab= lb*lb;
 	  		cout<<"\n		El area de la base es: " << Ab <<endl;Sleep(100);
 	  		cout<<"\n__________________________________________________________________\n";Sleep(100);
 			cout<<"\n	Ingresa el valor de la altura de una cara lateral: "; cin>> Acl;Sleep(100); //A=altura c=cara l=lateral
 				ACL= lb*Acl/2;
 	  		cout<<"\n		El area de tu cara lateral es: " << ACL;Sleep(100);
 	  		cout<<"\n__________________________________________________________________\n";Sleep(100);
 				sumaACL= ACL*4;
 	 		cout<<"\n	La suma del area de tus caras laterales es: " << sumaACL <<endl;Sleep(100);
 				Apiramide= Ab+sumaACL;
 	  		cout<<"\n		El area de la Piramide es: " <<Apiramide <<endl;Sleep(100);
 			cout<<"\n__________________________________________________________________\n";Sleep(100);
 			cout<<"\n	Ingresa el valor de la altura de tu piramide cuadrangular: "; cin>> h;Sleep(100);
 				volumen= Ab*h/3;
 	  		cout<<"\n		El volumen de tu piramide cuadrangular es: " << volumen;Sleep(100);	
 	  		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 17:		//Positivo o Negativo Numero
		{
			system("color 3");
		float n, n2;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 17: Positivo o Negativo Numero  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	  Ingresa un numero y este programa te dira si es un Numero Positivo(+) o Negativo(-)";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n	Ingresa tu digito: "; cin>> n;Sleep(100);
		if(n>=-0)
	 		cout<<"\n		tu digito es positivo (+)" <<endl;
	 	else
	 		cout<<"\n		tu digito es negativo (-)" <<endl;
	 	cout<<"\n__________________________________________________________________\n";Sleep(100);
	 		cout<<"\n	Ingresa otro digito: "; cin>> n2;Sleep(100);
	 	if(n2>=-0)
	 		cout<<"\n		tu digito es positivo (+)";
	 	else
	 		cout<<"\n		tu digito es negativo (-)";	
	 	cout<<"\n	______________________________________________________________\n";Sleep(100);
		  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 18:		//Pago extra - Pago normal
		{
			system("color 4");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 18: Pago extra - Pago normal  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		float ht, ht2; //h=horas t=trabajadas
			cout<<"\n	Cuantas horas trabajaste?: "; cin>> ht;Sleep(100);
		if(ht<=40)
	 		cout<<"\n		Tu pago es normal" <<endl;
	 	else
	 		cout<<"\n		Tu pago es extra" <<endl;
	 	cout<<"\n__________________________________________________________________\n";Sleep(100);
	 	cout<<"\n	Cuantas horas trabajaste la 2da semana?: "; cin>> ht2;Sleep(100);
	 		if(ht2<=40)
	 		cout<<"\n		Tu pago es normal" <<endl;
	 	else
	 		cout<<"\n		Tu pago es extra" <<endl;
			cout<<"\n	______________________________________________________________\n";Sleep(100);
		  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);			
		}
	break;
	case 19:		//Dolares a pesos
		{
			system("color 5");
		float dolares, Preciodeldolar=20, pesos;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 19: Dolares a pesos Mexicanos  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n	Precio del dolar = 20";Sleep(100);
			cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n Ingrese su cantidad de dolares: "; cin>> dolares;Sleep(100);
				pesos= dolares*Preciodeldolar;
	 		cout<<"\n  Los dolares ingresados equivalen a: " <<pesos << " pesos mexicanos";Sleep(100);
	 		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 20:		//Numero igual o diferente a 100
		{
			system("color 6");
		int N,valor;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 20: Numero igual o diferente a 100  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
    		cout<<"\n Ingresa el numero que deseas comparar:"; cin>>N;Sleep(100);
    	if (N==100)
    		cout<<"\n  Tu valor es igual a 100";
    	else 
    		cout<<"\n  Tu valor es diferente a 100";Sleep(100);
    		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 21:		//Area y Volumen de un Cono
		{
			system("color 7");
		float PI=3.1416, radio, h, volumen, AC, G, AL, AT;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 21: Area y Volumen de un Cono  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	Ingresa el valor de tu radio: "; cin>>radio;Sleep(100);
		cout<<"\n	Ingresa el valor de tu altura: "; cin>>h;Sleep(100);
		volumen= PI*radio*radio*h/3;
		cout<<"\n	   El volumen de tu cono es: " <<volumen <<endl;Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	Ingresa el valor de la generatriz: "; cin>>G; Sleep(100);//G= generatriz
		AL= PI*radio*G;
		cout<<"\n	   El area lateral es: " <<AL <<endl;Sleep(100);
		AT= AL+PI*radio*radio;
		cout<<"\n	   El area total de tu cono es: " <<AT;Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 22:		//For programa 0 al 100
		{
			system("color 8");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 22: Programa que imprime del 0 al 100 - For  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		for(int i=0; i<=100; i++)
		{
			cout<< endl << i <<endl;Sleep(100);
		}		
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 23:		//Impresion del 2000 al 5000
		{
			system("color 9");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 23: Impresion del 2000 al 5000  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		for(int i=2000; i<=5000; i++)
		{
		cout<< i <<endl;Sleep(100);
		}	
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 24:		//Suma de los primeros 9 digitos y me diga la media
		{
			system("color A");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 24: Suma de los primeros 9 digitos y me diga la media  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		for(int i=1; i<=9; i++)
		{
		cout<<"\n" << i  <<endl;Sleep(100);
		}
		{
		int i=1+2+3+4+5+6+7+8+9, media;
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	  La suma de tus primeros 9 digitos es: " << i;Sleep(100);
			media= i/9;
		  cout<<"\n		La media de tus digitos es: " << media;Sleep(100);
		}
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 25:		//Area y Volumen de un Prisma Recto
		{
			system("color B");
		float l, a, Ab, h, volumen, At, At2;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 25: Area y Volumen de un Prisma Recto  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	Ingresa el largo de la base de tu Prisma Recto: "; cin>> l;Sleep(100);
		cout<<"\n	Ingresa el ancho de la base de tu Prisma Recto: "; cin>> a;Sleep(100);
	  	cout<<"\n	Ingresa la altura de tu Prisma Recto: "; cin>> h;Sleep(100);
	  	cout<<"\n__________________________________________________________________\n";Sleep(100);
			Ab= l*a;
			 volumen= Ab*h;
			  At= l*a+l*h+a*h;
			   At2= At*2;
		cout<<"\n	  El Area total de tu Prisma Recto es: " << At2 <<endl;Sleep(100);
	    cout<<"\n		El volumen de tu Prisma Recto es: " << volumen <<endl;Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";	Sleep(100);
		}
	break;
	case 26:		//Numeros Par-Impar Alternados
		{
			system("color C");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 26: Numeros Par-Impar Alternados  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		for(int i=400, i2=401; i<=600, i2<=600; i+=2, i2+=2){
	 	cout<<"  par:"<< i <<endl;Sleep(100);
		cout<<"           impar:"<< i2 <<endl;	Sleep(100);
		}	
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 27:		//Que triangulo es
		{
			system("color D");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 27: Que triangulo es?  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		float a, b, c;
		cout<<"\n		Aqui vas a saber si tu triangulo es Isoceles - Equilatero - Escaleno\n";Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n	Ingresa el primer lado de tu triangulo: "; cin>>a;Sleep(100);
		cout<<"\n	Ingresa el segundo lado de tu triangulo: "; cin>>b;Sleep(100);
		cout<<"\n	Ingresa el tercer lado de tu triangulo: "; cin>>c;Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		if (a == b && a == c )
			cout<<"\n		Tu triangulo es Equilatero";			
		else if( a == b || a == c || b==c)
			cout<<"\n		Tu triangulo es Isoceles";
		else 
			cout<<"\n		Tu triangulo es Escaleno";
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 28:		//Positivo Negativo 2.0
		{
			system("color E");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 28: Positivo Negativo 2.0  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);

		int num, num2;
    		cout<<"\n	Ingresa tu valor a comparar:";cin>>num;Sleep(100);
    	if (num>0){
			cout<<"\n		Tu numero es positivo";Sleep(100);
        }
        else if(num<0){
        	cout<<"\n		Tu numero es negativo";Sleep(100);
        }
        else if(num==0){
        	cout<<"\n		Tu numero es neutral";Sleep(100);
        }
        cout<<"\n__________________________________________________________________\n";Sleep(100);
    		cout<<"\n	Ingresa tu segundo valor a comparar:";cin>>num2;Sleep(100);
    	if (num2>0){
			cout<<"\n		Tu numero es positivo";Sleep(100);
        }
        else if(num2<0){
        	cout<<"\n		Tu numero es negativo";Sleep(100);
        }
        else if(num2==0){
        	cout<<"\n		Tu numero es neutral";Sleep(100);
        }
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";	Sleep(100);
		}
	break;
	case 29:		//Numero del Mes
		{
			system("color F");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 29: Numero del Mes  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n		Digita un numero comprendidos entre el 1 y el 12 para que te diga cual mes es";Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		int mes;
    cout<<"\n	Ingresa tu numero para saber el mes: "; cin>>mes;Sleep(100);
    	if (mes==1){
			cout<<"\n	  Tu mes es Enero\n";Sleep(100);
			
			cout<<"\n	Esperemos te hayas portado bien para que los reyes te traigan todo lo que les pediste, ahi me guardas algo para mi";Sleep(100);
        }
        else if(mes==2){
        	cout<<"\n	  Tu mes es Febrero\n";Sleep(100);
        	
        	cout<<"\n	JAJA estas soltero o ya tienes con quien pasar este romantico mes -_-\n 	corre aun estas a tiempo, llevale flores y dile todo lo que sientes :)) ";Sleep(100);
        }
        else if(mes==3){
        	cout<<"\n	  Tu mes es Marzo\n";Sleep(100);
        	
        	cout<<"\n	Espero estes feliz, ya que el (20 de Marzo) celebramos el dia internacional de la Felicidad\n	No te rindas, recuerda que...\n		El viaje aporta la felicidad, no el destino";Sleep(100);
        }
        else if(mes==4){
        	cout<<"\n	  Tu mes es abril\n";Sleep(100);
        	
        	cout<<"\n	Felicidades a todos los ninos y ninas de este planeta al igual de otros planetas y galaxias";Sleep(100);
        }
        else if(mes==5){
        	cout<<"\n	  Tu mes es Mayo\n";Sleep(100);
        	cout<<"\n	Ve y dale un abrazo fuerte, pero demasiado fuerte a tu grandiosa mama, recuerda que ella te limpiaba tus nachas";
        	cout<<"\n	Tambien muchas felicidades a los maestr@s que dia con dia nos ayudan a ser mejores personas :)) Un abrazo fuerte para esos grandiosos maestr@s";Sleep(100);
        }
        else if(mes==6){
        	cout<<"\n	  Tu mes es Junio\n";Sleep(100);
        	
        	cout<<"\n	Uy este mes es GRANDIOSOOO... ¡¡Viva la Marina Nacional de Los Estados Unidos Mexicanos, preparen armas, apunten y disparenn!!";Sleep(100);
        }
        else if(mes==7){
        	cout<<"\n	  Tu mes es Julio\n";Sleep(100);
        	
        	cout<<"\n	¡Felicidades! a todas las mujeres que alzaron la voz y pudieron votar por primera vez en la fecha de 3 de Julio de 1955";Sleep(100);
        }
        else if(mes==8){
        	cout<<"\n	  Tu mes es Agosto\n";Sleep(100);
        	
        	cout<<"\n	Que vivan todos los Pueblos Indigenas y sus tradiciones, esperemos y nunca mueran tales tradiciones :´)";Sleep(100);
        }
        else if(mes==9){
        	cout<<"\n	  Tu mes es Septiembre\n";Sleep(100);
        	
        	cout<<"\n	VIVAAN todos los revolucionarios que se alzaron en armar y lograron la Independencia de mi tan preciado Mexico";Sleep(100);
        }
        else if(mes==10){
        	cout<<"\n	  Tu mes es Octubre\n";Sleep(100);
        	
        	cout<<"\n	Enciende tus bocinas ponle todo el volumen y escucha la musica que tanto te gustaa, en este mes esta el dia Internacional de la Musica ♫♪";Sleep(100);
        }
        else if(mes==11){
        	cout<<"\n	  Tu mes es Noviembre\n";Sleep(100);
        	
        	cout<<"\n	Uy que friooo ya se sienten los muertos cercas, recuerda usar tu disfraz para que te camufles mientras ellos pertenecen aqui";Sleep(100);
        }
        else if(mes==12){
        	cout<<"\n	  Tu mes es Diciembre\n";Sleep(100);
        	
        	cout<<"\n	¡¡Feliz Navidad!!, Que tu vida este llena de bendiciones tan grandes como el frio en invierno :)";Sleep(100);
        }
        else if(mes>=13){
        	cout<<"\n	  Tu valor no esta dentro de los meses del annio :/";Sleep(100);
        }
        cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";	Sleep(100);
		}
	break;
	case 30:		//Dia de la semana
		{
			system("color 1");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 30: Dia de la Semana  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		int dia;
        cout<<"\n	Ingresa el numero para saber a que dia corresponde: ";cin>>dia;Sleep(100);
        if (dia==1){
			cout<<"\n	  Tu dia es Lunes";Sleep(100);
        }
        else if(dia==2){
        	cout<<"\n	  Tu dia es Martes";Sleep(100);
        }
        else if(dia==3){
			cout<<"\n	  Tu dia es Miercoles";Sleep(100);
        }
        else if(dia==4){
            cout<<"\n	  Tu dia es Jueves";Sleep(100);
        }
        else if(dia==5){
        	cout<<"\n	  Tu dia es Viernes";Sleep(100);
        }
        else if(dia==6){
            cout<<"\n	  Tu dia es Sabado";Sleep(100);
        }
        else if(dia==7){
            cout<<"\n	  Tu dia es Domingo";Sleep(100);
        }
        else if(dia>=8){
            cout<<"\n	  Este numero no pertenece a algun dia de la semana";Sleep(100);
        }
        cout<<"\n	______________________________________________________________\n";	Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 31:		//Edad
		{
			system("color 2");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 31: Edad  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	Al ingresar tu edad te dira si eres un nino, adolescente, joven, adulto o anciano";Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		int edad;
        cout<<"\n	Ingresa tu edad para decirte en que etapa estas: "; cin>> edad;Sleep(100);
        if (edad<=12){
            cout<<"\n	  Eres un nino";Sleep(100);
        }
         else if(edad<=18){
        	cout<<"\n	  Eres un adolescente";Sleep(100);
        }
         else if(edad<=22){
            cout<<"\n	  Eres un joven";Sleep(100);
        }
         else if(edad<=50){
            cout<<"\n	  Eres un adulto";Sleep(100);
        }
         else if(edad>50){
        	cout<<"\n	  Eres un anciano";Sleep(100);
        }
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 32:		//Multiplos del 3 al 90 - For
		{
			system("color 3");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 32: Multiplos del 3 al 90 - For  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		int m; // m=multiplos
		for(int m=3; m<=90; m+=3){
			cout<<"\n";Sleep(100);
			cout<< m << endl;Sleep(100);
		}
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";	Sleep(100);
		}
	break;
	case 33:		//La suma de los 20 numeros - For
		{
			system("color 4");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 33: La suma de los 20 numeros - For  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		for(int n=1; n<=20; n++)
		{
			cout<< n  <<endl; }Sleep(100);
		{
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		int n=1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19+20;
		cout<<"\n	  La suma de tus 20 digitos es: " << n; }Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);	
		}
	break;
	case 34:		//La suma de los numeros pares
		{
			system("color 5");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 34: La suma de los numeros pares  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		int par = 0;
		for(int i=0; i<=200; i+=2){
		cout<< i <<endl; Sleep(100);			
		if(i%2==0)
			par += i;}
		cout<<"\n	  La suma de los numeros pares es:" << par;Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 35:		//Numeros impares
		{
			system("color 6");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 35: Numeros impares comprendidos del 100 al 200 \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		for(int i=101; i<=200; i+=2){
			cout<<"\nImpar: " << i<< endl;Sleep(100);
		}	
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 36:		//Exponentes
		{
			system("color 7");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 36: Exponentes \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		float resultado;
				resultado = 3*3;
				cout<<"\n	Tinenes una constante el cual es el numero 3 elevado al cuadrado (3^2)\n"; Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n	  Tu resultado es: " << resultado;	Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 37:		//Operacion
		{
			system("color 8");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 37: Operacion (n*4/2+9-3) \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n		El numero ingresado sera remplazado por n en la siguiente operacion (n*4/2+9-3)";Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		float n, resultado;
			cout<<"\n	Ingresa tu digito: "; cin>> n; 	Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
				resultado= n*4/2+9-3;		
					cout<<"\n		Tu resultado es: " << resultado;Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 38:		//Numeros - while
		{
			system("color 9");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 38: Numeros - while \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	Al digitar un numero nos imprimira en pantalla los numeros anteriores a este\n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		int v;
			cout<<"\n	Ingresa tu valor: "; cin>>v;Sleep(100);
		while(--v){
		cout<< v <<endl;Sleep(100);
		}	
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);	
		}
	break;
	case 39:		//Perimetro
		{
			system("color A");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 39: Perimetro - Triangulo \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		float l1, perimetro;
			cout<<"\n	Ingresa la medida de tu primer lado: "; cin>>l1;Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
				perimetro= l1*3;
					cout<<"\n		Tu perimetro es: " << perimetro;	Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 40:		//Area de Triangulo
		{
			system("color B");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 40: Area de Triangulo \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		float b, h, area;
		cout<<"\n	Ingresa la base: "; cin>>b;Sleep(100);
		 cout<<"\n	Ingresa la altura: "; cin>>h;Sleep(100);
		 cout<<"\n__________________________________________________________________\n";Sleep(100);
			area= b*h/2;
				cout<<"\n		Tu area es: " << area;Sleep(100);
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 41:		//Sistema decimal
		{
			system("color C");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 41: Sistema Decimal \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	Al ingresar una cantidad, el programa dira si es una unidad, decena, centena, miles, Diez miles,\n	Cien miles o millones";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		int v, unidades=9, decenas=99, centenas=999, miles=9999, diezm=99999, cienm=999999, millones=9999999;
		cout<<"\n	Ingresa una cantidad para decirte a que pertenece: "; cin>>v;Sleep(100);
		if(v<=unidades){
			cout<<"\n		Es una unidad";Sleep(100);
		}
		else if (v<=decenas){
			cout<<"\n		Es una decena";Sleep(100);
		}
		else if (v<=centenas){
			cout<<"\n		Es una centena";Sleep(100);
		}
		else if (v<=miles){
			cout<<"\n		Es un miles";Sleep(100);
		}
		else if (v<=diezm){
			cout<<"\n		Es un Diez miles";Sleep(100);
		}
		else if (v<=cienm){
			cout<<"\n		Es un cien miles";Sleep(100);
		}
		else if (v<=millones){
			cout<<"\n		Es millones";Sleep(100);
		}	
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);	
		}
	break;
	case 42:		//Contrasena - while
		{
			system("color D");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 42: Contrasena  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		int v;
			cout<<"\n	Inserte la contrasena: "; cin>> v;		Sleep(100);	
		while(v!=123)
		{
			cout<<"\n		Contrasena incorrecta, intente de nuevo: "; cin>> v;Sleep(100);	
		}
		while(v==123)
		{
			cout<<"\n		Encontraste tu contrasena"; cin>> v;Sleep(100);
		}	
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 43:		//Suerte con tu numero
		{
			system("color E");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 43: Suerte con tu numero  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		int Snum=10;
		do{
			cout<<"\n	Suerte con tu numero: " <<Snum<<endl;Sleep(100);
		}
		while(Snum==1, Snum--);	
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 44:		//Ciclo Do-While
		{
			system("color F");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 44: Ciclo Do-While  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		cout<<"\n	Al ingresar tu digito el programa te dira si este se encuentra entre los valores imprimidos\n\to si no se encuentra";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
		int num=18, num2;
		do{
			cout<< num <<endl;Sleep(100);
		}	
		while(num<=1, num--);
		{
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			cout<<"\n	Ingresa tu valor: "; cin>> num2;Sleep(100);
		if (num2<=18)
				cout<<"\n		Tu valor esta comprendido entre mis valores";
		else if(num2<=49)
				cout<<"\n		Tu valor NO esta comprendido entre mis valores";
		else (num2>=50);
	}	
		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 45:		//Factorial de un numero
		{
		system("color 70");	
		int i, fact=1, numero;
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 45: FACTORIAL DE NUMEROS  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
  	 	cout<<"\n	Ingresa un numero para factorizarlo: "; cin>>numero;Sleep(100);
  		if(numero<0) fact =0;
  		else if(numero==0) fact=1;
   		else{
      for (i = 1; i <= numero; i++){
         fact = fact*i;
      }
   }
   		cout<<"\n__________________________________________________________________\n";Sleep(100);
   		cout<<"\n		El resultado de tu factorial es: "<< fact;Sleep(100);
   		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	case 46:
		{
			system("color E4");
		cout<<"\n	______________________________________________________________\n";Sleep(100);
		cout<<"\n		Elegiste la opcion 46: COMPARACION DE VALORES  \n";Sleep(100);
		cout<<"\n__________________________________________________________________\n";Sleep(100);
			float v1, v2, v3, v4, v5, v6;
	
			cout<<"\n	Ingresa tu primer valor: "; cin>> v1;Sleep(100);
	
			if (v1 == 400){
				cout<<"\n		Tu valor es comun\n" << endl;Sleep(100);
			
			}
			else if (v1 >=1000){
				cout<<"\n		Tu digito esta en miles\n" << endl;Sleep(100);
			}
			else if( v1 >= 0.0){
				cout<<"\n		Tu valor es diferente\n" << endl;Sleep(100);
			}
			cout<<"\n__________________________________________________________________\n";Sleep(100);
				cout<<"\n	Ingresa tu segundo valor: "; cin>> v2;Sleep(100);
			if (v2 == 400){
				cout<<"\n		Tu valor es comun\n" <<endl;Sleep(100);
			}
			else if (v2 >=1000){
				cout<<"\n	Tu digito esta en miles\n" <<endl;Sleep(100);
			}
			else if( v2 >= 0.0){
				cout<<"\n	Tu valor es diferente\n" << endl;Sleep(100);
			}
			cout<<"\n	______________________________________________________________\n";Sleep(100);
				cout<<"\n	Ingresa tu tercer valor: "; cin>> v3;Sleep(100);
			if (v3 == 400){
				cout<<"\n		Tu valor es comun\n" <<endl;Sleep(100);
			}
			else if (v3 >=1000){
					cout<<"\n			Tu digito esta en miles\n" <<endl;Sleep(100);
			}
			else if( v3 >= 0.0){
					cout<<"\n			Tu valor es diferente\n" << endl;Sleep(100);
			}
			cout<<"\n__________________________________________________________________\n";Sleep(100);
				cout<<"\n	Ingresa tu cuarto valor: "; cin>> v4;Sleep(100);
			if (v4 == 400){
					cout<<"\n			Tu valor es comun\n" <<endl;Sleep(100);
			}
			else if (v4 >=1000){
					cout<<"\n			Tu digito esta en miles\n" <<endl;Sleep(100);
			}
			else if( v4 >= 0.0){
					cout<<"\n			Tu valor es diferente\n" << endl;Sleep(100);
			}
			cout<<"\n	______________________________________________________________\n";Sleep(100);
				cout<<"\n	Ingresa tu quinto valor: "; cin>> v5;Sleep(100);
			if (v5 == 400){
					cout<<"\n			Tu valor es comun\n"<<endl;Sleep(100);
			}
			else if (v5 >=1000){
					cout<<"'\n			Tu digito esta en miles\n"<<endl;Sleep(100);
			}
			else if( v5 >= 0.0){
					cout<<"\n			Tu valor es diferente\n" << endl;Sleep(100);
			}
			cout<<"\n__________________________________________________________________\n";Sleep(100);
				cout<<"\n	Ingresa tu sexto valor: "; cin>> v6;Sleep(100);
			if (v6 == 400){
					cout<<"\n			Tu valor es comun\n"<<endl;Sleep(100);
			}
			else if (v6 >=1000){
					cout<<"\n			Tu digito esta en miles\n" <<endl;Sleep(100);
			}
			else if( v6 >= 0.0){
					cout<<"\n			Tu valor es diferente\n" << endl;Sleep(100);
		}
		   		cout<<"\n	______________________________________________________________\n";Sleep(100);
	  							cout<<"\n\n		Teclea Enter o cualquier tecla para regresar al menu";Sleep(100);
		}
	break;
	}
	getch();
	system("cls");
}
	return 0;

}
