#include<bits/stdc++.h>
using namespace std;

void permute(string str,int l,int r)
{
    if(l==r)
    {
        cout<<str<<endl;
        return;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
           swap(str[l],str[i]); // swaping
           cout<<l<<" "<<i;
           permute(str,l+1,r);  // recursion
           cout<<"direct call "<<str<<" " <<l<<" " <<i<<endl;
           swap(str[l],str[i]); // backtracking
           cout<<"direct call 2 "<<str<<" " <<l<<" " <<i<<endl;
           
        }
        cout<<l<<endl;
    }
return;
}


int main()
{
 string str="abc";
//  cout<<(str.size()-1); //2
 permute(str,0,(str.size()-1));   
 return 0;
}