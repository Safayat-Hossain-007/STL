#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    optimize();
    string s1,s2,r1,r2;

    cin>>s1;
    cin>>s2;
    for(auto r: s1){
        char c1 = tolower(r);
        r1 = r1+c1;
    }
    for(auto r : s2){
        char c1 = tolower(r);
        r2 = r2+ c1;
    }
    
    if(r1<r2){
        cout<<"-1"<<endl;
    }else if(r2<r2){
        cout<<"-1"<<endl;
    }else{
        cout<<"0"<<endl;
    }

    

}