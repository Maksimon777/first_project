#include <iostream>
using namespace std;

template <typename T> T proizv(T a, T b) 
{
    return a * b;
}

int main()
{
     double b = 10.5,a=10;
    cout<<proizv(a, b)<<endl;
}