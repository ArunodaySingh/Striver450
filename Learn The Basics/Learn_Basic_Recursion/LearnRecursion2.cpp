#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 1)
        return 1;
    int smallerProblem = factorial(n - 1);
    int biggerProblem = smallerProblem * n;
}

int main()
{
    int n;
    cin >> n;
    int store = factorial(n);
    cout << store;
    return 0;
}