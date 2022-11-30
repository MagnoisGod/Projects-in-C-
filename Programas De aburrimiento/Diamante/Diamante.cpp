#include<iostream>
#include <graphics.h>
int main(){
	initwindow(800,600);
//setcolor(YELLOW);
		//linea de enmedio
		line(400,550, 400,300);
	//Lado Izquierdo
		line(400,550, 350,300);
		line(400,550, 300,300);
		line(400,550, 250,300);
	//Lado derecho
		line(400,550, 450,300);
		line(400,550, 500,300);
		line(400,550, 550,300);
	//linea horizontal que divide 
//	setcolor(3);
		line(250,300, 550,300);
//2d0 piso
//	setcolor(BLUE);
	//Lado izquierdo
		line(350,300, 400,225);
		line(350,300, 310,225);
		line(300,300, 310,225);
		line(250,300, 310,225);
	
	//Lado derecho
		line(450,300, 400,225);
		line(450,300, 490,225);
		line(500,300, 490,225);
		line(550,300, 490,225);
	//linea horizontal 2so piso final
//	setcolor(3);
		line(310,225, 490,225);
		
//	setcolor(RED);
		line(400,300, 400,225);
	
//	setcolor(YELLOW);
		line(400,125, 400,175);
		
		line(490,185, 520,140);
		
		line(310,185, 280, 140);
	
	getch();
	closegraph();
	return 0;
}