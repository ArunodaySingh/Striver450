#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;
int main()
{
    int store = 0;
    int arr[5] = {10, 5, 10, 15, 5};
    unordered_map<int, int> m1;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        int count = 0;
        store = arr[i];
        for (int j = 0; j < (sizeof(arr) / sizeof(arr[0])); j++)
        {
            if (store == arr[j])
            {
                ++count;
            }
        }
        m1[store] = count;
    }
    for (auto i : m1)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}

// Auto: Automatic Type Deduction with auto
// With C++11, you can declare a variable or an object without specifying its specific type by using, for example:
// auto i = 42; // i has type int
// double f();
// auto d = f(); // d has type double