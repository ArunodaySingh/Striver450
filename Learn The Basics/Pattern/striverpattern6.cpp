// print pattern
/*
1      1
12    21
123  321
12344321
*/
#include <iostream>
using namespace std;
int main()
{
    int k = 6;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int s = k; s >= 1;s--)
        {
            cout << " ";
        }
        k = k - 2;
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}