// reverse array using recursion

#include <bits/stdc++.h>
using namespace std;
void reverse_fun(int x, int n, int arr[])
{
    if (n / 2 <= x)
        return;
    swap(arr[x], arr[(n - x) - 1]);
    reverse_fun((x + 1), n, arr);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse_fun(0, n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}