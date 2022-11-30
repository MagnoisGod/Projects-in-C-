#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main(){
	
	initwindow(800,600);
	
	circle(200,200,60);
	circle(330,200,60);
	circle(460,200,60);
	
	circle(265,275,60);
	circle(395,275,60);
	getch();
	closegraph();
	
	return 0;
}
