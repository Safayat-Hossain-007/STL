#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    int t;
    string s;
    //Finding out the next_permutation of the string
    // cin>> s;
    // bool f1 = next_permutation(s.begin(),s.end());
    // cout<<f1<<" "<<s;

    cin>>t;
    while(t--){
        cin>>s;
        bool f = next_permutation(s.begin(),s.end());
        if(f == 1){
            cout<<s<<endl;
        }
        else{
            cout<<"no answer"<<endl;
        }
    }
    
}