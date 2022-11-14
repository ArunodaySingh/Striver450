//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int sum = 0;
    long long sumOfDivisors(int N)
    {
        for (int i = 1; i <= N; i++)
        {
            sum += (N / i) * i; // Learn this formula to get sum of divisor
                                // here N/i give how many time 1 came 2 came etc... ans *i
                                //  give no. of occurence with the num
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        long long ans = ob.sumOfDivisors(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends