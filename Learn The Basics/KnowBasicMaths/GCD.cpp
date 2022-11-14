#include<iostream>
#include<algorithm>
using namespace std;
int GCD(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    int rem=b%a;
    return GCD(rem,a);
}
// In algorithm header file there is function __gcd(a,b) which give the gcd of two
//number and for lcm we can use (a*b)/gcd 

int main()
{
    int a,b;
    cout<<"Enter the value of two Number "<<endl;
    cin>>a>>b;
    int HCF=GCD(a,b);
    cout<<(a*b)/HCF<<" "<<HCF;
    return 0;
    
}