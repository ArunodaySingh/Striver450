#include<iostream>
using namespace std;

int check_factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*(check_factorial(n-1));
}

int main()
{
    int n;
    cin>>n;
    cout<<check_factorial(n);
    return 0;
}