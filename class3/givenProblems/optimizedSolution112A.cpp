#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    optimize();
    string s1,s2,r1,r2;

    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.length();i++){
        s1[i] = tolower(s1[i]);
    }
    for(int i=0;i<s2.length();i++){
        s2[i] = tolower(s2[i]);
    }
    if(s1<s2){
        cout<<"-1"<<endl;
    }else if(s2<s1){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }

    

}