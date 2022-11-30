#include <graphics.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>

int main(){
	initwindow(800,600);
	//empiezo desde el centro
		//cuadrado centro
		setcolor(YELLOW);
			line(380,280, 420,280);
				line(380,280, 380,320);
					line(380,320, 420,320);	
						line(420,320, 420,280);
		
		//rombo del primer cuadrado
		setcolor(CYAN);
			line(400,260, 360,300);
				line(360,300, 400,340);
					line(400,340, 440,300);
						line(440,300, 400,260);
		
		//segundo cuadrado 
		setcolor(5); //purpura
			line(360,260, 360,340);
				line(360,340, 440,340);
					line(440,340, 440,260);
						line(440,260, 360,260);
		
		//rombo del segundo cuadrado
		setcolor(CYAN);
			line(400,220, 320,300);
				line(320,300, 400,380);
					line(400,380, 480,300);
						line(480,300, 400,220);
			
		//Tercer cuadrado
		setcolor(BLUE);
			line(320,220, 320,380);			
				line(320,380, 480,380);			
					line(480,380, 480,220);			
						line(480,220, 320,220);
			
	//cuadrados superiores
		//cuadrado superior izquierdo
		setcolor(YELLOW);
			line(260,160,260,220);		
				line(260,220, 320,220);		
					line(320,220, 320,160);		
						line(320,160, 260,160);
				//cuadrado interior
				setcolor(CYAN);
					line(280,180, 280,200);		
						line(280,200, 300,200);		
							line(300,200, 300,180);		
								line(300,180, 280,180);
		//cuadrado superior derecho	
		setcolor(5); //purpura
			line(480,160, 480,220);		
				line(480,220, 540,220);		
					line(540,220, 540,160);		
						line(540,160, 480,160);
				//cuadrado interior
				setcolor(CYAN);
					line(500,180, 500,200);		
						line(500,200, 520,200);		
							line(520,200, 520,180);		
								line(520,180, 500,180);
	//cuadrados inferiores
		//cuadrado inferior izquierdo
		setcolor(BLUE);
			line(260,380, 260,440);		
				line(260,440, 320,440);		
					line(320,440, 320,380);		
						line(320,380, 260,380);
				//cuadrado interior
				setcolor(YELLOW);
					line(280,400, 280,420);		
						line(280,420, 300,420);		
							line(300,420, 300,400);		
								line(300,400, 280,400);
		//cuadrado inferior derecho
		setcolor(CYAN);
			line(480,380, 480,440);		
				line(480,440, 540,440);		
					line(540,440, 540,380);		
						line(540,380, 480,380);
				//cuadrado interior
				setcolor(5); //purpura
					line(500,400, 500,420);		
						line(500,420, 520,420);		
							line(520,420, 520,400);		
								line(520,400, 500,400);
		//rectangulo izquierdo
		setcolor(CYAN);
			line(280,240, 280,360);
				line(280,360, 300,360);
					line(300,360, 300,240);
						line(300,240, 280,240);
			
		//rectangulo inferior (abajo)
		setcolor(BLUE);
			line(340,400, 340,420);
				line(340,420, 460,420);
					line(460,420, 460,400);
						line(460,400, 340,400);
		
		//rectangulo derecho
		setcolor(YELLOW);
			line(500,240, 500,360);
				line(500,360, 520,360);
					line(520,360, 520,240);
						line(520,240, 500,240);
			
		// rectangulo superior(arriba)
		setcolor(5); //purpura
			line(340,180, 340,200);
				line(340,200, 460,200);
					line(460,200, 460,180);
						line(460,180, 340,180);
	getch();
	closegraph();
}