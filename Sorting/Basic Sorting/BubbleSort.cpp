#include <bits/stdc++.h>
using namespace std;

void fun(int arr[], int n)
{
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n-i-1 ; j++) // becuse in 1st iteration we get the maximum value then we don't need
                                         // to go there for sorting/
                                         // -1 we do because we already compare j with j+1 then don't need to compre last
                                         // largest element shifted to the last position no need to go there again
        {
            if (arr[j] > arr[j+1])  // because in bubble sort we compare with two neighbour element
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    fun(arr, size);
    return 0;
}