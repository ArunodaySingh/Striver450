// print diamonds

#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void printDiamond(int n)
    {
        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int star = 1; star <= i; star++)
            {
                cout << "*"<<" ";
            }
            cout<<endl;
        }
        for (int k = n; k >= 1; k--)
        {
            for (int s = 5; s > k; s--)
            {
                cout << " ";
            }
            for(int star=1;star<=k;star++)
            {
                cout<<"*"<<" ";
            }
             cout<<endl;
        }

    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends