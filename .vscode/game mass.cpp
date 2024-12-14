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

void vivodscore(string score)
{
    cout <<endl<<endl<< "Score: " << score ;
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
    string score="0";

    for(i=0;i<10;i++)
    {
        int g=rand()%10,h=rand()%10;
        if(a[g][h]!='x')
        a[g][h]='Q';
    }

    
    while(true)
    {
        if(_kbhit())
        {
            vivod(a);
            vivodscore(score);
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
                 vivodscore(score);
                }
                break;
            }
            case 'w':
            {
                if(y>0)
                {
                a[y][x]='o';
                y--;
                a[y][x]='x';
                 vivod(a);
                 vivodscore(score);
                }
                break;
            }
            case 'a':
            {
                if(x>0)
                {
                a[y][x]='o';
                x--;
                a[y][x]='x';
                 vivod(a);
                 vivodscore(score);
                }
                break;
            }
            case 'd':
            {
                if(x<9)
                {
                a[y][x]='o';
                x++;
                a[y][x]='x';
                 vivod(a);
                 vivodscore(score);
                }
                break;
            }
            case 'q':
                return 0;



            }
        }
    }
}