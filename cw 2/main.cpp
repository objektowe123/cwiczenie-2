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
    int n=1;
    int m=3;
    int k=5;
    int p=7;
    int x= 40;
    int y =1;
    gotoxy(x,y);
    for( int i = 0; i < n; ++i )
{
   cout<<"*";
}
gotoxy(x-1,y+1);
for( int j = 0; j < m; ++j )
{
   cout<<"*";

}
gotoxy(x-2,y+2);
for( int d = 0; d < k; ++d )
{
   cout<<"*";

}
gotoxy(x-3,y+3);
for( int l = 0; l < p; ++l )
{
   cout<<"*";

}

}
