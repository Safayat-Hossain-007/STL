#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int size;
    cin >> t;
    vector<pair<string, string>> p(t);
    for(int i = 0;i<t;i++ ){
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end());
    size = unique(p.begin(), p.end()) - p.begin();
    cout << size;
}