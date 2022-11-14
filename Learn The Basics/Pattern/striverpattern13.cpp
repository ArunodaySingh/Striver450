//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void printTriangle(int n)
    {
        int k = 0;
        for (int i = 1; i <= n; i++)
        {

            for (int j = n; j >= i; j--)
            {
                cout << "*";
            }
            for (int s = k; s >= 1; s--)
            {
                cout << " ";
            }
            for (int r = n; r >= i; r--)
            {
                cout << "*";
            }
            cout << endl;
            k += 2;
        }
        k-=2;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            for (int s = k; s >= 1; s--)
            {
                cout << " ";
            }
            for (int r = 1; r <= i; r++)
            {
                cout << "*";
            }
            cout << endl;
            k -= 2;
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends