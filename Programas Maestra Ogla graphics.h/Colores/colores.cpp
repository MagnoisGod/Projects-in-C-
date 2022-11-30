#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main(){
	
	initwindow(800,600);
	setcolor(BLUE);
	circle(200,200,60); Sleep(120);
	setcolor(WHITE);
	circle(327,200,60); Sleep(120);
	setcolor(RED);
	circle(454,200,60); Sleep(120);
	setcolor(YELLOW);
	circle(262,277,60); Sleep(120);
	setcolor(GREEN);
	circle(389,277,60); Sleep(120);
	getch();
	closegraph();
	
	return 0;
}