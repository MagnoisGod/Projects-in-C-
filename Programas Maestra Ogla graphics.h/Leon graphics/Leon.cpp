#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <iomanip>

int main(){
	initwindow(800,600);
// cruz de guia
	//line(400,50,400,550);
	//line(50,300,700,300);
	
//contorno leon
//	Lado derecho
	//cuadrante 4
setcolor(YELLOW);
	line(400,550,450,450); Sleep(100);
	line(450,450,450,500); Sleep(100);
	line(450,500,500,425); Sleep(100);
	line(500,425,500,450); Sleep(100);
	line(500,450,550,425); Sleep(100);
	line(550,425,580,350); Sleep(100);
	line(580,350,585,375); Sleep(100);
	line(585,375,600,300); Sleep(100);
	//cuadrante 1
	line(600,300,585,275); Sleep(100);
	line(585,275,575,225); Sleep(100);
	line(575,225,595,250); Sleep(100);
	line(595,250,595,215); Sleep(100);
	line(595,215,575,200); Sleep(100);
	line(575,200,555,175); Sleep(100);
	line(555,175,595,200); Sleep(100);
	line(595,200,565,160); Sleep(100);
	line(565,160,545,160); Sleep(100);
	line(545,160,530,150); Sleep(100);
	line(530,150,555,152); Sleep(100);
	line(555,152,480,125); Sleep(100);
	line(480,125,445,140); Sleep(100);
	line(445,140,400,120); Sleep(100);
//	lado izquierdo
	//cuadrante 3
	line(400,550,350,450); Sleep(100);
	line(350,450,350,500); Sleep(100);
	line(350,500,300,425); Sleep(100);
	line(300,425,300,450); Sleep(100);
	line(300,450,250,425); Sleep(100);
	line(250,425,230,350); Sleep(100);
	line(230,350,225,375); Sleep(100);
	line(225,375,210,300); Sleep(100);
	//cuadrante 2
	line(210,300,220,275); Sleep(100);
	line(220,275,230,225); Sleep(100);
	line(230,225,210,250); Sleep(100);
	line(210,250,210,215); Sleep(100);
	line(210,215,230,200); Sleep(100);
	line(230,200,250,175); Sleep(100);
	line(250,175,210,200); Sleep(100);
	line(210,200,240,160); Sleep(100);
	line(240,160,260,160); Sleep(100);
	line(260,160,275,150); Sleep(100);
	line(275,150,250,152); Sleep(100);
	line(250,152,325,125); Sleep(100);
	line(325,125,360,140); Sleep(100);
	line(360,140,400,120); Sleep(100);

//interior cara
	//nariz
	line(400,320,380,310); Sleep(100);
	line(380,310,390,300); Sleep(100);
	line(390,300,400,305); Sleep(100);
	 
	line(400,320,420,310); Sleep(100);
	line(420,310,410,300); Sleep(100);
	line(410,300,400,305); Sleep(100);
	
	line(400,320,400,340); Sleep(100);
	line(400,340,420,345); Sleep(100);
	line(420,345,440,340); Sleep(100);
	line(440,340,445,330); Sleep(100);
	line(445,330,440,290); Sleep(100);
	line(440,290,400,250); Sleep(100);
	
	line(400,340,380,345); Sleep(100);
	line(380,345,360,340); Sleep(100);
	line(360,340,355,320); Sleep(100);
	line(355,330,360,290); Sleep(100);
	line(360,290,400,250); Sleep(100);
	
	//abajo de nariz, menton
	line(370,345,375,360); Sleep(100);
	line(375,360,400,370); Sleep(100);
	line(400,370,425,360); Sleep(100);
	line(425,360,430,345); Sleep(100);

	//arriba de nariz, cara
	line(355,320,330,260); Sleep(100);
	line(330,260,350,220); Sleep(100);
	line(350,220,375,200); Sleep(100);
	line(375,200,400,210); Sleep(100);
	
	line(445,320,470,260); Sleep(100);
	line(470,260,450,220); Sleep(100);
	line(450,220,425,200); Sleep(100);
	line(425,200,400,210); Sleep(100);
	
//lineas mas claras
setcolor(8);
	//lado izquierdo
	line(300,425,230,350); Sleep(100);
	line(300,425,400,475); Sleep(100);
	line(230,350,220,275); Sleep(100);
	line(230,225,230,200); Sleep(100);
	line(250,175,260,160); Sleep(100);
	line(275,150,360,140); Sleep(100);
	line(400,475,375,360); Sleep(100);
	line(325,437.5,360,340); Sleep(100);
	line(270,390,355,330); Sleep(100);
	line(362.5,210,260,160); Sleep(100);
	line(440,340,475,437.5); Sleep(100);
	line(440,340,540,390); Sleep(100);
	line(528.5,267.5,525,380); Sleep(100);
	line(528.5,267.5,580,350); Sleep(100);
	line(528.5,267.5,575,225); Sleep(100);
	line(470,260,528.5,267.5); Sleep(100);
	line(230,225,350,220); Sleep(100);
	line(360,140,400,210); Sleep(100);
	line(375,200,317.5,145); Sleep(100);
	//Lado derecho
	line(400,475,500,425); Sleep(100);
	line(500,425,580,350); Sleep(100);
	line(580,350,587,275); Sleep(100);
	line(530,150,440,140); Sleep(100);
	line(555,175,545,160); Sleep(100);
	line(575,225,575,200); Sleep(100);
	line(400,475,425,360); Sleep(100);
	line(275,267.5,285,380); Sleep(100);
	line(275,267.5,230,350); Sleep(100);
	line(275,267.5,230,225); Sleep(100);
	line(330,260,275,267.5); Sleep(100);
	line(450,220,575,225); Sleep(100);
	line(437.5,210,545,160); Sleep(100);
	line(440,140,400,210); Sleep(100);
	line(425,200,485,145); Sleep(100);
	
	//abajo de la nariz menton lineas claras
	line(400,340,375,360); Sleep(100);
	line(400,340,425,360); Sleep(100);
	
	//nariz lineas claras
	line(420,310,445,320); Sleep(100);
	line(380,310,355,320);	 Sleep(100);
	line(400,333.2,435,342.5); Sleep(100);
	line(400,333.2,365,342.5);	 Sleep(100);
	line(400,326.6,445,330); Sleep(100);
	line(400,326.6,355,330);	 Sleep(100);
	line(380,310,375,305); Sleep(100);
	line(375,305,370,280);	 Sleep(100);
	line(420,310,425,305); Sleep(100);
	line(425,305,430,280); Sleep(100);
	line(357.5,302.5,372.5,292.5); Sleep(100);
	line(442.5,302.5,427.5,292.5); Sleep(100);
	
	//arriba de nariz cara lineas claras
	line(400,210,385,230); Sleep(100);
	line(400,210,415,230); Sleep(100);
	line(400,250,385,230); Sleep(100);
	line(400,250,415,230); Sleep(100);
	
	line(405,215,443.7,215); Sleep(100);
	line(395,215,356.2,215); Sleep(100);
	
	line(430,280,432.5,250); Sleep(100);
	line(432.5,250,415,230); Sleep(100);
	
	line(370,280,367.5,250); Sleep(100);
	line(367.5,250,385,230); Sleep(100);
	
	line(465,250,455,255); Sleep(100);
	line(455,255,432.5,250); Sleep(100);
	
	line(450,265,464,270); Sleep(100);
	line(450,265,455,255); Sleep(100);
	
	line(450,265,431,270); Sleep(100);
	
	line(440,290,440.5,267.5); Sleep(100);
	line(440,290,459,268); Sleep(100);
	
	line(367.5,250,345,255); Sleep(100);
	line(345,255,335,250); Sleep(100);
	
	line(369,270,350,265); Sleep(100);
	line(350,265,345,255); Sleep(100);
	
	line(336.5,270,350,265); Sleep(100);
	
	line(360,290,341,268); Sleep(100);
	line(360,290,359.5,267.5); Sleep(100);
	
setcolor(CYAN); 
	
	//ojo derecho
	line(432.5,250,446,253); Sleep(100);
	line(432.5,250,432,260); Sleep(100);
	
	line(432,260,442,258); Sleep(100);
	line(442,258,446,253); Sleep(100);
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(438,255, CYAN);
	
	//ojo izquierdo
	line(367.5,250,354,253); Sleep(100);
	line(367.5,250,368,260); Sleep(100);
	
	line(368,260,358,258); Sleep(100);
	line(358,258,354,253); Sleep(100);
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(362,255, CYAN);
	
	//prueba
	setcolor(BLACK);
	//ojo derecho
	line(432.5,250,446,253); Sleep(100);
	line(432.5,250,432,260); Sleep(100);
	
	line(432,260,442,258); Sleep(100);
	line(442,258,446,253); Sleep(100);
	setfillstyle(SOLID_FILL, BLACK);
	floodfill(438,255, BLACK);
	
	//ojo izquierdo
	line(367.5,250,354,253); Sleep(100);
	line(367.5,250,368,260); Sleep(100);
	
	line(368,260,358,258); Sleep(100);
	line(358,258,354,253); Sleep(100);
	setfillstyle(SOLID_FILL, BLACK);
	floodfill(362,255, BLACK);
	
	setcolor(CYAN); 
	
	//ojo derecho
	line(432.5,250,446,253); Sleep(100);
	line(432.5,250,432,260); Sleep(100);
	
	line(432,260,442,258); Sleep(100);
	line(442,258,446,253); Sleep(100);
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(438,255, CYAN);
	
	//ojo izquierdo
	line(367.5,250,354,253); Sleep(100);
	line(367.5,250,368,260); Sleep(100);
	
	line(368,260,358,258); Sleep(100);
	line(358,258,354,253); Sleep(100);
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(362,255, CYAN);
	
	getch();	
	closegraph();
}