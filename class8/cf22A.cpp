#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, size;
    cin >> t;
    set<int> s;
    while (t--)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    if (s.size() == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << *(++s.begin()) << endl;
    }
}
