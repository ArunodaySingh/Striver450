#include <iostream>
using namespace std;

class ReverseNumber
{
public:
    int ans = 0;
    int func1(int n)
    {

        while (n != 0)
        {
            int digit = n % 10;

            if (ans > (INT_MAX / 10) || ans < (INT_MIN / 10))
            {
                return 0;
            }
            ans = ans * 10 + digit;
            n = n / 10;
        }
        return ans;
    }
};

int main()
{
    ReverseNumber obj;
    int n;
    cin >> n;
    cout << obj.func1(n);
    return 0;
}