//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int i = 1;
    void printNos(int N)
    {
        if(i==N)
        {
            cout<<i;
            return; //when we add return then it starting returning fucntion which stored in stack. using LIFO
        }
        cout<<i++<<" ";
        printNos(N);
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;

    // taking testcases
    cin >> T;

    while (T--)
    {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends