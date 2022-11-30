#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>

int main(){
	initwindow(600, 600);
	
	setcolor(BLUE);
	circle(300, 150, 27);
	setfillstyle(SOLID_FILL, RED);
	floodfill(300,150, BLUE);
	
	setcolor(RED);
	circle(100, 150, 27);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(100,150, RED);
	
	setcolor(RED);
	rectangle(60,290,190,240);
	setfillstyle(SOLID_FILL, 2);
	floodfill(125, 265, RED);
	
	setfillstyle(1,5);
	fillellipse(400, 300, 150, 74);
	
	setcolor(RED);
	setfillstyle(1,7);
	bar(400,50, 450,200);
	
	getch();
	closegraph();
}