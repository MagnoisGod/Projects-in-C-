#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <iomanip>

int main(){
	initwindow(350,320);
		setfillstyle(SOLID_FILL, BLUE);
			bar(200,200,220,220);
			Sleep(100);
			
				bar(200,230,220,250);
				Sleep(100);
			
					bar(200,260,220,280);
					Sleep(100);
					
			bar(170,200,190,220);
			Sleep(100);
			
				bar(170,230,190,250);
				Sleep(100);
			
					bar(170, 260,190,280);
					Sleep(100);
			
			bar(140,200,160,220);
			Sleep(100);
			
				bar(140,230,160,250);
				Sleep(100);
		
					bar(140,260,160,280);
					Sleep(100);
			
			bar(110,230,130,250);
			Sleep(100);
			
				bar(110,260,130,280);
				Sleep(100);
	
	getch();
	closegraph();
}