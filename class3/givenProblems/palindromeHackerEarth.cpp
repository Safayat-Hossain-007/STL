#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin>>s;
        string rs = s;
        reverse(rs.begin(), rs.end());
        if(s ==rs){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}