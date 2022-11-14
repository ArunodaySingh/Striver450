#include<iostream>
using namespace std;
int main()
{
    for(int i=65;i<=68;i++)
    {
        for(int j=67;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=65;k<=i;k++)
        {
            cout<<char(k);
        }
        for(int s=i-1;s>=65;s--)
        {
            cout<<char(s);
        }
        cout<<endl;
    }
    return 0;
}