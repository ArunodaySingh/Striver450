// pattern of triangle
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=4;j>=i;j--)
        {
          cout<<" ";
        }
        for(int k=1;k<=(i*2)-1;k++)
        {
            cout<<"x";
        }
        cout<<endl;
    }
    return 0;
}