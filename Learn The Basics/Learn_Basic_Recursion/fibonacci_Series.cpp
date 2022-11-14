#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void fibonacci(int x ,int y,int limit)
{
cnt++;
if(cnt==limit) return;    
int z;
z=x;
x=y;   // solve onecase only bakki kaam recursion dekh lega
y=z+y;
cout<<y<<" ";
fibonacci(x,y,limit);
}
int main()
{
 int n;
 cin>>n;  
 cout<<0<<" "<<1<<" "; 
 fibonacci(0,1,n);
 return 0;
}