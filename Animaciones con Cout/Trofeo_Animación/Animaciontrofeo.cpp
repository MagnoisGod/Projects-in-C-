#include <iostream>
#include <conio.h>
#include <windows.h>
#define color SetConsoleTextAttribute
 using namespace std;
int main(int argc, char** argv) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color(hConsole, 6);
	Beep(500,600);
	cout<<"         __             __       \n";	
	Beep(500,600);
	cout<<"        |  |___________|  |      \n";	
	Beep(500,600);
	cout<<"    ____|        _        |____  \n";
	Beep(500,600);	
	cout<<"   |    |      _| |       |    | \n";
	Beep(500,600);	
	cout<<"   |    |     |_  |       |    | \n";
	Beep(500,600);
	cout<<"   |_   |       | |       |   _| \n";
	Beep(500,600);
	cout<<"     |__|       |_|       |__|   \n";
	Beep(500,600);	
	cout<<"        |_               _|      \n";
	Beep(500,600);		
	cout<<"          |_           _|        \n";
	Beep(500,600);	
	cout<<"            |_       _|          \n";
	Beep(500,600);	
	cout<<"              |_   _|            \n";
	Beep(500,600);	
	cout<<"                | |              \n";
	Beep(500,600);	
	cout<<"                | |              \n";
	Beep(500,600);	
	cout<<"                | |              \n";
	Beep(500,600);	
	cout<<"                | |              \n";
	Beep(500,600);	
	cout<<"           _____| |_____         \n";
	Beep(500,600);
	cout<<"          |_____________|        \n";
	return 0;
}