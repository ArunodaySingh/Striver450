//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int i = 1;
    void printNos(int N,string *name)
    {
        if(i==N)
        {
            cout<<endl;
            return; //when we add return then it starting returning fucntion which stored in stack. using LIFO
        }
        int length=(*(name)).length();
        cout<<"Lenght of the name is "<<length;
        cout<<*name<<endl;
        ++i;

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
        string name;

        // input N
        cin >> N>>name;
        Solution ob;
        // calling printNos() function
        ob.printNos(N, &name);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends