#include<iostream>             //[64,25,12,22,11] size 5
using namespace std;
void fun1(int arr[],int n)
{
    int min_index;
for(int i=0 ;i<= n-1;i++ )
{
    min_index=i; //indirect way
    for(int j=i+1;j<n;j++)
    {
        if(arr[j] < arr[i])
        {
        //    swap(arr[j],arr[i]); direct way
        min_index=j;
           
        }

    }
    swap(arr[i],arr[min_index]); // swap after getting the min_index of the value compare to i'th index
}
for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }
}

int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 int size=(sizeof(arr)/sizeof(arr[0]));
 fun1(arr,size);
 
 return 0;
}

//time complexity o(n^2)
// space complexity o(1)

