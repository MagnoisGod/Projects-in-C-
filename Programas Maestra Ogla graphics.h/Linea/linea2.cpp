#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>

int main(){
	initwindow(800,600);
//	Triangulo
	setcolor(GREEN);
	line (150, 50, 250, 250);
	line (150, 50, 50, 250);
	line (50, 250, 250, 250);
	
//	Cuadrado
	setcolor(RED);
	line (300, 50, 500, 50);
	line (300, 50, 300, 250);
	line (500, 250, 500, 50);
	line (500, 250, 300, 250);
	
//	Rectangulo
	setcolor(YELLOW);
	line (50, 300, 350, 300);
	line (50, 300, 50, 400);
	line (350, 400, 350, 300);
	line (350, 400, 50, 400);

//	Rombo
	setcolor(WHITE);
	line (500, 280, 600, 400);
	line (500, 280, 400, 400);
	line (500, 520, 400, 400);
	line (500, 520, 600, 400);
	
	getch ();
	closegraph();
	
	return 0;
}