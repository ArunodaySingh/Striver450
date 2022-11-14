/*
Like Merge Sort, QuickSort is a Divide and Conquer algorithm.
It picks an element as a pivot and partitions the given array around the picked pivot.
There are many different versions of quickSort that pick pivot in different ways.
Always pick the first element as a pivot.
Always pick the last element as a pivot (implemented below)
Pick a random element as a pivot.
Pick median as the pivot.
The key process in quickSort is a partition().
The target of partitions is, given an array and an element x of an array as the pivot,
put x at its correct position in a sorted array and put all smaller elements (smaller than x) before x,
and put all greater elements (greater than x) after x. All this should be done in linear time
*/

#include <iostream>
using namespace std;

int  partition(int arr[], int lh, int rh)
{
    int count=0;
 
    int pivotValue = arr[lh];
    for (int i = lh + 1; i <= rh; i++)
    {
        if (arr[i] < pivotValue)
        {
            count++;
        }
    }
    int pivotIndex=lh+count;
    swap(arr[lh],arr[pivotIndex]);
   
    
    // left and right vala part smbhal lete hai
    int s=lh;
    int e=rh;
    while(s<pivotIndex && e>pivotIndex)
    {
        while(arr[s]<pivotValue)
        {
            s++;
        }
        
        while(pivotValue<arr[e])
        {
            e--;
        }

        if(s<pivotIndex && e>pivotIndex)
        {
           swap(arr[s++],arr[e--]); 
        }
    }

    return pivotIndex;



}

void  solve(int arr[], int lh, int rh)
{
    //base case
    if (lh >= rh)
    {
        return;
    }
    //partitition krenge
    int pivot = partition(arr, lh, rh);
    // left side dekhlo
    solve(arr, lh, pivot - 1);
    // right side dekhlo
    solve(arr, pivot + 1, rh);
    
}
int main()
{
    int arr[5] = {5, 2, 7, 9, 1};
    int n = 5;
    solve(arr, 0, n - 1);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}