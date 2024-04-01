#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    optimize();
    string s,ans;
    cin>>s;
    s.erase(remove(s.begin(),s.end(),'a'),s.end());
    s.erase(remove(s.begin(),s.end(),'e'),s.end());
    s.erase(remove(s.begin(),s.end(),'i'),s.end());
    s.erase(remove(s.begin(),s.end(),'o'),s.end());
    s.erase(remove(s.begin(),s.end(),'u'),s.end());
    s.erase(remove(s.begin(),s.end(),'A'),s.end());
    s.erase(remove(s.begin(),s.end(),'E'),s.end());
    s.erase(remove(s.begin(),s.end(),'I'),s.end());
    s.erase(remove(s.begin(),s.end(),'O'),s.end());
    s.erase(remove(s.begin(),s.end(),'U'),s.end());
    s.erase(remove(s.begin(),s.end(),'y'),s.end());
    s.erase(remove(s.begin(),s.end(),'Y'),s.end());
   
    for(int i=0;i<s.size();i++){
        if( s[i] != islower(s[i])){
            s[i] = tolower(s[i]);
        }
        ans+='.';
        ans+=s[i];
    }
    
    cout<<ans<<endl;

}