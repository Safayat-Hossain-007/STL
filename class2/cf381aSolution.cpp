#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int se = 0, de = 0, f1 = 1;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (!v.empty())
    {
        if (f1 == 1)
        {
            if (v[0] > v.back())
            {
                se = se + v[0];
                v.erase(v.begin());
            }
            else
            {
                se = se + v.back();
                v.pop_back();
            }

            f1=2;
        }
        else{
            if(v[0]>v.back()){
                de = de + v[0];
                v.erase(v.begin());
            }
            else{
                de = de+ v.back();
                v.pop_back();
            }
            f1=1;
        }
    }

    cout<<se<<" ";
    
    cout<<de<<" ";
}
