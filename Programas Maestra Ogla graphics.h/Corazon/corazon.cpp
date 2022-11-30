#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <iomanip>

int main(){
	initwindow(500,500);
	setfillstyle(SOLID_FILL, MAGENTA);
//1mer linea abajo
	bar(220,420,240,440);
	getch();
	closegraph();
}