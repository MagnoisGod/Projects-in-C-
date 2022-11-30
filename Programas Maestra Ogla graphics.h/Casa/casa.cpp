#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>

int main(){
	initwindow(600, 600);
//	Arbol
	setcolor(GREEN);
	circle(125,350,25);
	circle(100,375,25);
	circle(150,375,25);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(125,350, GREEN);
	floodfill(100,375, GREEN);
	floodfill(150,375, GREEN);
	setcolor(BROWN);
	rectangle(100,400,150,500);
	setfillstyle(SOLID_FILL, BROWN);
	floodfill(125,450, BROWN);
	
//	Casa 1mer piso
	setcolor(BLUE);
	rectangle(250,400,300,500);
	rectangle(350,400,400,500);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(275,450, BLUE);
	floodfill(375,450, BLUE);
	setcolor(CYAN); //aguamarina
	rectangle(300,400,350,500);
	rectangle(400,400,425,500);
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(325,450, CYAN);
	floodfill(412.5,450, CYAN);
	
//	Puerta
	setcolor(BLACK);
	rectangle(325,450,350,500);
	rectangle(350,450,375,500);
	setfillstyle(SOLID_FILL, BLACK);
	floodfill(337.5,475, BLACK);
	floodfill(362.5,475, BLACK);
	setcolor(WHITE);
	line(350,450, 350,500);
	
//	Casa 2do Piso
	setcolor(CYAN); //aguamarina
	rectangle(250,300,300,400);
	rectangle(350,300,400,400);
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(275,350, CYAN);
	floodfill(375,350, CYAN);
	setcolor(BLUE);
	rectangle(300,300,350,400);
	rectangle(400,300,425,400);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(325,350, BLUE);
	floodfill(412.5,350, BLUE);

//	Casa Techo
	setcolor(RED);
//	Triandulo 1
	line(250,298, 287,250);
	line(287,250, 325,298);
	line(250,298, 325,298);
	setfillstyle(SOLID_FILL, RED);
	floodfill(287,275, RED);

//	Triangulo 2 cuspide hacia abajo
	line(300,250, 337.5,298);
	line(337.5,298, 375,250);
	line(300,250, 375,250);
	setfillstyle(SOLID_FILL, RED);
	floodfill(337.5,275, RED);
	
//	Triangulo 3
	line(350,299, 387,250);
	line(387,250, 425,299);
	line(350,299, 425,299);
	setfillstyle(SOLID_FILL, RED);
	floodfill(387,275, RED);
	
//	Cuspide 
	line(337.5,190, 300,240);
	line(337.5,190, 375,240);
	line(300,240, 375,240);
	setfillstyle(SOLID_FILL, RED);
	floodfill(337.5,215, RED);
	
	getch();
	closegraph();
	return 0;
}