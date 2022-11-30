#include <graphics.h>
#include <windows.h>

int main(){
	initwindow(800,600);
	
	setcolor(RED);
	
//	Lado derecho
	line(400,500,600,300);
	line(600,300, 600,200);
	line(600,200,500,100);
	line(500,100,400,200);
	
//	setfillstyle(SOLID_FILL, RED);
//	floodfill(455,300, RED);
	
	setcolor(RED);
//	Linea separadora
	
	//line(400,500,400,200);
	
	setcolor(RED);
//	Lado izquierdo
	line(400,500, 200,300);
	line(200,300, 200,200);
	line(200,200, 300,100);
	line(300,100, 400,200);
	
//	setfillstyle(SOLID_FILL, RED);
//	floodfill(300,200, RED);
	
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
	outtextxy(280,250, "Caroline");
	
	getch();
	closegraph();
}