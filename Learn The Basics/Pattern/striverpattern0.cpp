#include <iostream>
using namespace std;
int main()
{
   for (int i = 1; i <= 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (int s = 2; s <= i; s++)
        {
            cout << s;
        }
         cout<<endl;
    }
   
    return 0;
}