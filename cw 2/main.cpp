#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
int main()
{
    int wiersz1=1;
    int wiersz2=3;
    int wiersz3=5;
    int wiersz4=7;
    int x= 40;
    int y =1;
    gotoxy(x,y);
    for( int i = 0; i < wiersz1; ++i )
{
   cout<<"*";
}
gotoxy(x-1,y+1);
for( int j = 0; j < wiersz2; ++j )
{
   cout<<"*";

}
gotoxy(x-2,y+2);
for( int d = 0; d < wiersz3; ++d )
{
   cout<<"*";

}
gotoxy(x-3,y+3);
for( int l = 0; l < wiersz4; ++l )
{
   cout<<"*";

}

}
