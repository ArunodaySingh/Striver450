/*
The Merge Sort algorithm is a sorting algorithm that is based on the
 Divide and Conquer paradigm. In this algorithm, the array is initially
  divided into two equal halves and then they are combined in a sorted manner.

Merge Sort Working Process:
Think of it as a recursive algorithm continuously splits the
 array in half until it cannot be further divided. This means that
 if the array becomes empty or has only one element left, the dividing
  will stop, i.e. it is the base case to stop the recursion. If the array
  has multiple elements, split the array into halves and recursively invoke
  the merge sort on each of the halves. Finally, when both halves are sorted,
  the merge operation is applied. Merge operation is the process of taking two
  smaller sorted arrays and combining them to eventually make a larger one.
*/

#include <bits/stdc++.h>
using namespace std;

int merge(int *arr, int lb, int ub)
{
  int mid = (lb + ub) / 2;
  int len1 = (mid - lb) + 1;
  int len2 = (ub - mid);
  int *firstarr = new int[len1];
  int *secondarr = new int[len2];

  int mainindexarr = lb;
  for (int i = 0; i < len1; i++)
  {
    firstarr[i] = arr[mainindexarr++];
  }
  for (int i = 0; i < len2; i++)
  {
    secondarr[i] = arr[mainindexarr++];
  }

  int index1 = 0;
  int index2 = 0;
  mainindexarr = lb;
  while (index1 < len1 && index2 < len2)
  {

    if (firstarr[index1] < secondarr[index2])
    {
      // cout<<firstarr[index1++]<<endl;
      arr[mainindexarr++] = firstarr[index1++];
    }
    else
    {
      // cout<<secondarr[index2];
      arr[mainindexarr++] = secondarr[index2++];
    }
  }
  while (index1 < len1)
  {
    arr[mainindexarr++] = firstarr[index1++];
  }
  while (index2 < len2)
  {
    arr[mainindexarr++] = secondarr[index2++];
  }

  delete[] firstarr;
  delete[] secondarr;
}

void mergeSort(int *arr, int lb, int ub)
{

  if (lb >= ub)
  {
    return;
  }

  int mid = (ub + lb) / 2;
  // left vala merge kro na recursion tree padha hai
  mergeSort(arr, lb, mid);
  // right vala merge kro na recursion tree padha hai
  mergeSort(arr, mid + 1, ub);
  // ab recursion tree bn gya hoga suru kro merge kerna

  merge(arr, lb, ub);
}
int main()
{
  int arr[10] = {2, 4, 56, 1, 2, 8, 0, 5, 7, 15};
  mergeSort(arr, 0, 9);
  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
/*
(s+e)/2 can overflow when both s and e have maximum possible value of integer i.e. 2^31-1.
This will result in wrong answer.
So to optimise this, we write-
int mid= start + (end  -  start)/2 to handle such edge cases.
*/