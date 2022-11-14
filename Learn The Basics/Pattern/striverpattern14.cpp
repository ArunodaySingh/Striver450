//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
       int for_space=((n*2)-2);
       for(int i=1;i<=n;i++)
       {
        
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for (int k = 1; k<=for_space;k++)
        {
            cout<<" ";
        }
        for(int right_side=1;right_side<=i;right_side++)
        {
            cout<<"*";
        }
        for_space=for_space-2;
        cout<<endl;
       }
       for_space=for_space+4;
       for(int i=2;i<=n;i++)
       {
        
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        for (int k = 1; k<=for_space;k++)
        {
            cout<<" ";
        }
        for(int right_side=n;right_side>=i;right_side--)
        {
            cout<<"*";
        }

        for_space=for_space+2;
        cout<<endl;
       }
       

    }
};

//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends