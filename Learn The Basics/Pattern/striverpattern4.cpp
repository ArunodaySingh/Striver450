#include <iostream>
using namespace std;

class pattern
{
    public:
    
    pattern(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "x";
            }
            cout << endl;
        }
        for (int k = n - 1; k >= 1; k--)
        {
            for (int s = 1; s <= k; s++)
            {
                cout << "x";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    pattern obj(n);
    return 0;
}