/*
How to implement it recursively? 
Recursive Insertion Sort has no performance/implementation advantages, but can be a good question to check one’s understanding of Insertion Sort and recursion.
If we take a closer look at Insertion Sort algorithm, we keep processed elements sorted and insert new elements one by one in the sorted array.
Recursion Idea. 
 

Base Case: If array size is 1 or smaller, return.
Recursively sort first n-1 elements.
Insert last element at its correct position in sorted array.

Time Complexity: O(n2)
Auxiliary Space: O(n)
*/
void Insertion_Sort(int arr[],int size)
{
    //base case
if(size<=0) return;
Insertion_Sort(arr,size-1);
int key=arr[size];
int k=size-1;
while(k>=0 && key<arr[k])   //{5,1,4,2,8} //{1,5,4,2,8}
{
    arr[k+1]=arr[k];
    k--;
}
arr[k+1]=key;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int arr[8]={9,7,6,15,17,5,10,11};
 int size=8;
 Insertion_Sort(arr,size-1);
 for(int i=0;i<8;i++)
 {
    cout<<arr[i]<<" ";
 }   
 return 0;
}