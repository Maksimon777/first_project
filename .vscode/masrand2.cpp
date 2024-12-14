#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;


int main()
{
    int a[10][10];
    sizeof a[10][10];
    cout << "Size of array a: " << sizeof(a) << " bytes" << endl;

    srand(time(NULL));
    for(int i=0;i<10;i++)
    for(int j=0;j<10;j++)
    {
        a[i][j]=rand()%1000;
    }

    for(int i=0;i<10;i++)
    {
        cout<<endl;
    for(int j=0;j<10;j++)
    
        cout << a[i][j] << "\t";
    }
    



}