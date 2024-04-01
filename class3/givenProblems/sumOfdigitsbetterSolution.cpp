#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        int sumOfDigits = 0;
        cin>>s;
        for( auto s1 : s){
            sumOfDigits+=(s1 -'0');
        }
        string k = to_string(sumOfDigits);
        string r=k;
        reverse(r.begin(),r.end());
        if(r == k){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }


    }
}