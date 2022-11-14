/*
Recursive Bubble Sort has no performance/implementation advantages,
but can be a good question to check one’s understanding of Bubble Sort and recursion.
*/

#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int size)
{
    int count =0;
    if(size==1)
    {
        return;
    }
for(int i=0;i<=size-1;i++)
{
   if(arr[i+1]<arr[i])
   {
    swap(arr[i+1],arr[i]);
    count++;
   }
}

// Check if any recursion happens or not
      // If any recursion is not happen then return
      if (count==0)
           return;

bubblesort(arr,size-1);
}
int main()
{
 int arr[5]={5,1,4,2,8};
 int size=5;
 bubblesort(arr,size-1);
 for(int i=0;i<5;i++)
 {
    cout<<arr[i]<<" ";
 }
 return 0;
}

// Time Complexity: O(n*n)
// Auxiliary Space: O(n)