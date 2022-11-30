#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main(){
	
	initwindow(800,600);
	setcolor(RED);
	circle(200,200,60); Sleep(95);
	circle(400,200,60); Sleep(95);
	circle(300,120,60); Sleep(95); 
	
	circle(220,160,60); Sleep(95);
	circle(380,160,60); Sleep(95);
	
	circle(210,180,60); Sleep(95);
	circle(390,180,60);	Sleep(95);
	
	circle(235,140,60); Sleep(95);
	circle(365,140,60); Sleep(95);
	
	circle(265,127,60); Sleep(95);
	circle(335,127,60); Sleep(95);
	
	getch();
	closegraph();
	
	return 0;
}