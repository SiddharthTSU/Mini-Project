#include<iostream>
#include<fstream>
#include <string>
#include <windows.h>
using namespace std;
void nextline(){
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;}
void ClearScreen()
	{
	COORD cursorPosition;
	cursorPosition.X = 0;
	cursorPosition.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
	}
void introread()
{  string introd;
    ifstream dispi("intro.txt");

         for(int i= 0;i<9;i++){   getline(dispi,introd,'k');
    cout<<introd;
    Sleep(600);
    ClearScreen();}
    system("CLS");
   getline(dispi,introd,'k');
         cout<<endl<<endl<<introd;
         Sleep(600);         ClearScreen();
         getline(dispi,introd,'k');
         nextline();
         cout<<introd;
         Sleep(600);         ClearScreen();
          getline(dispi,introd,'k');
          nextline(); nextline();
        cout<<introd;
         Sleep(600);         ClearScreen();
            dispi.close(); }
void intro(){
// {    ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
     system("pause");
      ClearScreen();
    introread();
    system("CLS");
  
}
