/*
int arr[10]={12,11,2,7,1}
int arr[]
*/



#include <iostream>
using namespace std;
int Insertion_Sort(int* arr, int* size)
{
    int key, k;
    for (int i = 1; i <= (*size); i++) //[12,11,2,7,1]
    {
        key = arr[i]; 
        k = i - 1;
        while (key < arr[k] && k >= 0) // k>=0 because when k reach less than 0 after that and still key <   
        {
            arr[k+1]=arr[k]; 
            k=k-1;  // Check the key with all the previous value and store it there where key greater than that value
         }
        arr[k+1]=key;
     }
}

int display(int* arr , int* size)
{
for (int i = 0; i < (*size); i++) //[12,11,2,7,1]
    {
       cout<<arr[i]<<" ";
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
    Insertion_Sort(arr, &size);
    display(arr, &size);
    return 0;
}