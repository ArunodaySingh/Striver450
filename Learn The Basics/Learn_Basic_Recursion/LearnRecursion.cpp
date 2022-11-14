/*
1- Smaller parts mein tod do problem ko
2- ek ko solve kr lo bakki recursion dekh lega
3- base case lga dena
4- return use kerna mandatory hai
*/
#include <bits/stdc++.h>
using namespace std;
void reachedHome(int des, int src) // pass by value hua hai so dubara se memory allocate hogi fucntion ko haar baad call kerna pa
{
    cout << "source " << src << " destination " << des<<endl;
    if (des == src)
    {
        cout << "reached Home"<<endl;
        return;
    }
    reachedHome(des, src + 1); //iske baad return lgao ya na lgao no problem kyuki braces to end hi kr denga
    cout << "source " << src << " destination " << des<<endl;
}
int main()
{
    int des = 10;
    int src = 1;
    reachedHome(des, src);
    cout<<"I am bck";
    return 0;
}