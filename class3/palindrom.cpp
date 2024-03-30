#include <bits/stdc++.h>
using namespace std;
int main()
{
    // finding out the palindrome of the string
    string s = "aaabaaa";
    string temp;
    temp = s;
    reverse(temp.begin(), temp.end());
    if (s == temp)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
}