#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    set<int> s;
    while(t--){
        int y,x;
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y == 2){
            if(s.count(x) == 1){
                s.erase(x);
            }
        }
        else{
            if(s.count(x)==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}