#include <bits/stdc++.h>
using namespace std;
void fun1(int x, int y, int n)
{
    int newterm;
    if(n==0)
    {
        return; //It's terminate the program and return to main 
    }
    if (x == 0 && y == 1)
    {
        cout << x << " " << y << " ";
    }
    newterm=x+y;
    cout<<newterm<<" ";
    x=y;
    y=newterm;
    fun1(x,y,n-1);
    
}

int main()
{
    int n;
    cin >> n;
    fun1(0, 1, n);
    return 0;
}