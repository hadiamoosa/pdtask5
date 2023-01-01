#include<iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main(){
gotoxy(4,0);
cout<< "    #     #      #      ###    ######      #                           ";
gotoxy(4,1);
cout<< "    #     #    #   #    #  #     #       #   #                         ";
gotoxy(4,2);
cout<< "    #######   #######   #   #    #      #######                        ";
gotoxy(4,3);
cout<< "    #     #  #       #  #  #     #     #       #                       ";
gotoxy(4,4);
cout<< "    #     # #         # ###    ###### #         #                      ";

}
void gotoxy(int x, int y)
{

COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

 }







