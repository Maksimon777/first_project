#include <iostream>
#include <math.h>
#include <conio.h>
#include <ctime>
using namespace std;

void vivod(char a[10][10])
{
    system("CLS");
    for(int i=0;i<10;i++)
    {
        cout<<endl;
    for(int j=0;j<10;j++)
    
        cout << a[i][j]<<" ";
    }
}

int main()
{
    srand(time(NULL));
    char a[10][10],i,j;
    for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    a[i][j]='o';
    int x=0,y=0;
    a[y][x]='x';


    for(i=0;i<10;i++)
    {
        int g=rand()%10,h=rand()%10;
        a[g][h]='Q';
    }

    
    while(true)
    {
        
        if(_kbhit())
        {
            vivod(a);
            char simv = _getch();
            switch (simv)
            {

            case 's':
            {
                if(y<9)
                {
                a[y][x]='o';
                y++;
                a[y][x]='x';
                 vivod(a);
                }
                break;
            }
            case 'w':
            {
                
                a[y][x]='o';
                y--;
                a[y][x]='x';
                 vivod(a);
                if(y<9)
                break;
            }
            case 'a':
            {
                a[y][x]='o';
                x--;
                a[y][x]='x';
                 vivod(a);
                 if(x<9)
                break;
            }
            case 'd':
            {
                if(x<9)
                a[y][x]='o';
                x++;
                a[y][x]='x';
                 vivod(a);
                break;
            }
            case 'q':
                return 0;



            }
        }
    }
}