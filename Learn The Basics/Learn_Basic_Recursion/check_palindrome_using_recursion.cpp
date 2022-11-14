//striver 450 check palindrome using recursion

#include<iostream>
using namespace std;
bool check_palindrome(int x,string word)
{
    if(x>=(word.size())/2) return true;
    if(word[x]!=word[(word.size()-x)-1]) return false;
    return check_palindrome((x+1),word);

} 

int main()
{
    string word;
    cin>>word;
    cout<<check_palindrome(0,word);
    return 0;
}