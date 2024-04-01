#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n';
int main(){
    optimize();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0;
        int m;
        while(n>0){
            int m = n%10;
            sum= sum + m;
            n = n/10;
        }
        string s = to_string(sum);
        string r = s;
        reverse(r.begin(),r.end());
        if(s == r){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


    }

}