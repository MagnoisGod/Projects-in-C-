#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>

int main(){
	initwindow(600, 600);
	setcolor(YELLOW);
	rectangle(200,200,50,150); 
	
	setcolor(YELLOW); // AB
	rectangle(50,250, 200, 300);
	
	setcolor(YELLOW); //CD
	rectangle(50,300, 200, 350); 
	
	setcolor(YELLOW); //EF
	rectangle(50,350, 200, 400); 
	
	setcolor(YELLOW); //GH
	rectangle(100,250, 150, 300); 
	
	setcolor(YELLOW); //IJ
	rectangle(100,350, 150, 400); 
	
	setcolor(3); //aguamarina KL
	rectangle(100,300, 150, 350); 
	getch();
	closegraph();
	
	return 0;
}