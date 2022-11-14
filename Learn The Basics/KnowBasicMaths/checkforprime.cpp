#include<iostream>
using namespace std;

string check(int n)
{
    bool ch=false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
           ch=true;
        }
        
    }
    return (ch!=true)?"Prime":"Not";
    
}

int main()
{
    int n;
    cout<<"Enter the value buddy "<<endl;
    cin>>n;
    cout<<check(n);
    return 0;
}