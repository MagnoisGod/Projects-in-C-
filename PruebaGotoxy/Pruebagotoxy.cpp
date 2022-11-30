#include <iostream>
#include <windows.h>
#include <conio.h>
	using namespace std;

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
int main() 
{
	system("color 01");
	
	gotoxy(5,2); cout<<("M"); Sleep(60);
	gotoxy(6,2); cout<<("M");Sleep(95);
	gotoxy(14,2); cout<<("M");Sleep(95);
	gotoxy(15,2); cout<<("M");	Sleep(95);
	gotoxy(17,2); cout<<("E");Sleep(95);
	gotoxy(18,2); cout<<("E");Sleep(95);
	gotoxy(19,2); cout<<("E");Sleep(95);
	gotoxy(20,2); cout<<("E");Sleep(95);
	gotoxy(21,2); cout<<("E");	Sleep(95);
	gotoxy(23,2); cout<<("N");Sleep(95);
	gotoxy(29,2); cout<<("N");	Sleep(95);
	gotoxy(31,2); cout<<("U");Sleep(95);
	gotoxy(37,2); cout<<("U");	Sleep(95);
	// COLUMA 3
	gotoxy(5,3); cout<<("M");Sleep(95);
	gotoxy(7,3); cout<<("M");Sleep(95);
	gotoxy(13,3); cout<<("M");Sleep(95);
	gotoxy(15,3); cout<<("M");	Sleep(95);
	gotoxy(17,3); cout<<("E");	Sleep(95);
	gotoxy(23,3); cout<<("N");Sleep(95);
	gotoxy(25,3); cout<<("N");Sleep(95);
	gotoxy(29,3); cout<<("N");	Sleep(95);
	gotoxy(31,3); cout<<("U");Sleep(95);
	gotoxy(37,3); cout<<("U");	Sleep(95);
	// COLUMNA 4
	gotoxy(5,4); cout<<("M");Sleep(95);
	gotoxy(8,4); cout<<("M");Sleep(95);
	gotoxy(12,4); cout<<("M");Sleep(95);
	gotoxy(15,4); cout<<("M");Sleep(95);
	gotoxy(17,4); cout<<("E");Sleep(95);
	gotoxy(18,4); cout<<("E");Sleep(95);
	gotoxy(19,4); cout<<("E");Sleep(95);
	gotoxy(20,4); cout<<("E");Sleep(95);
	gotoxy(21,4); cout<<("E");	Sleep(95);
	gotoxy(23,4); cout<<("N");Sleep(95);
	gotoxy(26,4); cout<<("N");Sleep(95);
	gotoxy(29,4); cout<<("N");	Sleep(95);
	gotoxy(31,4); cout<<("U");Sleep(95);
	gotoxy(37,4); cout<<("U");Sleep(95);
	//COLUMNA 5
	gotoxy(5,5); cout<<("M");Sleep(95);
	gotoxy(9,5); cout<<("M");Sleep(95);
	gotoxy(11,5); cout<<("M");Sleep(95);
	gotoxy(15,5); cout<<("M");	Sleep(95);
	gotoxy(17,5); cout<<("E");Sleep(95);
	gotoxy(23,5); cout<<("N");Sleep(95);
	gotoxy(27,5); cout<<("N");Sleep(95);
	gotoxy(29,5); cout<<("N");	Sleep(95);
	gotoxy(31,5); cout<<("U");Sleep(95);
	gotoxy(37,5); cout<<("U");Sleep(95);
	// COLUMNA 6
	gotoxy(5,6); cout<<("M");Sleep(95);
	gotoxy(10,6); cout<<("M");Sleep(95);
	gotoxy(15,6); cout<<("M");	Sleep(95);
	gotoxy(17,6); cout<<("E");Sleep(95);
	gotoxy(18,6); cout<<("E");Sleep(95);
	gotoxy(19,6); cout<<("E");Sleep(95);
	gotoxy(20,6); cout<<("E");Sleep(95);
	gotoxy(21,6); cout<<("E");	Sleep(95);
	gotoxy(23,6); cout<<("N");Sleep(95);
	gotoxy(29,6); cout<<("N");	Sleep(95);
	gotoxy(31,6); cout<<("U");Sleep(95);
	gotoxy(32,6); cout<<("U");Sleep(95);
	gotoxy(33,6); cout<<("U");Sleep(95);
	gotoxy(34,6); cout<<("U");Sleep(95);
	gotoxy(35,6); cout<<("U");Sleep(95);
	gotoxy(36,6); cout<<("U");Sleep(95);
	gotoxy(37,6); cout<<("U");Sleep(95);
	
	Beep(1123,500);
	cout<<"\n\n				     C  A  R  G  A  N  D  O \n";Sleep(95);
	gotoxy(40, 9); cout<<"[";Sleep(95);
	gotoxy(41, 9); cout<<"*";Sleep(95);
	Beep(1123,500);
	gotoxy(42, 9); cout<<"*";Sleep(95);
	gotoxy(43, 9); cout<<"*";Sleep(95);
	Beep(1123,500);
	gotoxy(44, 9); cout<<"*";Sleep(95);
	gotoxy(45, 9); cout<<"*";Sleep(95);
	Beep(1100,900);
	gotoxy(46, 9); cout<<"*";Sleep(95);
	gotoxy(47, 9); cout<<"*";Sleep(95);
	Beep(1123,500);
	gotoxy(48, 9); cout<<"*";Sleep(95);
	gotoxy(49, 9); cout<<"*";Sleep(95);
	Beep(1123,500);
	gotoxy(50, 9); cout<<"*";Sleep(95);
	gotoxy(51, 9); cout<<"*";Sleep(95);
	Beep(1123,500);
	gotoxy(52, 9); cout<<"*";Sleep(95);
	gotoxy(53, 9); cout<<"*";Sleep(95);
	gotoxy(54, 9); cout<<"]";Sleep(95);
	Beep(1100,900);
		
		return 0;
}