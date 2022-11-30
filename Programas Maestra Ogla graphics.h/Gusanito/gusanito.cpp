#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main(){
	initwindow(800,600);
	// 1
	setcolor(3);
	circle(210,200,60); Sleep(95);
	//2
	setcolor(GREEN);
	circle(212,180,60); Sleep(95);
	//3
	setcolor(GREEN);
	circle(220,160,60); Sleep(95);
	//4
	setcolor(GREEN);
	circle(234,140,60); Sleep(95);
	//5
	setcolor(YELLOW);
	circle(250,125,60); Sleep(95);
	//6
	setcolor(YELLOW);
	circle(275,113,60); Sleep(95);
//	7
	setcolor(YELLOW);
	circle(300,110,60); Sleep(95);
//	8
	setcolor(YELLOW);
	circle(325,113,60); Sleep(95);
//	9
	setcolor(YELLOW);
	circle(335,125,60); Sleep(95);
	
//	10
	setcolor(RED);
	circle(366,140,60);	Sleep(95);					
//	11
	setcolor(RED);
	circle(380,160,60); Sleep(95);
	
//	12
	setcolor(RED);
	circle(387,180,60);	Sleep(95);
//	13
	setcolor(3);
	circle(390,200,60); Sleep(95);
	
	getch();
	closegraph();
	
	return 0;
}
