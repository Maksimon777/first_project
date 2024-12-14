#include <iostream>
#include <cmath>
#include <conio.h>
#include <ctime>
#include <windows.h>
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void setColor(int color)
{
    SetConsoleTextAttribute(hConsole, color);
}


void vivod(char a[10][10])
{
    system("CLS");
    for(int i=0;i<10;i++)
    {
        cout<<endl;
        for(int j=0;j<10;j++)
        {
            switch(a[i][j])
            {
                case 'o': 
                {
                    setColor(15);
                    break;
                }
                case 'Q':
                {
                    setColor(12);
                    break;
                }
                case 'x':
                {
                    setColor(11);
                    break;
                }
            }
            cout << a[i][j]<<" ";
        }
    }
}


void vivodscore(int score)
{
    setColor(10);  // Голубой цвет для счета
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
    int score=0;


    int Q;
    cout << "Enter the number of 'Q' cells: ";
    cin>>Q;
    while(true)
    {
    if (Q>99)
    {
        cout << "Enter the number of 'Q' cells: ";
    cin>>Q;
    }
    else break;
    }


    for(i=0;i<Q;i++)
    {
        int g=rand()%10,h=rand()%10;
        if(a[g][h]!='x' && a[g][h]!='Q')
        a[g][h]='Q';
        else i--;
    }

    cout<<"press any button"<<endl;
    

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
                if(a[y][x]=='Q')
                score++;
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
                if(a[y][x]=='Q')
                score++;
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
                if(a[y][x]=='Q')
                score++;
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
                if(a[y][x]=='Q')
                score++;
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

        if(Q==score)
        {
            system("CLS");
            setColor(11);
            cout<<"You win!"<<endl;
            break;
        }

    }
}