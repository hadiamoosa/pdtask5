#include<iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main(){
gotoxy(4,0);
cout<< "      #           ";
gotoxy(4,1); 
cout<< "    #####           ";
gotoxy(4,2);
cout<< "   #     #          "<<endl<<endl;


gotoxy(4,6);
cout<< " #          #      "; 
gotoxy(4,7);   
cout<< "  #   ###  #       ";
gotoxy(4,8);
cout<< "   #      #       "<<endl<<endl;


gotoxy(4,12);
cout<<"     #           ";
gotoxy(4,13);
cout<<"   #####         ";
gotoxy(4,14);
cout<<"  #     #        "<<endl<<endl;

gotoxy(4,18);
cout<< "   ####  ";
gotoxy(4,19);
cout<< "    ##   ";
gotoxy(4,20);
cout<< "   ####  "<<endl<<endl;

gotoxy(4,24);
cout<<"   ####   ";
gotoxy(4,25);
cout<<"  #####   ";
gotoxy(4,26);
cout<<"  ####    "<<endl;
}     

void gotoxy(int x, int y)
{

COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

 }







