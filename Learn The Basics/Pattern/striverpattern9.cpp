#include<iostream>
using namespace std;
int main()
{
    for(int i=69;i>=65;i--)
    {
        for(int j=65;j<=i;j++)
        {
            cout<<char(j);
        }
        cout<<endl;
    }
    return 0;
}