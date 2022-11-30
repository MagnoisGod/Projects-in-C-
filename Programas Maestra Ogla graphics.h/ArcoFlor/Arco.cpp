#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(){
	initwindow(800,600);
		setcolor(YELLOW);
			arc(390,300,360,0,70);
			
		setcolor(MAGENTA);
			arc(390,345,180,0,65);
			 arc(390,255,-180,-0,-65);		
			  arc(345,300,100,250,65);		
			   arc(435,300,260,75,65);
			
		setcolor(GREEN);
			line(390,365, 390,500);	
	getch();
	closegraph();
}