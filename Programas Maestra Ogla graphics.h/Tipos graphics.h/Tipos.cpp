#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>

int main(){
	initwindow(800,600);
	
	setcolor(BROWN);
	circle(125,350,50);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(125,350, BROWN);
	
	setcolor(BLUE);
	rectangle(100,400,150,500);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(125,450, BLUE);
	
	setcolor(CYAN);
	setfillstyle(1,12);
	fillellipse(200, 150, 75, 37);
	
	setcolor(BLUE);
	rectangle(50.50, 100,100);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(,, BLUE);

	
	floodfill(75,100, RED);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	closegraph();
}