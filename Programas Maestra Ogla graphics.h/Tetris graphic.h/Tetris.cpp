#include <graphics.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>

int main(){
	initwindow(800,630);
	setcolor(GREEN);
		rectangle(30,0, 80,615); //Vertical Izquierda
			rectangle(450,0, 500,615); // Enmedio	
	 setfillstyle(SOLID_FILL, GREEN);	
	  	floodfill(75,250, GREEN); //Vertical Izquierda
	  	Sleep(100);
			floodfill(475,250, GREEN); // Enmedio
			Sleep(100);
	
//	PARTE DERECHA PANEL
//	SCORE
setcolor(GREEN);
	 line(500,50, 800,50); Sleep(100);
	 line(500,100, 800,100);Sleep(100);
	 line(500,150, 800,150);Sleep(100);
	 	setcolor(GREEN); 
	 		rectangle(525,30, 775,75);
	 			setfillstyle(SOLID_FILL, GREEN);	
	  			floodfill(650,40, GREEN); Sleep(100);
	  			floodfill(650,60, GREEN); Sleep(100);
	  				setcolor(GREEN);
	  				settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				  	outtextxy(545,40, "S C O R E"); Sleep(100);
				  	// Puntos que lleva
				  		setcolor(GREEN);
	  					settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				  			outtextxy(630,110, "0"); Sleep(100);
				  			
	// LEVEL AND LINES
	setcolor(GREEN);
		rectangle(520,200, 775,275);
		setcolor(GREEN);
	  		settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(540,210, "L E V E L"); Sleep(100);
				outtextxy(700,240, "1"); Sleep(100); Sleep(100);
		rectangle(520,325, 775,400);
		setcolor(GREEN);
	  		settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(540,335, "L I N E S"); Sleep(100);
				outtextxy(700,365, "0"); Sleep(100);
		
//	FiguraSiguiente
		rectangle(520,450, 770,580); //Rectangulo exterior
		  Sleep(100);
		setcolor(WHITE);
		rectangle(605,485, 675,555);
		setfillstyle(SOLID_FILL, GREEN);	
	  	floodfill(640,520, WHITE);
		  Sleep(100); 
	  	
		//Figuras moviendose
			// Figura 1 CUADRADO
				//movimiento 1
				setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  			//movimiento 4
	  			setcolor(WHITE);
	  				rectangle(152.5,345, 227.5,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(192.5,380, WHITE);
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,345, 300,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,380, BLACK);
	  					//movimiento 5
	  					setcolor(WHITE);
	  						rectangle(80,345,155,415);
	  						setfillstyle(SOLID_FILL, GREEN);	
	  						floodfill(120,380, WHITE);
	  					Sleep(300);
	  					setcolor(BLACK);
	  						rectangle(152.5,345, 227.5,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(192.5,380, BLACK);
	  							//movimiento 6
	  							setcolor(WHITE);
	  								rectangle(80,345,155,415);
	  								setfillstyle(SOLID_FILL, GREEN);	
	  								floodfill(120,380, WHITE);
	  							Sleep(300);
	  							setcolor(BLACK);
	  								rectangle(152.5,345, 227.5,415);
									setfillstyle(SOLID_FILL, BLACK);	
	  								floodfill(192.5,380, BLACK);
	  									//movimiento 7
	  									setcolor(WHITE);
	  										rectangle(80,445,155,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(120,480, WHITE);
	  									Sleep(300);
	  									setcolor(BLACK);
	  										rectangle(80,345, 155,415);
											setfillstyle(SOLID_FILL, BLACK);	
	  										floodfill(120,380, BLACK);
	  										//movimiento 8
	  										setcolor(WHITE);
	  											rectangle(80,545,155,615);
	  											setfillstyle(SOLID_FILL, GREEN);	
	  											floodfill(120,580, WHITE);
	  										Sleep(300);
	  										setcolor(BLACK);
	  												rectangle(80,445, 155,515);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(120,480, BLACK);
	  		//FIGURA 2 CUADRADO2
	  		//movimiento 1
				setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  			//movimiento 4
	  			setcolor(WHITE);
	  				rectangle(300,345, 375,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(340,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,345, 300,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,380, BLACK);
	  						
	  						//movimiento 5
	  						setcolor(WHITE);
	  							rectangle(375,345, 450,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(415,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(300,345, 375,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(340,380, BLACK);
	  									
	  									//movimiento 6
	  									setcolor(WHITE);
	  										rectangle(375,445, 450,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(415,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(375,345, 450,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(415,380, BLACK);
	  												
	  												//movimiento 7
	  												setcolor(WHITE);
	  													rectangle(375,545, 450,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(415,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(375,445, 450,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(415,480, BLACK);
	  		//FIGURA 3 CUADRADO3
	  		//movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  						
	  						//movimiento 4
	  						setcolor(WHITE);
	  							rectangle(300,345, 375,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(340,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);
	  									
	  									//movimiento 5
	  									setcolor(WHITE);
	  										rectangle(300,445, 370,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(340,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(300,345, 375,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(340,380, BLACK);
	  												
	  												//movimiento 6
	  												setcolor(WHITE);
	  													rectangle(300,545, 375,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(340,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(300,445, 370,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(340,480, BLACK);
	  		//FIGURA 4 CUADRADO4
			  //movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
							  
							  //movimiento 4
							  setcolor(WHITE);
	  							rectangle(225,445, 300,515);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(265,480, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);	
										  
										//movimiento 5
										setcolor(WHITE);
	  										rectangle(225,545, 300,615);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(265,580, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(225,445, 300,515);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(265,480, BLACK);

			//FIGURA 5 CUADRADO5
			//movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
//	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
//	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
//							  
//							  //movimiento 4
							  setcolor(WHITE);
	  							rectangle(152.5,345, 227.5,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(192.5,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);
//										  
//										  //movimiento 5
										  setcolor(WHITE);
	  										rectangle(152.5,445, 227.5,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(192.5,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(152.5,345, 227.5,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(192.5,380, BLACK);
//													  
//													  //movimiento 6
													  setcolor(WHITE);
	  													rectangle(152.5,545, 227.5,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(192.5,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(152.5,445, 227.5,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(192.5,480, BLACK);
			//Puntos nuevos
			setcolor(GREEN);
	  			settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(625,110, "500"); Sleep(100);	
			//Line nueva
				setcolor(GREEN);
	  		settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(540,335, "L I N E S"); Sleep(100);
				outtextxy(700,365, "1"); Sleep(100);
			//desaparecen los cuadrados al formar la fila
			//1
			setcolor(BLACK);
	  					rectangle(80,545, 155,615);
						setfillstyle(SOLID_FILL, BLACK);	
						floodfill(120,580, BLACK);
						
						//2						
	  					setcolor(BLACK);
	  								rectangle(375,545, 450,615);
									setfillstyle(SOLID_FILL, BLACK);	
	  								floodfill(415,580, BLACK);
	  								
	  								//3
	  								setcolor(BLACK);
	  											rectangle(300,545, 375,615);
												setfillstyle(SOLID_FILL, BLACK);	
	  											floodfill(340,580, BLACK);
	  											
	  											//4	  											
	  									        setcolor(BLACK);
	  														rectangle(225,545, 300,615);
															setfillstyle(SOLID_FILL, BLACK);	
	  														floodfill(265,580, BLACK);
	  														
	  														//5
	  														setcolor(BLACK);
	  																	rectangle(152.5,545, 227.5,615);
																		setfillstyle(SOLID_FILL, BLACK);	
	  																	floodfill(192.5,580, BLACK);
	  		//programa repetido Level 1
	  		// Figura 5 CUADRADO
				//movimiento 1
				setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  			//movimiento 4
	  			setcolor(WHITE);
	  				rectangle(152.5,345, 227.5,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(192.5,380, WHITE);
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,345, 300,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,380, BLACK);
	  					//movimiento 5
	  					setcolor(WHITE);
	  						rectangle(80,345,155,415);
	  						setfillstyle(SOLID_FILL, GREEN);	
	  						floodfill(120,380, WHITE);
	  					Sleep(300);
	  					setcolor(BLACK);
	  						rectangle(152.5,345, 227.5,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(192.5,380, BLACK);
	  							//movimiento 6
	  							setcolor(WHITE);
	  								rectangle(80,345,155,415);
	  								setfillstyle(SOLID_FILL, GREEN);	
	  								floodfill(120,380, WHITE);
	  							Sleep(300);
	  							setcolor(BLACK);
	  								rectangle(152.5,345, 227.5,415);
									setfillstyle(SOLID_FILL, BLACK);	
	  								floodfill(192.5,380, BLACK);
	  									//movimiento 7
	  									setcolor(WHITE);
	  										rectangle(80,445,155,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(120,480, WHITE);
	  									Sleep(300);
	  									setcolor(BLACK);
	  										rectangle(80,345, 155,415);
											setfillstyle(SOLID_FILL, BLACK);	
	  										floodfill(120,380, BLACK);
	  										//movimiento 8
	  										setcolor(WHITE);
	  											rectangle(80,545,155,615);
	  											setfillstyle(SOLID_FILL, GREEN);	
	  											floodfill(120,580, WHITE);
	  										Sleep(300);
	  										setcolor(BLACK);
	  												rectangle(80,445, 155,515);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(120,480, BLACK);
	  		//FIGURA 3 CUADRADO3
	  		//movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  						
	  						//movimiento 4
	  						setcolor(WHITE);
	  							rectangle(300,345, 375,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(340,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);
	  									
	  									//movimiento 5
	  									setcolor(WHITE);
	  										rectangle(300,445, 370,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(340,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(300,345, 375,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(340,380, BLACK);
	  												
	  												//movimiento 6
	  												setcolor(WHITE);
	  													rectangle(300,545, 375,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(340,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(300,445, 370,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(340,480, BLACK);										
	  		//FIGURA 4 CUADRADO2
	  		//movimiento 1
				setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  			//movimiento 4
	  			setcolor(WHITE);
	  				rectangle(300,345, 375,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(340,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,345, 300,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,380, BLACK);
	  						
	  						//movimiento 5
	  						setcolor(WHITE);
	  							rectangle(375,345, 450,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(415,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(300,345, 375,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(340,380, BLACK);
	  									
	  									//movimiento 6
	  									setcolor(WHITE);
	  										rectangle(375,445, 450,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(415,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(375,345, 450,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(415,380, BLACK);
	  												
	  												//movimiento 7
	  												setcolor(WHITE);
	  													rectangle(375,545, 450,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(415,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(375,445, 450,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(415,480, BLACK);
	  		
	  		//movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
//	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
//	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
//							  
//							  //movimiento 4
							  setcolor(WHITE);
	  							rectangle(152.5,345, 227.5,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(192.5,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);
//										  
//										  //movimiento 5
										  setcolor(WHITE);
	  										rectangle(152.5,445, 227.5,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(192.5,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(152.5,345, 227.5,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(192.5,380, BLACK);
//													  
//													  //movimiento 6
													  setcolor(WHITE);
	  													rectangle(152.5,545, 227.5,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(192.5,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(152.5,445, 227.5,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(192.5,480, BLACK);
	  		//FIGURA 2 CUADRADO4
			  //movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
							  
							  //movimiento 4
							  setcolor(WHITE);
	  							rectangle(225,445, 300,515);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(265,480, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);	
										  
										//movimiento 5
										setcolor(WHITE);
	  										rectangle(225,545, 300,615);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(265,580, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(225,445, 300,515);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(265,480, BLACK);

			
			//Puntos nuevos
			setcolor(GREEN);
	  			settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(625,110, "1000"); Sleep(100);	
			//Line nueva
				setcolor(GREEN);
	  		settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(540,335, "L I N E S"); Sleep(100);
				outtextxy(700,365, "2"); Sleep(100);
			//desaparecen los cuadrados al formar la fila
			//1
			setcolor(BLACK);
	  					rectangle(80,545, 155,615);
						setfillstyle(SOLID_FILL, BLACK);	
						floodfill(120,580, BLACK);
						
						//2						
	  					setcolor(BLACK);
	  								rectangle(375,545, 450,615);
									setfillstyle(SOLID_FILL, BLACK);	
	  								floodfill(415,580, BLACK);
	  								
	  								//3
	  								setcolor(BLACK);
	  											rectangle(300,545, 375,615);
												setfillstyle(SOLID_FILL, BLACK);	
	  											floodfill(340,580, BLACK);
	  											
	  											//4	  											
	  									        setcolor(BLACK);
	  														rectangle(225,545, 300,615);
															setfillstyle(SOLID_FILL, BLACK);	
	  														floodfill(265,580, BLACK);
	  														
	  														//5
	  														setcolor(BLACK);
	  																	rectangle(152.5,545, 227.5,615);
																		setfillstyle(SOLID_FILL, BLACK);	
	  																	floodfill(192.5,580, BLACK);
	  		//termina programa repetido level 1

															  									   			
//	 settextstyle(1, HORIZ_DIR, 5);
//	  outtextxy(350,525, "T E T R I S");

	//
	//
	//
	//                                  Programa repetido 2 veces
	//
	//
	//
	
	//Figuras moviendose
			// Figura 1 CUADRADO
				//movimiento 1
				setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  			//movimiento 4
	  			setcolor(WHITE);
	  				rectangle(152.5,345, 227.5,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(192.5,380, WHITE);
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,345, 300,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,380, BLACK);
	  					//movimiento 5
	  					setcolor(WHITE);
	  						rectangle(80,345,155,415);
	  						setfillstyle(SOLID_FILL, GREEN);	
	  						floodfill(120,380, WHITE);
	  					Sleep(300);
	  					setcolor(BLACK);
	  						rectangle(152.5,345, 227.5,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(192.5,380, BLACK);
	  							//movimiento 6
	  							setcolor(WHITE);
	  								rectangle(80,345,155,415);
	  								setfillstyle(SOLID_FILL, GREEN);	
	  								floodfill(120,380, WHITE);
	  							Sleep(300);
	  							setcolor(BLACK);
	  								rectangle(152.5,345, 227.5,415);
									setfillstyle(SOLID_FILL, BLACK);	
	  								floodfill(192.5,380, BLACK);
	  									//movimiento 7
	  									setcolor(WHITE);
	  										rectangle(80,445,155,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(120,480, WHITE);
	  									Sleep(300);
	  									setcolor(BLACK);
	  										rectangle(80,345, 155,415);
											setfillstyle(SOLID_FILL, BLACK);	
	  										floodfill(120,380, BLACK);
	  										//movimiento 8
	  										setcolor(WHITE);
	  											rectangle(80,545,155,615);
	  											setfillstyle(SOLID_FILL, GREEN);	
	  											floodfill(120,580, WHITE);
	  										Sleep(300);
	  										setcolor(BLACK);
	  												rectangle(80,445, 155,515);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(120,480, BLACK);
	  		//FIGURA 2 CUADRADO2
	  		//movimiento 1
				setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  			//movimiento 4
	  			setcolor(WHITE);
	  				rectangle(300,345, 375,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(340,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,345, 300,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,380, BLACK);
	  						
	  						//movimiento 5
	  						setcolor(WHITE);
	  							rectangle(375,345, 450,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(415,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(300,345, 375,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(340,380, BLACK);
	  									
	  									//movimiento 6
	  									setcolor(WHITE);
	  										rectangle(375,445, 450,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(415,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(375,345, 450,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(415,380, BLACK);
	  												
	  												//movimiento 7
	  												setcolor(WHITE);
	  													rectangle(375,545, 450,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(415,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(375,445, 450,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(415,480, BLACK);
	  		//FIGURA 3 CUADRADO3
	  		//movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  						
	  						//movimiento 4
	  						setcolor(WHITE);
	  							rectangle(300,345, 375,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(340,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);
	  									
	  									//movimiento 5
	  									setcolor(WHITE);
	  										rectangle(300,445, 370,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(340,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(300,345, 375,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(340,380, BLACK);
	  												
	  												//movimiento 6
	  												setcolor(WHITE);
	  													rectangle(300,545, 375,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(340,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(300,445, 370,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(340,480, BLACK);
	  															// Figura 1 CUADRADO
				//movimiento 1
				setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  			//movimiento 4
	  			setcolor(WHITE);
	  				rectangle(152.5,345, 227.5,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(192.5,380, WHITE);
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,345, 300,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,380, BLACK);
	  					//movimiento 5
	  					setcolor(WHITE);
	  						rectangle(80,345,155,415);
	  						setfillstyle(SOLID_FILL, GREEN);	
	  						floodfill(120,380, WHITE);
	  					Sleep(300);
	  					setcolor(BLACK);
	  						rectangle(152.5,345, 227.5,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(192.5,380, BLACK);
	  							//movimiento 6
	  							setcolor(WHITE);
	  								rectangle(80,345,155,415);
	  								setfillstyle(SOLID_FILL, GREEN);	
	  								floodfill(120,380, WHITE);
	  							Sleep(300);
	  							setcolor(BLACK);
	  								rectangle(152.5,345, 227.5,415);
									setfillstyle(SOLID_FILL, BLACK);	
	  								floodfill(192.5,380, BLACK);
	  									//movimiento 7
	  									setcolor(WHITE);
	  										rectangle(80,445,155,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(120,480, WHITE);
	  									Sleep(300);
	  									setcolor(BLACK);
	  										rectangle(80,345, 155,415);
											setfillstyle(SOLID_FILL, BLACK);	
	  										floodfill(120,380, BLACK);
	  										//movimiento 8
	  										setcolor(WHITE);
	  											rectangle(80,545,155,615);
	  											setfillstyle(SOLID_FILL, GREEN);	
	  											floodfill(120,580, WHITE);
	  										Sleep(300);
	  										setcolor(BLACK);
	  												rectangle(80,445, 155,515);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(120,480, BLACK);
	  		//FIGURA 4 CUADRADO4
			  //movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
							  
							  //movimiento 4
							  setcolor(WHITE);
	  							rectangle(225,445, 300,515);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(265,480, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);	
										  
										//movimiento 5
										setcolor(WHITE);
	  										rectangle(225,545, 300,615);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(265,580, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(225,445, 300,515);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(265,480, BLACK);

			//FIGURA 5 CUADRADO5
			//movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
//	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
//	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
//							  
//							  //movimiento 4
							  setcolor(WHITE);
	  							rectangle(152.5,345, 227.5,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(192.5,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);
//										  
//										  //movimiento 5
										  setcolor(WHITE);
	  										rectangle(152.5,445, 227.5,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(192.5,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(152.5,345, 227.5,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(192.5,380, BLACK);
//													  
//													  //movimiento 6
													  setcolor(WHITE);
	  													rectangle(152.5,545, 227.5,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(192.5,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(152.5,445, 227.5,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(192.5,480, BLACK);
	  		//Puntos nuevos
			setcolor(GREEN);
	  			settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(625,110, "1500"); Sleep(100);	
			//Line nueva
				setcolor(GREEN);
	  		settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(540,335, "L I N E S"); Sleep(100);
				outtextxy(700,365, "3"); Sleep(100);
			//desaparecen los cuadrados al formar la fila
			//1
			setcolor(BLACK);
	  					rectangle(80,545, 155,615);
						setfillstyle(SOLID_FILL, BLACK);	
						floodfill(120,580, BLACK);
						
						//2						
	  					setcolor(BLACK);
	  								rectangle(375,545, 450,615);
									setfillstyle(SOLID_FILL, BLACK);	
	  								floodfill(415,580, BLACK);
	  								
	  								//3
	  								setcolor(BLACK);
	  											rectangle(300,545, 375,615);
												setfillstyle(SOLID_FILL, BLACK);	
	  											floodfill(340,580, BLACK);
	  											
	  											//4	  											
	  									        setcolor(BLACK);
	  														rectangle(225,545, 300,615);
															setfillstyle(SOLID_FILL, BLACK);	
	  														floodfill(265,580, BLACK);
	  														
	  														//5
	  														setcolor(BLACK);
	  																	rectangle(152.5,545, 227.5,615);
																		setfillstyle(SOLID_FILL, BLACK);	
	  																	floodfill(192.5,580, BLACK);
	  		//programa repetido Level 1
	  		// Figura 5 CUADRADO
				//movimiento 1
				setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  			//movimiento 4
	  			setcolor(WHITE);
	  				rectangle(152.5,345, 227.5,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(192.5,380, WHITE);
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,345, 300,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,380, BLACK);
	  					//movimiento 5
	  					setcolor(WHITE);
	  						rectangle(80,345,155,415);
	  						setfillstyle(SOLID_FILL, GREEN);	
	  						floodfill(120,380, WHITE);
	  					Sleep(300);
	  					setcolor(BLACK);
	  						rectangle(152.5,345, 227.5,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(192.5,380, BLACK);
	  							//movimiento 6
	  							setcolor(WHITE);
	  								rectangle(80,345,155,415);
	  								setfillstyle(SOLID_FILL, GREEN);	
	  								floodfill(120,380, WHITE);
	  							Sleep(300);
	  							setcolor(BLACK);
	  								rectangle(152.5,345, 227.5,415);
									setfillstyle(SOLID_FILL, BLACK);	
	  								floodfill(192.5,380, BLACK);
	  									//movimiento 7
	  									setcolor(WHITE);
	  										rectangle(80,445,155,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(120,480, WHITE);
	  									Sleep(300);
	  									setcolor(BLACK);
	  										rectangle(80,345, 155,415);
											setfillstyle(SOLID_FILL, BLACK);	
	  										floodfill(120,380, BLACK);
	  										//movimiento 8
	  										setcolor(WHITE);
	  											rectangle(80,545,155,615);
	  											setfillstyle(SOLID_FILL, GREEN);	
	  											floodfill(120,580, WHITE);
	  										Sleep(300);
	  										setcolor(BLACK);
	  												rectangle(80,445, 155,515);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(120,480, BLACK);
	  		//FIGURA 3 CUADRADO3
	  		//movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  						
	  						//movimiento 4
	  						setcolor(WHITE);
	  							rectangle(300,345, 375,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(340,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);
	  									
	  									//movimiento 5
	  									setcolor(WHITE);
	  										rectangle(300,445, 370,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(340,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(300,345, 375,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(340,380, BLACK);
	  												
	  												//movimiento 6
	  												setcolor(WHITE);
	  													rectangle(300,545, 375,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(340,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(300,445, 370,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(340,480, BLACK);										
	  		//FIGURA 4 CUADRADO2
	  		//movimiento 1
				setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
	  			//movimiento 4
	  			setcolor(WHITE);
	  				rectangle(300,345, 375,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(340,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,345, 300,415);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,380, BLACK);
	  						
	  						//movimiento 5
	  						setcolor(WHITE);
	  							rectangle(375,345, 450,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(415,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(300,345, 375,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(340,380, BLACK);
	  									
	  									//movimiento 6
	  									setcolor(WHITE);
	  										rectangle(375,445, 450,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(415,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(375,345, 450,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(415,380, BLACK);
	  												
	  												//movimiento 7
	  												setcolor(WHITE);
	  													rectangle(375,545, 450,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(415,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(375,445, 450,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(415,480, BLACK);
	  		
	  		//movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
//	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
//	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
//							  
//							  //movimiento 4
							  setcolor(WHITE);
	  							rectangle(152.5,345, 227.5,415);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(192.5,380, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);
//										  
//										  //movimiento 5
										  setcolor(WHITE);
	  										rectangle(152.5,445, 227.5,515);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(192.5,480, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(152.5,345, 227.5,415);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(192.5,380, BLACK);
//													  
//													  //movimiento 6
													  setcolor(WHITE);
	  													rectangle(152.5,545, 227.5,615);
	  													setfillstyle(SOLID_FILL, GREEN);	
	  													floodfill(192.5,580, WHITE);	
	  												Sleep(300);
	  												setcolor(BLACK);
	  															rectangle(152.5,445, 227.5,515);
																setfillstyle(SOLID_FILL, BLACK);	
	  															floodfill(192.5,480, BLACK);
	  		//FIGURA 2 CUADRADO4
			  //movimiento 1
	  		setcolor(WHITE);
					rectangle(225,45, 300,115);
					setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,80, WHITE);
	  	  		Sleep(300);
						rectangle(225,145, 300,215);
						setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,180, WHITE);
	  				Sleep(300);
	  			setcolor(BLACK);
							rectangle(225,45, 300,115);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,80, BLACK);
	  				//movimiento 2
	  				setcolor(WHITE);
	  					rectangle(225,245, 300,315);
	  					setfillstyle(SOLID_FILL, GREEN);	
	  					floodfill(265,280, WHITE);
	  				Sleep(300);
	  				setcolor(BLACK);
	  							rectangle(225,145, 300,215);
								setfillstyle(SOLID_FILL, BLACK);	
	  							floodfill(265,180, BLACK);
	  				//movimiento 3
	  			setcolor(WHITE);
	  				rectangle(225,345, 300,415);
	  				setfillstyle(SOLID_FILL, GREEN);	
	  				floodfill(265,380, WHITE);	
	  			Sleep(300);
	  			setcolor(BLACK);
	  						rectangle(225,245, 300,315);
							setfillstyle(SOLID_FILL, BLACK);	
	  						floodfill(265,280, BLACK);
							  
							  //movimiento 4
							  setcolor(WHITE);
	  							rectangle(225,445, 300,515);
	  							setfillstyle(SOLID_FILL, GREEN);	
	  							floodfill(265,480, WHITE);	
	  						Sleep(300);
	  						setcolor(BLACK);
	  									rectangle(225,345, 300,415);
										setfillstyle(SOLID_FILL, BLACK);	
	  									floodfill(265,380, BLACK);	
										  
										//movimiento 5
										setcolor(WHITE);
	  										rectangle(225,545, 300,615);
	  										setfillstyle(SOLID_FILL, GREEN);	
	  										floodfill(265,580, WHITE);	
	  									Sleep(300);
	  									setcolor(BLACK);
	  												rectangle(225,445, 300,515);
													setfillstyle(SOLID_FILL, BLACK);	
	  												floodfill(265,480, BLACK);

			
			//Puntos nuevos
			setcolor(GREEN);
	  			settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(625,110, "2000"); Sleep(100);	
			//Line nueva
				setcolor(GREEN);
	  		settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(540,335, "L I N E S"); Sleep(100);
				outtextxy(700,365, "4"); Sleep(100);
			//desaparecen los cuadrados al formar la fila
			//1
			setcolor(BLACK);
	  					rectangle(80,545, 155,615);
						setfillstyle(SOLID_FILL, BLACK);	
						floodfill(120,580, BLACK);
						
						//2						
	  					setcolor(BLACK);
	  								rectangle(375,545, 450,615);
									setfillstyle(SOLID_FILL, BLACK);	
	  								floodfill(415,580, BLACK);
	  								
	  								//3
	  								setcolor(BLACK);
	  											rectangle(300,545, 375,615);
												setfillstyle(SOLID_FILL, BLACK);	
	  											floodfill(340,580, BLACK);
	  											
	  											//4	  											
	  									        setcolor(BLACK);
	  														rectangle(225,545, 300,615);
															setfillstyle(SOLID_FILL, BLACK);	
	  														floodfill(265,580, BLACK);
	  														
	  														//5
	  														setcolor(BLACK);
	  																	rectangle(152.5,545, 227.5,615);
																		setfillstyle(SOLID_FILL, BLACK);	
	  																	floodfill(192.5,580, BLACK);
	  		//termina programa repetido level 1
	  		//Puntos nuevos
			setcolor(GREEN);
	  			settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(625,110, "0"); Sleep(100);	
			//Line nueva
				setcolor(GREEN);
	  		settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);	  			
				outtextxy(540,335, "L I N E S"); Sleep(100);
				outtextxy(700,365, "0"); Sleep(100);
	getch();
	closegraph();
	
	return 0;
}